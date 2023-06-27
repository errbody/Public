#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "challenge.h"

uint64_t seed;

static void srand(uint64_t _seed)
{
	seed = _seed;
}

static void shuffle_seed(void)
{
	seed = ((seed << 0x20) & 0xffffffff00000000) | ((seed >> 0x20) & 0x00000000ffffffff);
	seed = ((seed << 0x10) & 0xffff0000ffff0000) | ((seed >> 0x10) & 0x0000ffff0000ffff);
}

static void shuffle_seed2(void)
{
	seed = seed ^ 0xdfa185f7ed9e179a;
}

static int rand()
{
	int ret = 0;

	shuffle_seed();
	shuffle_seed2();

	// thanks stackoverflow
	// https://stackoverflow.com/questions/1026327/what-common-algorithms-are-used-for-cs-rand
        seed = (seed * 0x343fd + 0x269ec3);
        ret = (seed >> 0x10) & 0x7FFFFFFF;

	shuffle_seed2();
	shuffle_seed();
	return ret;
}

int main()
{
	char * msg = MSG; // contains only ascii characters

	srand(TRUE_RANDOM_SEED_U64); // seed is 8 bytes from /dev/random
	for (int i = 0; i <= strlen(msg); i++)
	{
		printf("%c", msg[i] ^ rand());
	}
	/*
	33 E3 AC 3F A7 58 90 60 DE AB AA 15 FC CF 42 03 63 3A 40 F0 B0 1D D7 ED 5E 01 9C BA F5 F3 6E 4F 5A 29 85 0C 1C 4A F2 86 90 55 08 D5 49 9B 64 E2 FD 14 95 A2 96 6A 1C EB 72 6E CD 0F 7F 46 01 AD 58 A9 3B DA 15 B2 65 BA 7D E4 6E EC FC 80 A7 BD D2 D4 F0 7C A8 0E AF 3E D0 82 BF 7B C8 B8 5A 26 F1 21 7F 48 D8 AC F7 D6 95 42 68 5D 9E 57 DB 45 B0 52 7D 7E 30 7F 93 01 BD C6 FA 82
	*/
	return 0;
}
