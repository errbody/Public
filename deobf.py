from pwn import *
DATA = open("maze-amo", "rb").read()
PATH = open("maze-amo-path", "wb")
NEW_DATA = DATA

# 48 31 CA                                   xor     rdx, rcx
# 48 89 10                                   mov     [rax], rdx
sig = b"\x48\x31\xCA\x48\x89\x10"
rip = 0x1545 # run() func
end = 0x71B7

i = 0
s = ""
while rip <= end:
    tmp = DATA.find(sig, rip)
    if tmp == -1:
        break
    rip = tmp + 6
    key_offset  = tmp - 14
    asm_str = disasm(DATA[key_offset:key_offset+7], byte=0, arch='amd64').split("# ")
    real_key_offset = key_offset + int(asm_str[1], 16)
    real_key_offset -= 4096
    key = DATA[real_key_offset:real_key_offset+8]
    old_code = DATA[rip:rip+8]
    new_code = u64(key) ^ u64(old_code)
    NEW_DATA = NEW_DATA.replace(old_code, p64(new_code))

# Delete CODE XOR 
#NEW_DATA = NEW_DATA.replace(sig, b"\x90" * 6)
PATH.write(NEW_DATA)
PATH.close()
