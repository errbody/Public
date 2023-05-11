int run()
{
  v0 = (&loc_71A2 - (_UNKNOWN *)run + 4095) & 0xFFFFFFFFFFFFF000LL;
  v1 = (unsigned __int64)run & 0xFFFFFFFFFFFFF000LL;
  mprotect((void *)((unsigned __int64)run & 0xFFFFFFFFFFFFF000LL), v0, 7);
  v2 = 0LL;
  while ( 1 )
  {
LABEL_2:
    loc_15C8 ^= values;
    input = get_input(v1, v0, loc_15C8 ^ values, loc_15C8, v2 + 20);
    if ( input == 'w' )
      goto LABEL_1048;
    if ( input != 'a' )
      break;
LABEL_72:
    while ( 2 )
    {
      loc_1B36 ^= qword_A090;
      v18 = get_input(v1, v0, loc_1B36 ^ qword_A090, loc_1B36, v2 + 59);
      if ( v18 == 'w' )
        goto LABEL_1118;
      if ( v18 == 'a' )
      {
LABEL_67:
        loc_1AD0 ^= qword_A088;
        v17 = get_input(v1, v0, loc_1AD0 ^ qword_A088, loc_1AD0, v2 + 5);
        if ( v17 != 'w' )
        {
          if ( v17 != 'a' )
          {
            if ( v17 != 'd' )
            {
              if ( v17 != 's' )
                return puts("Failed!");
              goto LABEL_142;
            }
            continue;
          }
          goto LABEL_62;
        }
        goto LABEL_1113;
      }
      break;
    }
    if ( v18 != 'd' )
    {
      if ( v18 == 's' )
        goto LABEL_147;
      return puts("Failed!");
    }
  }
  if ( input == 'd' )
    goto LABEL_7;
  if ( input != 's' )
    return puts("Failed!");
  while ( 1 )
  {
LABEL_77:
    loc_1B9E ^= qword_A098;
    v19 = get_input(v1, v0, loc_1B9E ^ qword_A098, loc_1B9E, v2 + 47);
    if ( v19 == 'w' )
      goto LABEL_2;
    if ( v19 == 'a' )
      goto LABEL_147;
    if ( v19 != 'd' )
    {
      if ( v19 != 's' )
        return puts("Failed!");
      goto LABEL_152;
    }
LABEL_82:
    while ( 1 )
    {
      loc_1C02 ^= qword_A0A0;
      v20 = get_input(v1, v0, loc_1C02 ^ qword_A0A0, loc_1C02, v2 + 34);
      if ( v20 == 'w' )
        break;
      if ( v20 == 'a' )
        goto LABEL_77;
      if ( v20 == 'd' )
        goto LABEL_87;
      if ( v20 != 's' )
        return puts("Failed!");
LABEL_157:
      loc_21D3 ^= qword_A118;
      v35 = get_input(v1, v0, loc_21D3 ^ qword_A118, loc_21D3, v2 + 52);
      if ( v35 != 'w' )
      {
        if ( v35 != 'a' )
        {
          if ( v35 != 'd' )
          {
            if ( v35 != 's' )
              return puts("Failed!");
            goto LABEL_232;
          }
          goto LABEL_162;
        }
        goto LABEL_152;
      }
    }
    while ( 1 )
    {
LABEL_7:
      loc_162B ^= qword_A028;
      v5 = get_input(v1, v0, loc_162B ^ qword_A028, loc_162B, v2 + 44);
      if ( v5 != 'w' )
      {
        if ( v5 != 'a' )
        {
          if ( v5 != 'd' )
          {
            if ( v5 != 's' )
              return puts("Failed!");
            goto LABEL_82;
          }
          goto LABEL_12;
        }
        goto LABEL_2;
      }
LABEL_1053:
      loc_679F ^= qword_A6B8;
      v214 = get_input(v1, v0, loc_679F ^ qword_A6B8, loc_679F, v2 + 18);
      if ( v214 == 'w' )
        goto LABEL_978;
      if ( v214 == 'a' )
      {
LABEL_1048:
        while ( 1 )
        {
          loc_673C ^= qword_A6B0;
          v213 = get_input(v1, v0, loc_673C ^ qword_A6B0, loc_673C, v2 + 18);
          if ( v213 == 'w' )
            goto LABEL_973;
          if ( v213 != 'a' )
          {
            if ( v213 == 'd' )
              goto LABEL_1053;
            if ( v213 != 's' )
              return puts("Failed!");
            goto LABEL_2;
          }
LABEL_1118:
          while ( 1 )
          {
            loc_6CA6 ^= qword_A720;
            v227 = get_input(v1, v0, loc_6CA6 ^ qword_A720, loc_6CA6, v2 + 19);
            if ( v227 != 'w' )
              break;
            while ( 1 )
            {
LABEL_1043:
              loc_66D5 ^= qword_A6A8;
              v212 = get_input(v1, v0, loc_66D5 ^ qword_A6A8, loc_66D5, v2 + 18);
              if ( v212 == 'w' )
                goto LABEL_968;
              if ( v212 != 'a' )
                break;
LABEL_1038:
              while ( 2 )
              {
                loc_6672 ^= qword_A6A0;
                v211 = get_input(v1, v0, loc_6672 ^ qword_A6A0, loc_6672, v2 + 19);
                if ( v211 == 'w' )
                  goto LABEL_963;
                if ( v211 == 'a' )
                  goto LABEL_1033;
                if ( v211 != 'd' )
                {
                  if ( v211 != 's' )
                    return puts("Failed!");
LABEL_1113:
                  loc_6C43 ^= qword_A718;
                  v226 = get_input(v1, v0, loc_6C43 ^ qword_A718, loc_6C43, v2 + 10);
                  if ( v226 != 'w' )
                  {
                    if ( v226 != 'a' )
                    {
                      if ( v226 != 'd' )
                      {
                        if ( v226 != 's' )
                          return puts("Failed!");
                        goto LABEL_67;
                      }
                      goto LABEL_1118;
                    }
                    goto LABEL_1108;
                  }
                  continue;
                }
                break;
              }
            }
            if ( v212 == 'd' )
              goto LABEL_973;
            if ( v212 != 's' )
              return puts("Failed!");
          }
          if ( v227 == 'a' )
            goto LABEL_1113;
          if ( v227 != 'd' )
          {
            if ( v227 != 's' )
              return puts("Failed!");
            goto LABEL_72;
          }
        }
      }
      if ( v214 == 'd' )
        break;
      if ( v214 != 's' )
        return puts("Failed!");
    }
    while ( 1 )
    {
LABEL_1058:
      loc_6802 ^= qword_A6C0;
      v215 = get_input(v1, v0, loc_6802 ^ qword_A6C0, loc_6802, v2 + 38);
      if ( v215 != 'w' )
      {
        if ( v215 != 'a' )
        {
          if ( v215 != 'd' )
          {
            if ( v215 != 's' )
              return puts("Failed!");
            goto LABEL_12;
          }
          goto LABEL_1063;
        }
        goto LABEL_1053;
      }
LABEL_983:
      loc_6231 ^= qword_A648;
      v200 = get_input(v1, v0, loc_6231 ^ qword_A648, loc_6231, v2 + 3);
      if ( v200 == 'w' )
      {
LABEL_908:
        while ( 2 )
        {
          while ( 1 )
          {
            loc_5C60 ^= qword_A5D0;
            v185 = get_input(v1, v0, loc_5C60 ^ qword_A5D0, loc_5C60, v2 + 58);
            if ( v185 == 'w' )
              break;
            if ( v185 == 'a' )
              goto LABEL_903;
            if ( v185 != 'd' )
            {
              if ( v185 != 's' )
                return puts("Failed!");
              goto LABEL_983;
            }
LABEL_913:
            loc_5CC3 ^= qword_A5D8;
            v186 = get_input(v1, v0, loc_5CC3 ^ qword_A5D8, loc_5CC3, v2 + 27);
            if ( v186 == 'w' )
              goto LABEL_838;
            if ( v186 != 'a' )
            {
              if ( v186 != 'd' )
              {
                if ( v186 != 's' )
                  return puts("Failed!");
                goto LABEL_988;
              }
              goto LABEL_918;
            }
          }
LABEL_833:
          loc_568F ^= qword_A558;
          v170 = get_input(v1, v0, loc_568F ^ qword_A558, loc_568F, v2 + 35);
          if ( v170 == 'w' )
          {
LABEL_758:
            while ( 1 )
            {
              loc_50BE ^= qword_A4E0;
              v155 = get_input(v1, v0, loc_50BE ^ qword_A4E0, loc_50BE, v2 + 13);
              if ( v155 == 'w' )
                goto LABEL_683;
              if ( v155 == 'a' )
                goto LABEL_753;
              if ( v155 != 'd' )
              {
                if ( v155 != 's' )
                  return puts("Failed!");
                goto LABEL_833;
              }
LABEL_763:
              loc_5121 ^= qword_A4E8;
              v156 = get_input(v1, v0, loc_5121 ^ qword_A4E8, loc_5121, v2 + 11);
              if ( v156 == 'w' )
                goto LABEL_688;
              if ( v156 != 'a' )
              {
                if ( v156 != 'd' )
                {
                  if ( v156 != 's' )
                    return puts("Failed!");
                  goto LABEL_838;
                }
                goto LABEL_768;
              }
            }
          }
          if ( v170 != 'a' )
          {
            if ( v170 != 'd' )
            {
              if ( v170 != 's' )
                return puts("Failed!");
              continue;
            }
            goto LABEL_838;
          }
          goto LABEL_828;
        }
      }
      if ( v200 == 'a' )
        break;
      if ( v200 == 'd' )
      {
LABEL_988:
        while ( 1 )
        {
          loc_6294 ^= qword_A650;
          v201 = get_input(v1, v0, loc_6294 ^ qword_A650, loc_6294, v2 + 3);
          switch ( v201 )
          {
            case 'w':
              goto LABEL_913;
            case 'a':
              goto LABEL_983;
            case 'd':
              goto LABEL_993;
          }
          if ( v201 != 's' )
            return puts("Failed!");
LABEL_1063:
          loc_6865 ^= qword_A6C8;
          v216 = get_input(v1, v0, loc_6865 ^ qword_A6C8, loc_6865, v2 + 31);
          if ( v216 != 'w' )
          {
            if ( v216 != 'a' )
            {
              if ( v216 != 'd' )
              {
                if ( v216 != 's' )
                  return puts("Failed!");
                goto LABEL_17;
              }
              goto LABEL_1068;
            }
            goto LABEL_1058;
          }
        }
      }
      if ( v200 != 's' )
        return puts("Failed!");
    }
LABEL_978:
    loc_61CE ^= qword_A640;
    v199 = get_input(v1, v0, loc_61CE ^ qword_A640, loc_61CE, v2 + 7);
    if ( v199 == 'w' )
      break;
    if ( v199 != 'a' )
    {
      if ( v199 != 'd' )
      {
        if ( v199 != 's' )
          return puts("Failed!");
        goto LABEL_1053;
      }
      goto LABEL_983;
    }
LABEL_973:
    loc_616B ^= qword_A638;
    v198 = get_input(v1, v0, loc_616B ^ qword_A638, loc_616B, v2 + 27);
    if ( v198 != 'w' )
    {
      if ( v198 == 'a' )
        goto LABEL_1043;
      if ( v198 != 'd' )
      {
        if ( v198 != 's' )
          return puts("Failed!");
        goto LABEL_1048;
      }
      goto LABEL_978;
    }
LABEL_898:
    while ( 2 )
    {
      while ( 1 )
      {
        loc_5B9A ^= qword_A5C0;
        v183 = get_input(v1, v0, loc_5B9A ^ qword_A5C0, loc_5B9A, v2 + 45);
        if ( v183 == 'w' )
          break;
        if ( v183 != 'a' )
        {
          if ( v183 == 'd' )
            goto LABEL_903;
          if ( v183 != 's' )
            return puts("Failed!");
          goto LABEL_973;
        }
LABEL_968:
        loc_6104 ^= qword_A630;
        v197 = get_input(v1, v0, loc_6104 ^ qword_A630, loc_6104, v2 + 41);
        if ( v197 == 'w' )
        {
LABEL_893:
          while ( 1 )
          {
            loc_5B33 ^= qword_A5B8;
            v182 = get_input(v1, v0, loc_5B33 ^ qword_A5B8, loc_5B33, v2 + 15);
            if ( v182 == 'w' )
              goto LABEL_818;
            if ( v182 != 'a' )
            {
              if ( v182 == 'd' )
                goto LABEL_823;
              if ( v182 != 's' )
                return puts("Failed!");
              goto LABEL_968;
            }
LABEL_888:
            while ( 2 )
            {
              loc_5AD0 ^= qword_A5B0;
              v181 = get_input(v1, v0, loc_5AD0 ^ qword_A5B0, loc_5AD0, v2 + 41);
              if ( v181 == 'w' )
                goto LABEL_813;
              if ( v181 == 'a' )
                goto LABEL_883;
              if ( v181 != 'd' )
              {
                if ( v181 != 's' )
                  return puts("Failed!");
LABEL_963:
                loc_60A1 ^= qword_A628;
                v196 = get_input(v1, v0, loc_60A1 ^ qword_A628, loc_60A1, v2 + 23);
                if ( v196 != 'w' )
                {
                  if ( v196 != 'a' )
                  {
                    if ( v196 != 'd' )
                    {
                      if ( v196 != 's' )
                        return puts("Failed!");
                      goto LABEL_1038;
                    }
                    goto LABEL_968;
                  }
                  goto LABEL_958;
                }
                continue;
              }
              break;
            }
          }
        }
        if ( v197 == 'a' )
          goto LABEL_963;
        if ( v197 != 'd' )
        {
          if ( v197 == 's' )
            goto LABEL_1043;
          return puts("Failed!");
        }
      }
LABEL_823:
      loc_55C9 ^= qword_A548;
      v168 = get_input(v1, v0, loc_55C9 ^ qword_A548, loc_55C9, v2 + 12);
      if ( v168 != 'w' )
      {
        if ( v168 == 'a' )
          goto LABEL_893;
        if ( v168 != 'd' )
        {
          if ( v168 != 's' )
            return puts("Failed!");
          continue;
        }
        goto LABEL_828;
      }
      break;
    }
LABEL_748:
    while ( 2 )
    {
      while ( 1 )
      {
        loc_4FF8 ^= qword_A4D0;
        v153 = get_input(v1, v0, loc_4FF8 ^ qword_A4D0, loc_4FF8, v2 + 5);
        if ( v153 == 'w' )
          break;
        if ( v153 != 'a' )
        {
          if ( v153 == 'd' )
            goto LABEL_753;
          if ( v153 != 's' )
            return puts("Failed!");
          goto LABEL_823;
        }
LABEL_818:
        loc_5562 ^= qword_A540;
        v167 = get_input(v1, v0, loc_5562 ^ qword_A540, loc_5562, v2 + 54);
        if ( v167 == 'w' )
        {
LABEL_743:
          while ( 1 )
          {
            loc_4F91 ^= qword_A4C8;
            v152 = get_input(v1, v0, loc_4F91 ^ qword_A4C8, loc_4F91, v2 + 29);
            if ( v152 == 'w' )
              goto LABEL_668;
            if ( v152 != 'a' )
            {
              if ( v152 == 'd' )
                goto LABEL_673;
              if ( v152 != 's' )
                return puts("Failed!");
              goto LABEL_818;
            }
LABEL_738:
            while ( 2 )
            {
              loc_4F2E ^= qword_A4C0;
              v151 = get_input(v1, v0, loc_4F2E ^ qword_A4C0, loc_4F2E, v2 + 35);
              if ( v151 == 'w' )
                goto LABEL_663;
              if ( v151 == 'a' )
                goto LABEL_733;
              if ( v151 != 'd' )
              {
                if ( v151 != 's' )
                  return puts("Failed!");
LABEL_813:
                loc_54FF ^= qword_A538;
                v166 = get_input(v1, v0, loc_54FF ^ qword_A538, loc_54FF, v2 + 42);
                if ( v166 != 'w' )
                {
                  if ( v166 != 'a' )
                  {
                    if ( v166 != 'd' )
                    {
                      if ( v166 != 's' )
                        return puts("Failed!");
                      goto LABEL_888;
                    }
                    goto LABEL_818;
                  }
                  goto LABEL_808;
                }
                continue;
              }
              break;
            }
          }
        }
        if ( v167 == 'a' )
          goto LABEL_813;
        if ( v167 != 'd' )
        {
          if ( v167 == 's' )
            goto LABEL_893;
          return puts("Failed!");
        }
      }
LABEL_673:
      loc_4A27 ^= qword_A458;
      v138 = get_input(v1, v0, loc_4A27 ^ qword_A458, loc_4A27, v2 + 41);
      if ( v138 != 'w' )
      {
        if ( v138 == 'a' )
          goto LABEL_743;
        if ( v138 != 'd' )
        {
          if ( v138 != 's' )
            return puts("Failed!");
          continue;
        }
        goto LABEL_678;
      }
      break;
    }
LABEL_598:
    while ( 2 )
    {
      while ( 1 )
      {
        loc_4456 ^= qword_A3E0;
        v123 = get_input(v1, v0, loc_4456 ^ qword_A3E0, loc_4456, v2 + 29);
        if ( v123 == 'w' )
          break;
        if ( v123 != 'a' )
        {
          if ( v123 == 'd' )
            goto LABEL_603;
          if ( v123 != 's' )
            return puts("Failed!");
          goto LABEL_673;
        }
LABEL_668:
        loc_49C0 ^= qword_A450;
        v137 = get_input(v1, v0, loc_49C0 ^ qword_A450, loc_49C0, v2 + 47);
        if ( v137 == 'w' )
        {
LABEL_593:
          while ( 1 )
          {
            loc_43EF ^= qword_A3D8;
            v122 = get_input(v1, v0, loc_43EF ^ qword_A3D8, loc_43EF, v2 + 44);
            if ( v122 == 'w' )
              goto LABEL_522;
            if ( v122 != 'a' )
            {
              if ( v122 == 'd' )
                goto LABEL_527;
              if ( v122 != 's' )
                return puts("Failed!");
              goto LABEL_668;
            }
LABEL_588:
            while ( 2 )
            {
              loc_438C ^= qword_A3D0;
              v121 = get_input(v1, v0, loc_438C ^ qword_A3D0, loc_438C, v2 + 55);
              if ( v121 == 'w' )
                goto LABEL_517;
              if ( v121 == 'a' )
                goto LABEL_583;
              if ( v121 != 'd' )
              {
                if ( v121 != 's' )
                  return puts("Failed!");
LABEL_663:
                loc_495D ^= qword_A448;
                v136 = get_input(v1, v0, loc_495D ^ qword_A448, loc_495D, v2 + 16);
                if ( v136 != 'w' )
                {
                  if ( v136 != 'a' )
                  {
                    if ( v136 != 'd' )
                    {
                      if ( v136 != 's' )
                        return puts("Failed!");
                      goto LABEL_738;
                    }
                    goto LABEL_668;
                  }
                  goto LABEL_658;
                }
                continue;
              }
              break;
            }
          }
        }
        if ( v137 == 'a' )
          goto LABEL_663;
        if ( v137 != 'd' )
        {
          if ( v137 == 's' )
            goto LABEL_743;
          return puts("Failed!");
        }
      }
LABEL_527:
      loc_3E85 ^= qword_A368;
      v109 = get_input(v1, v0, loc_3E85 ^ qword_A368, loc_3E85, v2 + 33);
      if ( v109 != 'w' )
      {
        if ( v109 == 'a' )
          goto LABEL_593;
        if ( v109 != 'd' )
        {
          if ( v109 != 's' )
            return puts("Failed!");
          continue;
        }
LABEL_532:
        while ( 1 )
        {
          loc_3EE8 ^= qword_A370;
          v110 = get_input(v1, v0, loc_3EE8 ^ qword_A370, loc_3EE8, v2 + 54);
          switch ( v110 )
          {
            case 'w':
              goto LABEL_457;
            case 'a':
              goto LABEL_527;
            case 'd':
              while ( 1 )
              {
LABEL_537:
                loc_3F4B ^= qword_A378;
                v111 = get_input(v1, v0, loc_3F4B ^ qword_A378, loc_3F4B, v2 + 17);
                if ( v111 != 'w' )
                {
                  if ( v111 != 'a' )
                  {
                    if ( v111 != 'd' )
                    {
                      if ( v111 != 's' )
                        return puts("Failed!");
                      goto LABEL_608;
                    }
                    goto LABEL_542;
                  }
                  goto LABEL_532;
                }
LABEL_462:
                loc_397A ^= qword_A300;
                v96 = get_input(v1, v0, loc_397A ^ qword_A300, loc_397A, v2 + 44);
                if ( v96 == 'w' )
                  break;
                if ( v96 == 'a' )
                  goto LABEL_457;
                if ( v96 == 'd' )
                {
LABEL_467:
                  while ( 1 )
                  {
                    loc_39DD ^= qword_A308;
                    v97 = get_input(v1, v0, loc_39DD ^ qword_A308, loc_39DD, v2 + 9);
                    switch ( v97 )
                    {
                      case 'w':
                        goto LABEL_392;
                      case 'a':
                        goto LABEL_462;
                      case 'd':
                        goto LABEL_472;
                    }
                    if ( v97 != 's' )
                      return puts("Failed!");
LABEL_542:
                    loc_3FAE ^= qword_A380;
                    v112 = get_input(v1, v0, loc_3FAE ^ qword_A380, loc_3FAE, v2 + 56);
                    if ( v112 != 'w' )
                    {
                      if ( v112 != 'a' )
                      {
                        if ( v112 != 'd' )
                        {
                          if ( v112 != 's' )
                            return puts("Failed!");
                          goto LABEL_613;
                        }
                        goto LABEL_547;
                      }
                      goto LABEL_537;
                    }
                  }
                }
                if ( v96 != 's' )
                  return puts("Failed!");
              }
              while ( 1 )
              {
LABEL_387:
                loc_33A9 ^= qword_A288;
                v81 = get_input(v1, v0, loc_33A9 ^ qword_A288, loc_33A9, v2 + 4);
                if ( v81 != 'w' )
                {
                  if ( v81 != 'a' )
                  {
                    if ( v81 != 'd' )
                    {
                      if ( v81 != 's' )
                        return puts("Failed!");
                      goto LABEL_462;
                    }
                    goto LABEL_392;
                  }
                  goto LABEL_382;
                }
LABEL_312:
                loc_2DD8 ^= qword_A210;
                v66 = get_input(v1, v0, loc_2DD8 ^ qword_A210, loc_2DD8, v2 + 42);
                if ( v66 == 'w' )
                  break;
                if ( v66 == 'a' )
                  goto LABEL_307;
                if ( v66 == 'd' )
                {
LABEL_317:
                  while ( 1 )
                  {
                    loc_2E3B ^= qword_A218;
                    v67 = get_input(v1, v0, loc_2E3B ^ qword_A218, loc_2E3B, v2 + 1);
                    switch ( v67 )
                    {
                      case 'w':
                        goto LABEL_242;
                      case 'a':
                        goto LABEL_312;
                      case 'd':
                        goto LABEL_322;
                    }
                    if ( v67 != 's' )
                      return puts("Failed!");
LABEL_392:
                    loc_340C ^= qword_A290;
                    v82 = get_input(v1, v0, loc_340C ^ qword_A290, loc_340C, v2 + 24);
                    if ( v82 != 'w' )
                    {
                      if ( v82 != 'a' )
                      {
                        if ( v82 != 'd' )
                        {
                          if ( v82 != 's' )
                            return puts("Failed!");
                          goto LABEL_467;
                        }
                        goto LABEL_397;
                      }
                      goto LABEL_387;
                    }
                  }
                }
                if ( v66 != 's' )
                  return puts("Failed!");
              }
              while ( 1 )
              {
LABEL_237:
                loc_2807 ^= qword_A198;
                v51 = get_input(v1, v0, loc_2807 ^ qword_A198, loc_2807, v2 + 19);
                if ( v51 != 'w' )
                {
                  if ( v51 != 'a' )
                  {
                    if ( v51 != 'd' )
                    {
                      if ( v51 != 's' )
                        return puts("Failed!");
                      goto LABEL_312;
                    }
                    goto LABEL_242;
                  }
                  goto LABEL_232;
                }
LABEL_162:
                loc_2236 ^= qword_A120;
                v36 = get_input(v1, v0, loc_2236 ^ qword_A120, loc_2236, v2 + 25);
                if ( v36 == 'w' )
                  break;
                if ( v36 == 'a' )
                  goto LABEL_157;
                if ( v36 == 'd' )
                {
LABEL_167:
                  while ( 1 )
                  {
                    loc_2299 ^= qword_A128;
                    v37 = get_input(v1, v0, loc_2299 ^ qword_A128, loc_2299, v2 + 24);
                    switch ( v37 )
                    {
                      case 'w':
                        goto LABEL_92;
                      case 'a':
                        goto LABEL_162;
                      case 'd':
                        goto LABEL_172;
                    }
                    if ( v37 != 's' )
                      return puts("Failed!");
LABEL_242:
                    loc_286A ^= qword_A1A0;
                    v52 = get_input(v1, v0, loc_286A ^ qword_A1A0, loc_286A, v2 + 2);
                    if ( v52 != 'w' )
                    {
                      if ( v52 != 'a' )
                      {
                        if ( v52 != 'd' )
                        {
                          if ( v52 != 's' )
                            return puts("Failed!");
                          goto LABEL_317;
                        }
                        goto LABEL_247;
                      }
                      goto LABEL_237;
                    }
                  }
                }
                if ( v36 != 's' )
                  return puts("Failed!");
              }
              while ( 1 )
              {
LABEL_87:
                loc_1C65 ^= qword_A0A8;
                v21 = get_input(v1, v0, loc_1C65 ^ qword_A0A8, loc_1C65, v2 + 63);
                if ( v21 != 'w' )
                {
                  if ( v21 != 'a' )
                  {
                    if ( v21 != 'd' )
                    {
                      if ( v21 != 's' )
                        return puts("Failed!");
                      goto LABEL_162;
                    }
                    goto LABEL_92;
                  }
                  goto LABEL_82;
                }
LABEL_12:
                loc_168F ^= qword_A030;
                v6 = get_input(v1, v0, loc_168F ^ qword_A030, loc_168F, v2 + 12);
                switch ( v6 )
                {
                  case 'w':
                    goto LABEL_1058;
                  case 'a':
                    goto LABEL_7;
                  case 'd':
LABEL_17:
                    while ( 1 )
                    {
                      loc_16F2 ^= qword_A038;
                      v7 = get_input(v1, v0, loc_16F2 ^ qword_A038, loc_16F2, v2 + 34);
                      switch ( v7 )
                      {
                        case 'w':
                          goto LABEL_1063;
                        case 'a':
                          goto LABEL_12;
                        case 'd':
                          goto LABEL_22;
                      }
                      if ( v7 != 's' )
                        return puts("Failed!");
LABEL_92:
                      loc_1CC8 ^= qword_A0B0;
                      v22 = get_input(v1, v0, loc_1CC8 ^ qword_A0B0, loc_1CC8, v2 + 38);
                      if ( v22 != 'w' )
                      {
                        if ( v22 != 'a' )
                        {
                          if ( v22 != 'd' )
                          {
                            if ( v22 != 's' )
                              return puts("Failed!");
                            goto LABEL_167;
                          }
                          goto LABEL_97;
                        }
                        goto LABEL_87;
                      }
                    }
                }
                if ( v6 != 's' )
                  return puts("Failed!");
              }
          }
          if ( v110 != 's' )
            return puts("Failed!");
LABEL_603:
          loc_44B9 ^= qword_A3E8;
          v124 = get_input(v1, v0, loc_44B9 ^ qword_A3E8, loc_44B9, v2 + 64);
          if ( v124 != 'w' )
          {
            if ( v124 != 'a' )
            {
              if ( v124 != 'd' )
              {
                if ( v124 != 's' )
                  return puts("Failed!");
                goto LABEL_678;
              }
              goto LABEL_608;
            }
            goto LABEL_598;
          }
        }
      }
      break;
    }
LABEL_452:
    while ( 2 )
    {
      while ( 1 )
      {
        loc_38B4 ^= qword_A2F0;
        v94 = get_input(v1, v0, loc_38B4 ^ qword_A2F0, loc_38B4, v2 + 33);
        if ( v94 == 'w' )
          break;
        if ( v94 != 'a' )
        {
          if ( v94 == 'd' )
            goto LABEL_457;
          if ( v94 != 's' )
            return puts("Failed!");
          goto LABEL_527;
        }
LABEL_522:
        loc_3E1E ^= qword_A360;
        v108 = get_input(v1, v0, loc_3E1E ^ qword_A360, loc_3E1E, v2 + 34);
        if ( v108 == 'w' )
        {
LABEL_447:
          while ( 1 )
          {
            loc_384D ^= qword_A2E8;
            v93 = get_input(v1, v0, loc_384D ^ qword_A2E8, loc_384D, v2 + 49);
            if ( v93 == 'w' )
              goto LABEL_372;
            if ( v93 != 'a' )
            {
              if ( v93 == 'd' )
                goto LABEL_377;
              if ( v93 != 's' )
                return puts("Failed!");
              goto LABEL_522;
            }
LABEL_442:
            while ( 2 )
            {
              loc_37EA ^= qword_A2E0;
              v92 = get_input(v1, v0, loc_37EA ^ qword_A2E0, loc_37EA, v2 + 2);
              if ( v92 == 'w' )
                goto LABEL_367;
              if ( v92 == 'a' )
                goto LABEL_437;
              if ( v92 != 'd' )
              {
                if ( v92 != 's' )
                  return puts("Failed!");
LABEL_517:
                loc_3DBB ^= qword_A358;
                v107 = get_input(v1, v0, loc_3DBB ^ qword_A358, loc_3DBB, v2 + 45);
                if ( v107 != 'w' )
                {
                  if ( v107 != 'a' )
                  {
                    if ( v107 != 'd' )
                    {
                      if ( v107 != 's' )
                        return puts("Failed!");
                      goto LABEL_588;
                    }
                    goto LABEL_522;
                  }
                  goto LABEL_512;
                }
                continue;
              }
              break;
            }
          }
        }
        if ( v108 == 'a' )
          goto LABEL_517;
        if ( v108 != 'd' )
        {
          if ( v108 == 's' )
            goto LABEL_593;
          return puts("Failed!");
        }
      }
LABEL_377:
      loc_32E3 ^= qword_A278;
      v79 = get_input(v1, v0, loc_32E3 ^ qword_A278, loc_32E3, v2 + 57);
      if ( v79 != 'w' )
      {
        if ( v79 == 'a' )
          goto LABEL_447;
        if ( v79 != 'd' )
        {
          if ( v79 != 's' )
            return puts("Failed!");
          continue;
        }
LABEL_382:
        while ( 1 )
        {
          loc_3346 ^= qword_A280;
          v80 = get_input(v1, v0, loc_3346 ^ qword_A280, loc_3346, v2 + 50);
          switch ( v80 )
          {
            case 'w':
              goto LABEL_307;
            case 'a':
              goto LABEL_377;
            case 'd':
              goto LABEL_387;
          }
          if ( v80 != 's' )
            return puts("Failed!");
LABEL_457:
          loc_3917 ^= qword_A2F8;
          v95 = get_input(v1, v0, loc_3917 ^ qword_A2F8, loc_3917, v2 + 18);
          if ( v95 != 'w' )
          {
            if ( v95 != 'a' )
            {
              if ( v95 != 'd' )
              {
                if ( v95 != 's' )
                  return puts("Failed!");
                goto LABEL_532;
              }
              goto LABEL_462;
            }
            goto LABEL_452;
          }
        }
      }
      break;
    }
LABEL_302:
    while ( 2 )
    {
      while ( 1 )
      {
        loc_2D12 ^= qword_A200;
        v64 = get_input(v1, v0, loc_2D12 ^ qword_A200, loc_2D12, v2 + 25);
        if ( v64 == 'w' )
          break;
        if ( v64 != 'a' )
        {
          if ( v64 == 'd' )
            goto LABEL_307;
          if ( v64 != 's' )
            return puts("Failed!");
          goto LABEL_377;
        }
LABEL_372:
        loc_327C ^= qword_A270;
        v78 = get_input(v1, v0, loc_327C ^ qword_A270, loc_327C, v2 + 50);
        if ( v78 == 'w' )
        {
LABEL_297:
          while ( 1 )
          {
            loc_2CAB ^= qword_A1F8;
            v63 = get_input(v1, v0, loc_2CAB ^ qword_A1F8, loc_2CAB, v2 + 30);
            if ( v63 == 'w' )
              goto LABEL_222;
            if ( v63 != 'a' )
            {
              if ( v63 == 'd' )
                goto LABEL_227;
              if ( v63 != 's' )
                return puts("Failed!");
              goto LABEL_372;
            }
LABEL_292:
            while ( 2 )
            {
              loc_2C48 ^= qword_A1F0;
              v62 = get_input(v1, v0, loc_2C48 ^ qword_A1F0, loc_2C48, v2 + 8);
              if ( v62 == 'w' )
                goto LABEL_217;
              if ( v62 == 'a' )
              {
                while ( 1 )
                {
LABEL_287:
                  loc_2BE5 ^= qword_A1E8;
                  v61 = get_input(v1, v0, loc_2BE5 ^ qword_A1E8, loc_2BE5, v2 + 36);
                  if ( v61 != 'w' )
                  {
                    if ( v61 != 'a' )
                    {
                      if ( v61 != 'd' )
                      {
                        if ( v61 != 's' )
                          return puts("Failed!");
                        goto LABEL_362;
                      }
                      goto LABEL_292;
                    }
                    goto LABEL_282;
                  }
LABEL_212:
                  loc_2614 ^= qword_A170;
                  v46 = get_input(v1, v0, loc_2614 ^ qword_A170, loc_2614, v2 + 30);
                  if ( v46 == 'w' )
                    goto LABEL_137;
                  if ( v46 == 'a' )
                    break;
                  if ( v46 == 'd' )
                    goto LABEL_217;
                  if ( v46 != 's' )
                    return puts("Failed!");
                }
LABEL_207:
                loc_25B1 ^= qword_A168;
                v45 = get_input(v1, v0, loc_25B1 ^ qword_A168, loc_25B1, v2 + 56);
                if ( v45 != 'w' )
                {
                  if ( v45 != 'a' )
                  {
                    if ( v45 != 'd' )
                    {
                      if ( v45 != 's' )
                        return puts("Failed!");
                      goto LABEL_282;
                    }
                    goto LABEL_212;
                  }
                  goto LABEL_202;
                }
                goto LABEL_132;
              }
              if ( v62 != 'd' )
              {
                if ( v62 != 's' )
                  return puts("Failed!");
LABEL_367:
                loc_3219 ^= qword_A268;
                v77 = get_input(v1, v0, loc_3219 ^ qword_A268, loc_3219, v2 + 49);
                if ( v77 != 'w' )
                {
                  if ( v77 != 'a' )
                  {
                    if ( v77 != 'd' )
                    {
                      if ( v77 != 's' )
                        return puts("Failed!");
                      goto LABEL_442;
                    }
                    goto LABEL_372;
                  }
                  goto LABEL_362;
                }
                continue;
              }
              break;
            }
          }
        }
        if ( v78 == 'a' )
          goto LABEL_367;
        if ( v78 != 'd' )
        {
          if ( v78 == 's' )
            goto LABEL_447;
          return puts("Failed!");
        }
      }
LABEL_227:
      loc_2741 ^= qword_A188;
      v49 = get_input(v1, v0, loc_2741 ^ qword_A188, loc_2741, v2 + 49);
      if ( v49 != 'w' )
      {
        if ( v49 == 'a' )
          goto LABEL_297;
        if ( v49 != 'd' )
        {
          if ( v49 != 's' )
            return puts("Failed!");
          continue;
        }
LABEL_232:
        while ( 1 )
        {
          loc_27A4 ^= qword_A190;
          v50 = get_input(v1, v0, loc_27A4 ^ qword_A190, loc_27A4, v2 + 45);
          switch ( v50 )
          {
            case 'w':
              goto LABEL_157;
            case 'a':
              goto LABEL_227;
            case 'd':
              goto LABEL_237;
          }
          if ( v50 != 's' )
            return puts("Failed!");
LABEL_307:
          loc_2D75 ^= qword_A208;
          v65 = get_input(v1, v0, loc_2D75 ^ qword_A208, loc_2D75, v2 + 42);
          if ( v65 != 'w' )
          {
            if ( v65 != 'a' )
            {
              if ( v65 != 'd' )
              {
                if ( v65 != 's' )
                  return puts("Failed!");
                goto LABEL_382;
              }
              goto LABEL_312;
            }
            goto LABEL_302;
          }
        }
      }
      break;
    }
LABEL_152:
    while ( 1 )
    {
      loc_2170 ^= qword_A110;
      v34 = get_input(v1, v0, loc_2170 ^ qword_A110, loc_2170, v2 + 28);
      if ( v34 == 'w' )
        break;
      if ( v34 != 'a' )
      {
        if ( v34 == 'd' )
          goto LABEL_157;
        if ( v34 != 's' )
          return puts("Failed!");
        goto LABEL_227;
      }
LABEL_222:
      loc_26DA ^= qword_A180;
      v48 = get_input(v1, v0, loc_26DA ^ qword_A180, loc_26DA, v2 + 53);
      if ( v48 == 'w' )
      {
LABEL_147:
        while ( 1 )
        {
          loc_2109 ^= qword_A108;
          v33 = get_input(v1, v0, loc_2109 ^ qword_A108, loc_2109, v2 + 50);
          if ( v33 == 'w' )
            goto LABEL_72;
          if ( v33 != 'a' )
          {
            if ( v33 == 'd' )
              goto LABEL_77;
            if ( v33 != 's' )
              return puts("Failed!");
            goto LABEL_222;
          }
LABEL_142:
          while ( 2 )
          {
            while ( 2 )
            {
              loc_20A6 ^= qword_A100;
              v32 = get_input(v1, v0, loc_20A6 ^ qword_A100, loc_20A6, v2 + 39);
              if ( v32 == 'w' )
                goto LABEL_67;
              if ( v32 == 'a' )
              {
LABEL_137:
                loc_2043 ^= qword_A0F8;
                v31 = get_input(v1, v0, loc_2043 ^ qword_A0F8, loc_2043, v2 + 36);
                if ( v31 != 'w' )
                {
                  if ( v31 != 'a' )
                  {
                    if ( v31 != 'd' )
                    {
                      if ( v31 != 's' )
                        return puts("Failed!");
                      goto LABEL_212;
                    }
                    continue;
                  }
                  goto LABEL_132;
                }
                goto LABEL_62;
              }
              break;
            }
            if ( v32 != 'd' )
            {
              if ( v32 != 's' )
                return puts("Failed!");
LABEL_217:
              loc_2677 ^= qword_A178;
              v47 = get_input(v1, v0, loc_2677 ^ qword_A178, loc_2677, v2 + 54);
              if ( v47 != 'w' )
              {
                if ( v47 != 'a' )
                {
                  if ( v47 != 'd' )
                  {
                    if ( v47 != 's' )
                      return puts("Failed!");
                    goto LABEL_292;
                  }
                  goto LABEL_222;
                }
                goto LABEL_212;
              }
              continue;
            }
            break;
          }
        }
      }
      if ( v48 == 'a' )
        goto LABEL_217;
      if ( v48 != 'd' )
      {
        if ( v48 == 's' )
          goto LABEL_297;
        return puts("Failed!");
      }
    }
  }
  while ( 1 )
  {
LABEL_903:
    loc_5BFD ^= qword_A5C8;
    v184 = get_input(v1, v0, loc_5BFD ^ qword_A5C8, loc_5BFD, v2 + 60);
    if ( v184 != 'w' )
    {
      if ( v184 != 'a' )
      {
        if ( v184 == 'd' )
          goto LABEL_908;
        if ( v184 != 's' )
          return puts("Failed!");
        goto LABEL_978;
      }
      goto LABEL_898;
    }
LABEL_828:
    loc_562C ^= qword_A550;
    v169 = get_input(v1, v0, loc_562C ^ qword_A550, loc_562C, v2 + 31);
    if ( v169 == 'w' )
      break;
    if ( v169 == 'a' )
      goto LABEL_823;
    if ( v169 == 'd' )
      goto LABEL_833;
    if ( v169 != 's' )
      return puts("Failed!");
  }
  while ( 1 )
  {
LABEL_753:
    loc_505B ^= qword_A4D8;
    v154 = get_input(v1, v0, loc_505B ^ qword_A4D8, loc_505B, v2 + 51);
    if ( v154 != 'w' )
    {
      if ( v154 != 'a' )
      {
        if ( v154 == 'd' )
          goto LABEL_758;
        if ( v154 != 's' )
          return puts("Failed!");
        goto LABEL_828;
      }
      goto LABEL_748;
    }
LABEL_678:
    loc_4A8A ^= qword_A460;
    v139 = get_input(v1, v0, loc_4A8A ^ qword_A460, loc_4A8A, v2 + 56);
    if ( v139 == 'w' )
      goto LABEL_603;
    if ( v139 == 'a' )
      goto LABEL_673;
    if ( v139 == 'd' )
      break;
    if ( v139 != 's' )
      return puts("Failed!");
  }
  while ( 1 )
  {
LABEL_683:
    loc_4AED ^= qword_A468;
    v140 = get_input(v1, v0, loc_4AED ^ qword_A468, loc_4AED, v2 + 41);
    if ( v140 != 'w' )
    {
      if ( v140 != 'a' )
      {
        if ( v140 != 'd' )
        {
          if ( v140 != 's' )
            return puts("Failed!");
          goto LABEL_758;
        }
        goto LABEL_688;
      }
      goto LABEL_678;
    }
LABEL_608:
    loc_451C ^= qword_A3F0;
    v125 = get_input(v1, v0, loc_451C ^ qword_A3F0, loc_451C, v2 + 50);
    if ( v125 == 'w' )
      goto LABEL_537;
    if ( v125 == 'a' )
      goto LABEL_603;
    if ( v125 == 'd' )
      break;
    if ( v125 != 's' )
      return puts("Failed!");
  }
  while ( 1 )
  {
LABEL_613:
    loc_457F ^= qword_A3F8;
    v126 = get_input(v1, v0, loc_457F ^ qword_A3F8, loc_457F, v2 + 33);
    if ( v126 == 'w' )
      goto LABEL_542;
    if ( v126 == 'a' )
      goto LABEL_608;
    if ( v126 == 'd' )
      break;
    if ( v126 != 's' )
      return puts("Failed!");
LABEL_688:
    loc_4B50 ^= qword_A470;
    v141 = get_input(v1, v0, loc_4B50 ^ qword_A470, loc_4B50, v2 + 18);
    if ( v141 != 'w' )
    {
      if ( v141 != 'a' )
      {
        if ( v141 == 'd' )
          goto LABEL_693;
        if ( v141 != 's' )
          return puts("Failed!");
        goto LABEL_763;
      }
      goto LABEL_683;
    }
  }
  while ( 1 )
  {
LABEL_618:
    loc_45E2 ^= qword_A400;
    v127 = get_input(v1, v0, loc_45E2 ^ qword_A400, loc_45E2, v2 + 16);
    if ( v127 != 'w' )
    {
      if ( v127 != 'a' )
      {
        if ( v127 != 'd' )
        {
          if ( v127 != 's' )
            return puts("Failed!");
          goto LABEL_693;
        }
        goto LABEL_623;
      }
      goto LABEL_613;
    }
LABEL_547:
    loc_4011 ^= qword_A388;
    v113 = get_input(v1, v0, loc_4011 ^ qword_A388, loc_4011, v2 + 30);
    if ( v113 == 'w' )
      break;
    if ( v113 == 'a' )
      goto LABEL_542;
    if ( v113 == 'd' )
      goto LABEL_552;
    if ( v113 != 's' )
      return puts("Failed!");
  }
  while ( 1 )
  {
LABEL_472:
    loc_3A40 ^= qword_A310;
    v98 = get_input(v1, v0, loc_3A40 ^ qword_A310, loc_3A40, v2 + 23);
    if ( v98 != 'w' )
    {
      if ( v98 != 'a' )
      {
        if ( v98 == 'd' )
          goto LABEL_477;
        if ( v98 != 's' )
          return puts("Failed!");
        goto LABEL_547;
      }
      goto LABEL_467;
    }
LABEL_397:
    loc_346F ^= qword_A298;
    v83 = get_input(v1, v0, loc_346F ^ qword_A298, loc_346F, v2 + 19);
    if ( v83 == 'w' )
      break;
    if ( v83 == 'a' )
      goto LABEL_392;
    if ( v83 == 'd' )
      goto LABEL_402;
    if ( v83 != 's' )
      return puts("Failed!");
  }
  while ( 1 )
  {
LABEL_322:
    loc_2E9E ^= qword_A220;
    v68 = get_input(v1, v0, loc_2E9E ^ qword_A220, loc_2E9E, v2 + 25);
    if ( v68 != 'w' )
    {
      if ( v68 != 'a' )
      {
        if ( v68 != 'd' )
        {
          if ( v68 != 's' )
            return puts("Failed!");
          goto LABEL_397;
        }
        goto LABEL_327;
      }
      goto LABEL_317;
    }
LABEL_247:
    loc_28CD ^= qword_A1A8;
    v53 = get_input(v1, v0, loc_28CD ^ qword_A1A8, loc_28CD, v2 + 19);
    if ( v53 == 'w' )
      break;
    if ( v53 == 'a' )
      goto LABEL_242;
    if ( v53 == 'd' )
    {
LABEL_252:
      while ( 1 )
      {
        loc_2930 ^= qword_A1B0;
        v54 = get_input(v1, v0, loc_2930 ^ qword_A1B0, loc_2930, v2 + 26);
        switch ( v54 )
        {
          case 'w':
            goto LABEL_177;
          case 'a':
            goto LABEL_247;
          case 'd':
            while ( 1 )
            {
LABEL_257:
              loc_2993 ^= qword_A1B8;
              v55 = get_input(v1, v0, loc_2993 ^ qword_A1B8, loc_2993, v2 + 39);
              if ( v55 != 'w' )
              {
                if ( v55 != 'a' )
                {
                  if ( v55 == 'd' )
                    goto LABEL_262;
                  if ( v55 != 's' )
                    return puts("Failed!");
                  goto LABEL_332;
                }
                goto LABEL_252;
              }
LABEL_182:
              loc_23C2 ^= qword_A140;
              v40 = get_input(v1, v0, loc_23C2 ^ qword_A140, loc_23C2, v2 + 36);
              if ( v40 == 'w' )
                break;
              if ( v40 == 'a' )
                goto LABEL_177;
              if ( v40 == 'd' )
              {
                while ( 1 )
                {
LABEL_187:
                  loc_2425 ^= qword_A148;
                  v41 = get_input(v1, v0, loc_2425 ^ qword_A148, loc_2425, v2 + 2);
                  if ( v41 != 'w' )
                  {
                    if ( v41 != 'a' )
                    {
                      if ( v41 != 'd' )
                      {
                        if ( v41 != 's' )
                          return puts("Failed!");
                        goto LABEL_262;
                      }
                      goto LABEL_192;
                    }
                    goto LABEL_182;
                  }
LABEL_112:
                  loc_1E54 ^= qword_A0D0;
                  v26 = get_input(v1, v0, loc_1E54 ^ qword_A0D0, loc_1E54, v2 + 57);
                  switch ( v26 )
                  {
                    case 'w':
                      while ( 1 )
                      {
LABEL_37:
                        loc_187E ^= qword_A058;
                        v11 = get_input(v1, v0, loc_187E ^ qword_A058, loc_187E, v2 + 17);
                        if ( v11 != 'w' )
                        {
                          if ( v11 != 'a' )
                          {
                            if ( v11 != 'd' )
                            {
                              if ( v11 != 's' )
                                return puts("Failed!");
                              goto LABEL_112;
                            }
                            goto LABEL_42;
                          }
                          goto LABEL_32;
                        }
LABEL_1083:
                        loc_69F1 ^= qword_A6E8;
                        v220 = get_input(v1, v0, loc_69F1 ^ qword_A6E8, loc_69F1, v2 + 26);
                        switch ( v220 )
                        {
                          case 'w':
                            while ( 1 )
                            {
LABEL_1008:
                              loc_6420 ^= qword_A670;
                              v205 = get_input(v1, v0, loc_6420 ^ qword_A670, loc_6420, v2 + 2);
                              if ( v205 != 'w' )
                              {
                                if ( v205 != 'a' )
                                {
                                  if ( v205 != 'd' )
                                  {
                                    if ( v205 != 's' )
                                      return puts("Failed!");
                                    goto LABEL_1083;
                                  }
                                  goto LABEL_1013;
                                }
                                goto LABEL_1003;
                              }
LABEL_933:
                              loc_5E4F ^= qword_A5F8;
                              v190 = get_input(v1, v0, loc_5E4F ^ qword_A5F8, loc_5E4F, v2 + 10);
                              switch ( v190 )
                              {
                                case 'w':
                                  while ( 1 )
                                  {
LABEL_858:
                                    loc_587E ^= qword_A580;
                                    v175 = get_input(v1, v0, loc_587E ^ qword_A580, loc_587E, v2 + 59);
                                    if ( v175 != 'w' )
                                    {
                                      if ( v175 != 'a' )
                                      {
                                        if ( v175 != 'd' )
                                        {
                                          if ( v175 != 's' )
                                            return puts("Failed!");
                                          goto LABEL_933;
                                        }
                                        goto LABEL_863;
                                      }
                                      goto LABEL_853;
                                    }
LABEL_783:
                                    loc_52AD ^= qword_A508;
                                    v160 = get_input(v1, v0, loc_52AD ^ qword_A508, loc_52AD, v2 + 13);
                                    switch ( v160 )
                                    {
                                      case 'w':
                                        while ( 1 )
                                        {
LABEL_708:
                                          loc_4CDC ^= qword_A490;
                                          v145 = get_input(v1, v0, loc_4CDC ^ qword_A490, loc_4CDC, v2 + 1);
                                          if ( v145 != 'w' )
                                          {
                                            if ( v145 != 'a' )
                                            {
                                              if ( v145 != 'd' )
                                              {
                                                if ( v145 != 's' )
                                                  return puts("Failed!");
                                                goto LABEL_783;
                                              }
                                              goto LABEL_713;
                                            }
                                            goto LABEL_703;
                                          }
LABEL_633:
                                          loc_470B ^= qword_A418;
                                          v130 = get_input(v1, v0, loc_470B ^ qword_A418, loc_470B, v2 + 43);
                                          switch ( v130 )
                                          {
                                            case 'w':
                                              goto gotoWIN;
                                            case 'a':
                                              goto LABEL_628;
                                            case 'd':
                                              goto LABEL_638;
                                          }
                                          if ( v130 != 0x73 )
                                            return puts("Failed!");
                                        }
                                      case 'a':
                                        goto LABEL_778;
                                      case 'd':
                                        goto LABEL_788;
                                    }
                                    if ( v160 != 's' )
                                      return puts("Failed!");
                                  }
                                case 'a':
                                  goto LABEL_928;
                                case 'd':
                                  goto LABEL_938;
                              }
                              if ( v190 != 's' )
                                return puts("Failed!");
                            }
                          case 'a':
                            goto LABEL_1078;
                          case 'd':
                            goto LABEL_1088;
                        }
                        if ( v220 != 's' )
                          return puts("Failed!");
                      }
                    case 'a':
                      goto LABEL_107;
                    case 'd':
                      goto LABEL_117;
                  }
                  if ( v26 != 's' )
                    return puts("Failed!");
                }
              }
              if ( v40 != 's' )
                return puts("Failed!");
            }
            while ( 1 )
            {
LABEL_107:
              loc_1DF1 ^= qword_A0C8;
              v25 = get_input(v1, v0, loc_1DF1 ^ qword_A0C8, loc_1DF1, v2 + 8);
              if ( v25 != 'w' )
              {
                if ( v25 != 'a' )
                {
                  if ( v25 != 'd' )
                  {
                    if ( v25 != 's' )
                      return puts("Failed!");
                    goto LABEL_182;
                  }
                  goto LABEL_112;
                }
                goto LABEL_102;
              }
LABEL_32:
              loc_181B ^= qword_A050;
              v10 = get_input(v1, v0, loc_181B ^ qword_A050, loc_181B, v2 + 45);
              if ( v10 == 'w' )
                break;
              if ( v10 == 'a' )
                goto LABEL_27;
              if ( v10 == 'd' )
                goto LABEL_37;
              if ( v10 != 's' )
                return puts("Failed!");
            }
            while ( 1 )
            {
LABEL_1078:
              loc_698E ^= qword_A6E0;
              v219 = get_input(v1, v0, loc_698E ^ qword_A6E0, loc_698E, v2 + 36);
              if ( v219 != 'w' )
              {
                if ( v219 != 'a' )
                {
                  if ( v219 != 'd' )
                  {
                    if ( v219 != 's' )
                      return puts("Failed!");
                    goto LABEL_32;
                  }
                  goto LABEL_1083;
                }
                goto LABEL_1073;
              }
LABEL_1003:
              loc_63BD ^= qword_A668;
              v204 = get_input(v1, v0, loc_63BD ^ qword_A668, loc_63BD, v2 + 61);
              if ( v204 == 'w' )
                break;
              if ( v204 == 'a' )
                goto LABEL_998;
              if ( v204 == 'd' )
                goto LABEL_1008;
              if ( v204 != 's' )
                return puts("Failed!");
            }
            while ( 1 )
            {
LABEL_928:
              loc_5DEC ^= qword_A5F0;
              v189 = get_input(v1, v0, loc_5DEC ^ qword_A5F0, loc_5DEC, v2 + 28);
              if ( v189 != 'w' )
              {
                if ( v189 != 'a' )
                {
                  if ( v189 != 'd' )
                  {
                    if ( v189 != 's' )
                      return puts("Failed!");
                    goto LABEL_1003;
                  }
                  goto LABEL_933;
                }
                goto LABEL_923;
              }
LABEL_853:
              loc_581B ^= qword_A578;
              v174 = get_input(v1, v0, loc_581B ^ qword_A578, loc_581B, v2 + 2);
              if ( v174 == 'w' )
                break;
              if ( v174 == 'a' )
                goto LABEL_848;
              if ( v174 == 'd' )
                goto LABEL_858;
              if ( v174 != 's' )
                return puts("Failed!");
            }
            while ( 1 )
            {
LABEL_778:
              loc_524A ^= qword_A500;
              v159 = get_input(v1, v0, loc_524A ^ qword_A500, loc_524A, v2 + 19);
              if ( v159 != 'w' )
              {
                if ( v159 != 'a' )
                {
                  if ( v159 != 'd' )
                  {
                    if ( v159 != 's' )
                      return puts("Failed!");
                    goto LABEL_853;
                  }
                  goto LABEL_783;
                }
                goto LABEL_773;
              }
LABEL_703:
              loc_4C79 ^= qword_A488;
              v144 = get_input(v1, v0, loc_4C79 ^ qword_A488, loc_4C79, v2 + 14);
              switch ( v144 )
              {
                case 'w':
                  goto LABEL_628;
                case 'a':
                  goto LABEL_698;
                case 'd':
                  goto LABEL_708;
              }
              if ( v144 != 's' )
                return puts("Failed!");
            }
        }
        if ( v54 != 's' )
          return puts("Failed!");
LABEL_327:
        loc_2F01 ^= qword_A228;
        v69 = get_input(v1, v0, loc_2F01 ^ qword_A228, loc_2F01, v2 + 62);
        if ( v69 != 'w' )
        {
          if ( v69 != 'a' )
          {
            if ( v69 == 'd' )
              goto LABEL_332;
            if ( v69 != 's' )
              return puts("Failed!");
            goto LABEL_402;
          }
          goto LABEL_322;
        }
      }
    }
    if ( v53 != 's' )
      return puts("Failed!");
  }
  while ( 1 )
  {
LABEL_172:
    loc_22FC ^= qword_A130;
    v38 = get_input(v1, v0, loc_22FC ^ qword_A130, loc_22FC, v2 + 28);
    if ( v38 != 'w' )
    {
      if ( v38 != 'a' )
      {
        if ( v38 != 'd' )
        {
          if ( v38 != 's' )
            return puts("Failed!");
          goto LABEL_247;
        }
        goto LABEL_177;
      }
      goto LABEL_167;
    }
LABEL_97:
    loc_1D2B ^= qword_A0B8;
    v23 = get_input(v1, v0, loc_1D2B ^ qword_A0B8, loc_1D2B, v2 + 62);
    if ( v23 == 'w' )
      break;
    if ( v23 == 'a' )
      goto LABEL_92;
    if ( v23 == 'd' )
    {
LABEL_102:
      while ( 1 )
      {
        loc_1D8E ^= qword_A0C0;
        v24 = get_input(v1, v0, loc_1D8E ^ qword_A0C0, loc_1D8E, v2 + 29);
        switch ( v24 )
        {
          case 'w':
            goto LABEL_27;
          case 'a':
            goto LABEL_97;
          case 'd':
            goto LABEL_107;
        }
        if ( v24 != 's' )
          return puts("Failed!");
LABEL_177:
        loc_235F ^= qword_A138;
        v39 = get_input(v1, v0, loc_235F ^ qword_A138, loc_235F, v2 + 40);
        if ( v39 != 'w' )
        {
          if ( v39 != 'a' )
          {
            if ( v39 != 'd' )
            {
              if ( v39 != 's' )
                return puts("Failed!");
              goto LABEL_252;
            }
            goto LABEL_182;
          }
          goto LABEL_172;
        }
      }
    }
    if ( v23 != 's' )
      return puts("Failed!");
  }
  while ( 1 )
  {
LABEL_22:
    loc_1755 ^= qword_A040;
    v8 = get_input(v1, v0, loc_1755 ^ qword_A040, loc_1755, v2 + 61);
    if ( v8 != 'w' )
    {
      if ( v8 != 'a' )
      {
        if ( v8 != 'd' )
        {
          if ( v8 != 's' )
            return puts("Failed!");
          goto LABEL_97;
        }
        goto LABEL_27;
      }
      goto LABEL_17;
    }
LABEL_1068:
    loc_68C8 ^= qword_A6D0;
    v217 = get_input(v1, v0, loc_68C8 ^ qword_A6D0, loc_68C8, v2 + 11);
    if ( v217 == 'w' )
      break;
    if ( v217 == 'a' )
      goto LABEL_1063;
    if ( v217 == 'd' )
    {
LABEL_1073:
      while ( 1 )
      {
        loc_692B ^= qword_A6D8;
        v218 = get_input(v1, v0, loc_692B ^ qword_A6D8, loc_692B, v2 + 23);
        switch ( v218 )
        {
          case 'w':
            goto LABEL_998;
          case 'a':
            goto LABEL_1068;
          case 'd':
            goto LABEL_1078;
        }
        if ( v218 != 's' )
          return puts("Failed!");
LABEL_27:
        loc_17B8 ^= qword_A048;
        v9 = get_input(v1, v0, loc_17B8 ^ qword_A048, loc_17B8, v2 + 53);
        if ( v9 != 'w' )
        {
          if ( v9 != 'a' )
          {
            if ( v9 != 'd' )
            {
              if ( v9 != 's' )
                return puts("Failed!");
              goto LABEL_102;
            }
            goto LABEL_32;
          }
          goto LABEL_22;
        }
      }
    }
    if ( v217 != 's' )
      return puts("Failed!");
  }
  while ( 1 )
  {
LABEL_993:
    loc_62F7 ^= qword_A658;
    v202 = get_input(v1, v0, loc_62F7 ^ qword_A658, loc_62F7, v2 + 26);
    if ( v202 != 'w' )
    {
      if ( v202 != 'a' )
      {
        if ( v202 != 'd' )
        {
          if ( v202 != 's' )
            return puts("Failed!");
          goto LABEL_1068;
        }
        goto LABEL_998;
      }
      goto LABEL_988;
    }
LABEL_918:
    loc_5D26 ^= qword_A5E0;
    v187 = get_input(v1, v0, loc_5D26 ^ qword_A5E0, loc_5D26, v2 + 21);
    if ( v187 == 'w' )
      break;
    if ( v187 == 'a' )
      goto LABEL_913;
    if ( v187 == 'd' )
    {
LABEL_923:
      while ( 1 )
      {
        loc_5D89 ^= qword_A5E8;
        v188 = get_input(v1, v0, loc_5D89 ^ qword_A5E8, loc_5D89, v2 + 9);
        switch ( v188 )
        {
          case 'w':
            goto LABEL_848;
          case 'a':
            goto LABEL_918;
          case 'd':
            goto LABEL_928;
        }
        if ( v188 != 's' )
          return puts("Failed!");
LABEL_998:
        loc_635A ^= qword_A660;
        v203 = get_input(v1, v0, loc_635A ^ qword_A660, loc_635A, v2 + 25);
        if ( v203 != 'w' )
        {
          if ( v203 != 'a' )
          {
            if ( v203 != 'd' )
            {
              if ( v203 != 's' )
                return puts("Failed!");
              goto LABEL_1073;
            }
            goto LABEL_1003;
          }
          goto LABEL_993;
        }
      }
    }
    if ( v187 != 's' )
      return puts("Failed!");
  }
LABEL_843:
  while ( 2 )
  {
    while ( 2 )
    {
      loc_5755 ^= qword_A568;
      v172 = get_input(v1, v0, loc_5755 ^ qword_A568, loc_5755, v2 + 9);
      if ( v172 != 'w' )
      {
        if ( v172 != 'a' )
        {
          if ( v172 != 'd' )
          {
            if ( v172 != 's' )
              return puts("Failed!");
            goto LABEL_918;
          }
          goto LABEL_848;
        }
LABEL_838:
        loc_56F2 ^= qword_A560;
        v171 = get_input(v1, v0, loc_56F2 ^ qword_A560, loc_56F2, v2 + 22);
        if ( v171 != 'w' )
        {
          if ( v171 != 'a' )
          {
            if ( v171 != 'd' )
            {
              if ( v171 != 's' )
                return puts("Failed!");
              goto LABEL_913;
            }
            continue;
          }
          goto LABEL_833;
        }
        goto LABEL_763;
      }
      break;
    }
LABEL_768:
    loc_5184 ^= qword_A4F0;
    v157 = get_input(v1, v0, loc_5184 ^ qword_A4F0, loc_5184, v2 + 27);
    if ( v157 != 'w' )
    {
      if ( v157 != 'a' )
      {
        if ( v157 == 'd' )
        {
LABEL_773:
          while ( 1 )
          {
            loc_51E7 ^= qword_A4F8;
            v158 = get_input(v1, v0, loc_51E7 ^ qword_A4F8, loc_51E7, v2 + 43);
            switch ( v158 )
            {
              case 'w':
                goto LABEL_698;
              case 'a':
                goto LABEL_768;
              case 'd':
                goto LABEL_778;
            }
            if ( v158 != 's' )
              return puts("Failed!");
LABEL_848:
            loc_57B8 ^= qword_A570;
            v173 = get_input(v1, v0, loc_57B8 ^ qword_A570, loc_57B8, v2 + 11);
            if ( v173 != 'w' )
            {
              if ( v173 != 'a' )
              {
                if ( v173 != 'd' )
                {
                  if ( v173 != 's' )
                    return puts("Failed!");
                  goto LABEL_923;
                }
                goto LABEL_853;
              }
              goto LABEL_843;
            }
          }
        }
        if ( v157 != 's' )
          return puts("Failed!");
        continue;
      }
      goto LABEL_763;
    }
    break;
  }
  while ( 1 )
  {
LABEL_693:
    loc_4BB3 ^= qword_A478;
    v142 = get_input(v1, v0, loc_4BB3 ^ qword_A478, loc_4BB3, v2 + 5);
    if ( v142 == 'w' )
      goto LABEL_618;
    if ( v142 == 'a' )
      goto LABEL_688;
    if ( v142 != 'd' )
    {
      if ( v142 != 's' )
        return puts("Failed!");
      goto LABEL_768;
    }
LABEL_698:
    loc_4C16 ^= qword_A480;
    v143 = get_input(v1, v0, loc_4C16 ^ qword_A480, loc_4C16, v2 + 37);
    if ( v143 == 'w' )
      break;
    if ( v143 != 'a' )
    {
      if ( v143 != 'd' )
      {
        if ( v143 != 's' )
          return puts("Failed!");
        goto LABEL_773;
      }
      goto LABEL_703;
    }
  }
LABEL_623:
  while ( 2 )
  {
    while ( 1 )
    {
      loc_4645 ^= qword_A408;
      v128 = get_input(v1, v0, loc_4645 ^ qword_A408, loc_4645, v2 + 18);
      if ( v128 == 'w' )
        break;
      if ( v128 == 'a' )
        goto LABEL_618;
      if ( v128 != 'd' )
      {
        if ( v128 != 's' )
          return puts("Failed!");
        goto LABEL_698;
      }
LABEL_628:
      loc_46A8 ^= qword_A410;
      v129 = get_input(v1, v0, loc_46A8 ^ qword_A410, loc_46A8, v2 + 7);
      if ( v129 == 'w' )
        goto LABEL_557;
      if ( v129 != 'a' )
      {
        if ( v129 != 'd' )
        {
          if ( v129 != 's' )
            return puts("Failed!");
          goto LABEL_703;
        }
        goto LABEL_633;
      }
    }
LABEL_552:
    loc_4074 ^= qword_A390;
    v114 = get_input(v1, v0, loc_4074 ^ qword_A390, loc_4074, v2 + 17);
    if ( v114 != 'w' )
    {
      if ( v114 != 'a' )
      {
        if ( v114 != 'd' )
        {
          if ( v114 != 's' )
            return puts("Failed!");
          continue;
        }
        goto LABEL_557;
      }
      goto LABEL_547;
    }
    break;
  }
  do
  {
LABEL_477:
    loc_3AA3 ^= qword_A318;
    v99 = get_input(v1, v0, loc_3AA3 ^ qword_A318, loc_3AA3, v2 + 32);
    if ( v99 == 'w' )
    {
LABEL_402:
      while ( 1 )
      {
        loc_34D2 ^= qword_A2A0;
        v84 = get_input(v1, v0, loc_34D2 ^ qword_A2A0, loc_34D2, v2 + 39);
        if ( v84 == 'w' )
          goto LABEL_327;
        if ( v84 == 'a' )
          goto LABEL_397;
        if ( v84 != 'd' )
        {
          if ( v84 != 's' )
            return puts("Failed!");
          goto LABEL_477;
        }
LABEL_407:
        loc_3535 ^= qword_A2A8;
        v85 = get_input(v1, v0, loc_3535 ^ qword_A2A8, loc_3535, v2 + 57);
        if ( v85 == 'w' )
        {
LABEL_332:
          while ( 1 )
          {
            loc_2F64 ^= qword_A230;
            v70 = get_input(v1, v0, loc_2F64 ^ qword_A230, loc_2F64, v2 + 6);
            if ( v70 == 'w' )
              goto LABEL_257;
            if ( v70 == 'a' )
              goto LABEL_327;
            if ( v70 != 'd' )
            {
              if ( v70 != 's' )
                return puts("Failed!");
              goto LABEL_407;
            }
LABEL_337:
            loc_2FC7 ^= qword_A238;
            v71 = get_input(v1, v0, loc_2FC7 ^ qword_A238, loc_2FC7, v2 + 33);
            if ( v71 == 'w' )
            {
LABEL_262:
              while ( 1 )
              {
                loc_29F6 ^= qword_A1C0;
                v56 = get_input(v1, v0, loc_29F6 ^ qword_A1C0, loc_29F6, v2 + 31);
                if ( v56 == 'w' )
                  goto LABEL_187;
                if ( v56 == 'a' )
                  goto LABEL_257;
                if ( v56 != 'd' )
                {
                  if ( v56 != 's' )
                    return puts("Failed!");
                  goto LABEL_337;
                }
LABEL_267:
                loc_2A59 ^= qword_A1C8;
                v57 = get_input(v1, v0, loc_2A59 ^ qword_A1C8, loc_2A59, v2 + 54);
                if ( v57 == 'w' )
                {
                  while ( 1 )
                  {
LABEL_192:
                    loc_2488 ^= qword_A150;
                    v42 = get_input(v1, v0, loc_2488 ^ qword_A150, loc_2488, v2 + 27);
                    if ( v42 != 'w' )
                    {
                      if ( v42 != 'a' )
                      {
                        if ( v42 != 'd' )
                        {
                          if ( v42 != 's' )
                            return puts("Failed!");
                          goto LABEL_267;
                        }
                        goto LABEL_197;
                      }
                      goto LABEL_187;
                    }
LABEL_117:
                    loc_1EB7 ^= qword_A0D8;
                    v27 = get_input(v1, v0, loc_1EB7 ^ qword_A0D8, loc_1EB7, v2 + 42);
                    switch ( v27 )
                    {
                      case 'w':
                        while ( 1 )
                        {
LABEL_42:
                          loc_18E1 ^= qword_A060;
                          v12 = get_input(v1, v0, loc_18E1 ^ qword_A060, loc_18E1, v2 + 22);
                          if ( v12 != 'w' )
                          {
                            if ( v12 != 'a' )
                            {
                              if ( v12 != 'd' )
                              {
                                if ( v12 != 's' )
                                  return puts("Failed!");
                                goto LABEL_117;
                              }
                              goto LABEL_47;
                            }
                            goto LABEL_37;
                          }
LABEL_1088:
                          loc_6A54 ^= qword_A6F0;
                          v221 = get_input(v1, v0, loc_6A54 ^ qword_A6F0, loc_6A54, v2 + 34);
                          switch ( v221 )
                          {
                            case 'w':
                              while ( 1 )
                              {
LABEL_1013:
                                loc_6483 ^= qword_A678;
                                v206 = get_input(v1, v0, loc_6483 ^ qword_A678, loc_6483, v2 + 28);
                                if ( v206 != 'w' )
                                {
                                  if ( v206 != 'a' )
                                  {
                                    if ( v206 != 'd' )
                                    {
                                      if ( v206 != 's' )
                                        return puts("Failed!");
                                      goto LABEL_1088;
                                    }
                                    goto LABEL_1018;
                                  }
                                  goto LABEL_1008;
                                }
LABEL_938:
                                loc_5EB2 ^= qword_A600;
                                v191 = get_input(v1, v0, loc_5EB2 ^ qword_A600, loc_5EB2, v2 + 12);
                                switch ( v191 )
                                {
                                  case 'w':
                                    while ( 1 )
                                    {
LABEL_863:
                                      loc_58E1 ^= qword_A588;
                                      v176 = get_input(v1, v0, loc_58E1 ^ qword_A588, loc_58E1, v2 + 55);
                                      if ( v176 != 'w' )
                                      {
                                        if ( v176 != 'a' )
                                        {
                                          if ( v176 != 'd' )
                                          {
                                            if ( v176 != 's' )
                                              return puts("Failed!");
                                            goto LABEL_938;
                                          }
                                          goto LABEL_868;
                                        }
                                        goto LABEL_858;
                                      }
LABEL_788:
                                      loc_5310 ^= qword_A510;
                                      v161 = get_input(v1, v0, loc_5310 ^ qword_A510, loc_5310, v2 + 28);
                                      switch ( v161 )
                                      {
                                        case 'w':
                                          while ( 1 )
                                          {
LABEL_713:
                                            loc_4D3F ^= qword_A498;
                                            v146 = get_input(v1, v0, loc_4D3F ^ qword_A498, loc_4D3F, v2 + 15);
                                            if ( v146 != 'w' )
                                            {
                                              if ( v146 != 'a' )
                                              {
                                                if ( v146 != 'd' )
                                                {
                                                  if ( v146 != 's' )
                                                    return puts("Failed!");
                                                  goto LABEL_788;
                                                }
                                                goto LABEL_718;
                                              }
                                              goto LABEL_708;
                                            }
LABEL_638:
                                            loc_476E ^= qword_A420;
                                            v131 = get_input(v1, v0, loc_476E ^ qword_A420, loc_476E, v2 + 2);
                                            switch ( v131 )
                                            {
                                              case 'w':
                                                while ( 1 )
                                                {
LABEL_563:
                                                  loc_419D ^= qword_A3A8;
                                                  v116 = get_input(v1, v0, loc_419D ^ qword_A3A8, loc_419D, v2 + 54);
                                                  if ( v116 != 'w' )
                                                  {
                                                    if ( v116 == 'a' )
                                                      goto gotoWIN;
                                                    if ( v116 != 'd' )
                                                    {
                                                      if ( v116 != 's' )
                                                        return puts("Failed!");
                                                      goto LABEL_638;
                                                    }
                                                    goto LABEL_568;
                                                  }
LABEL_492:
                                                  loc_3BCC ^= qword_A330;
                                                  v102 = get_input(v1, v0, loc_3BCC ^ qword_A330, loc_3BCC, v2 + 9);
                                                  if ( v102 == 'w' )
                                                    break;
                                                  if ( v102 == 'a' )
                                                    goto LABEL_487;
                                                  if ( v102 == 'd' )
                                                  {
                                                    while ( 1 )
                                                    {
LABEL_497:
                                                      loc_3C2F ^= qword_A338;
                                                      v103 = get_input(v1, v0, loc_3C2F ^ qword_A338, loc_3C2F, v2 + 15);
                                                      if ( v103 != 'w' )
                                                      {
                                                        if ( v103 != 'a' )
                                                        {
                                                          if ( v103 != 'd' )
                                                          {
                                                            if ( v103 != 's' )
                                                              return puts("Failed!");
                                                            goto LABEL_568;
                                                          }
                                                          goto LABEL_502;
                                                        }
                                                        goto LABEL_492;
                                                      }
LABEL_422:
                                                      while ( 2 )
                                                      {
                                                        loc_365E ^= qword_A2C0;
                                                        v88 = get_input(
                                                                v1,
                                                                v0,
                                                                loc_365E ^ qword_A2C0,
                                                                loc_365E,
                                                                v2 + 60);
                                                        switch ( v88 )
                                                        {
                                                          case 'w':
                                                            goto LABEL_347;
                                                          case 'a':
                                                            goto LABEL_417;
                                                          case 'd':
                                                            while ( 1 )
                                                            {
LABEL_427:
                                                              loc_36C1 ^= qword_A2C8;
                                                              v89 = get_input(
                                                                      v1,
                                                                      v0,
                                                                      loc_36C1 ^ qword_A2C8,
                                                                      loc_36C1,
                                                                      v2 + 13);
                                                              if ( v89 != 'w' )
                                                              {
                                                                if ( v89 != 'a' )
                                                                {
                                                                  if ( v89 != 'd' )
                                                                  {
                                                                    if ( v89 != 's' )
                                                                      return puts("Failed!");
                                                                    goto LABEL_502;
                                                                  }
                                                                  goto LABEL_432;
                                                                }
                                                                goto LABEL_422;
                                                              }
LABEL_352:
                                                              loc_30F0 ^= qword_A250;
                                                              v74 = get_input(
                                                                      v1,
                                                                      v0,
                                                                      loc_30F0 ^ qword_A250,
                                                                      loc_30F0,
                                                                      v2 + 52);
                                                              if ( v74 == 'w' )
                                                                goto LABEL_277;
                                                              if ( v74 == 'a' )
                                                                break;
                                                              if ( v74 == 'd' )
                                                              {
                                                                while ( 1 )
                                                                {
LABEL_357:
                                                                  loc_3153 ^= qword_A258;
                                                                  v75 = get_input(
                                                                          v1,
                                                                          v0,
                                                                          loc_3153 ^ qword_A258,
                                                                          loc_3153,
                                                                          v2 + 58);
                                                                  if ( v75 != 'w' )
                                                                  {
                                                                    if ( v75 != 'a' )
                                                                    {
                                                                      if ( v75 != 'd' )
                                                                      {
                                                                        if ( v75 != 's' )
                                                                          return puts("Failed!");
                                                                        goto LABEL_432;
                                                                      }
                                                                      goto LABEL_362;
                                                                    }
                                                                    goto LABEL_352;
                                                                  }
LABEL_282:
                                                                  loc_2B82 ^= qword_A1E0;
                                                                  v60 = get_input(
                                                                          v1,
                                                                          v0,
                                                                          loc_2B82 ^ qword_A1E0,
                                                                          loc_2B82,
                                                                          v2 + 31);
                                                                  if ( v60 == 'w' )
                                                                    goto LABEL_207;
                                                                  if ( v60 == 'a' )
                                                                    break;
                                                                  if ( v60 == 'd' )
                                                                    goto LABEL_287;
                                                                  if ( v60 != 's' )
                                                                    return puts("Failed!");
                                                                }
LABEL_277:
                                                                loc_2B1F ^= qword_A1D8;
                                                                v59 = get_input(
                                                                        v1,
                                                                        v0,
                                                                        loc_2B1F ^ qword_A1D8,
                                                                        loc_2B1F,
                                                                        v2 + 23);
                                                                if ( v59 != 'w' )
                                                                {
                                                                  if ( v59 != 'a' )
                                                                  {
                                                                    if ( v59 != 'd' )
                                                                    {
                                                                      if ( v59 != 's' )
                                                                        return puts("Failed!");
                                                                      goto LABEL_352;
                                                                    }
                                                                    goto LABEL_282;
                                                                  }
                                                                  goto LABEL_272;
                                                                }
                                                                goto LABEL_202;
                                                              }
                                                              if ( v74 != 's' )
                                                                return puts("Failed!");
                                                            }
LABEL_347:
                                                            loc_308D ^= qword_A248;
                                                            v73 = get_input(
                                                                    v1,
                                                                    v0,
                                                                    loc_308D ^ qword_A248,
                                                                    loc_308D,
                                                                    v2 + 19);
                                                            if ( v73 != 'w' )
                                                            {
                                                              if ( v73 != 'a' )
                                                              {
                                                                if ( v73 != 'd' )
                                                                {
                                                                  if ( v73 != 's' )
                                                                    return puts("Failed!");
                                                                  continue;
                                                                }
                                                                goto LABEL_352;
                                                              }
                                                              goto LABEL_342;
                                                            }
                                                            goto LABEL_272;
                                                        }
                                                      }
                                                      if ( v88 != 's' )
                                                        return puts("Failed!");
                                                    }
                                                  }
                                                  if ( v102 != 's' )
                                                    return puts("Failed!");
                                                }
LABEL_417:
                                                while ( 2 )
                                                {
                                                  loc_35FB ^= qword_A2B8;
                                                  v87 = get_input(v1, v0, loc_35FB ^ qword_A2B8, loc_35FB, v2 + 47);
                                                  if ( v87 != 'w' )
                                                  {
                                                    if ( v87 != 'a' )
                                                    {
                                                      if ( v87 != 'd' )
                                                      {
                                                        if ( v87 != 's' )
                                                          return puts("Failed!");
                                                        goto LABEL_492;
                                                      }
                                                      goto LABEL_422;
                                                    }
                                                    goto LABEL_412;
                                                  }
LABEL_342:
                                                  loc_302A ^= qword_A240;
                                                  v72 = get_input(v1, v0, loc_302A ^ qword_A240, loc_302A, v2 + 48);
                                                  if ( v72 != 'w' )
                                                  {
                                                    if ( v72 != 'a' )
                                                    {
                                                      if ( v72 != 'd' )
                                                      {
                                                        if ( v72 != 's' )
                                                          return puts("Failed!");
                                                        continue;
                                                      }
                                                      goto LABEL_347;
                                                    }
                                                    goto LABEL_337;
                                                  }
                                                  goto LABEL_267;
                                                }
                                              case 'a':
                                                goto LABEL_633;
                                              case 'd':
                                                goto LABEL_643;
                                            }
                                            if ( v131 != 's' )
                                              return puts("Failed!");
                                          }
                                        case 'a':
                                          goto LABEL_783;
                                        case 'd':
                                          goto LABEL_793;
                                      }
                                      if ( v161 != 's' )
                                        return puts("Failed!");
                                    }
                                  case 'a':
                                    goto LABEL_933;
                                  case 'd':
                                    goto LABEL_943;
                                }
                                if ( v191 != 's' )
                                  return puts("Failed!");
                              }
                            case 'a':
                              goto LABEL_1083;
                            case 'd':
                              goto LABEL_1093;
                          }
                          if ( v221 != 's' )
                            return puts("Failed!");
                        }
                      case 'a':
                        goto LABEL_112;
                      case 'd':
                        goto LABEL_122;
                    }
                    if ( v27 != 's' )
                      return puts("Failed!");
                  }
                }
                if ( v57 != 'a' )
                {
                  if ( v57 == 'd' )
                  {
                    while ( 1 )
                    {
LABEL_272:
                      loc_2ABC ^= qword_A1D0;
                      v58 = get_input(v1, v0, loc_2ABC ^ qword_A1D0, loc_2ABC, v2 + 24);
                      if ( v58 != 'w' )
                      {
                        if ( v58 != 'a' )
                        {
                          if ( v58 != 'd' )
                          {
                            if ( v58 != 's' )
                              return puts("Failed!");
                            goto LABEL_347;
                          }
                          goto LABEL_277;
                        }
                        goto LABEL_267;
                      }
LABEL_197:
                      loc_24EB ^= qword_A158;
                      v43 = get_input(v1, v0, loc_24EB ^ qword_A158, loc_24EB, v2 + 5);
                      if ( v43 == 'w' )
                        break;
                      if ( v43 == 'a' )
                        goto LABEL_192;
                      if ( v43 == 'd' )
                      {
                        while ( 1 )
                        {
LABEL_202:
                          loc_254E ^= qword_A160;
                          v44 = get_input(v1, v0, loc_254E ^ qword_A160, loc_254E, v2 + 43);
                          if ( v44 != 'w' )
                          {
                            if ( v44 != 'a' )
                            {
                              if ( v44 != 'd' )
                              {
                                if ( v44 != 's' )
                                  return puts("Failed!");
                                goto LABEL_277;
                              }
                              goto LABEL_207;
                            }
                            goto LABEL_197;
                          }
LABEL_127:
                          loc_1F7D ^= qword_A0E8;
                          v29 = get_input(v1, v0, loc_1F7D ^ qword_A0E8, loc_1F7D, v2 + 4);
                          if ( v29 == 'w' )
                            break;
                          if ( v29 == 'a' )
                            goto LABEL_122;
                          if ( v29 == 'd' )
                          {
                            while ( 1 )
                            {
LABEL_132:
                              loc_1FE0 ^= qword_A0F0;
                              v30 = get_input(v1, v0, loc_1FE0 ^ qword_A0F0, loc_1FE0, v2 + 28);
                              if ( v30 != 'w' )
                              {
                                if ( v30 != 'a' )
                                {
                                  if ( v30 != 'd' )
                                  {
                                    if ( v30 != 's' )
                                      return puts("Failed!");
                                    goto LABEL_207;
                                  }
                                  goto LABEL_137;
                                }
                                goto LABEL_127;
                              }
LABEL_57:
                              loc_1A0A ^= qword_A078;
                              v15 = get_input(v1, v0, loc_1A0A ^ qword_A078, loc_1A0A, v2 + 10);
                              if ( v15 == 'w' )
                                break;
                              if ( v15 == 'a' )
                                goto LABEL_52;
                              if ( v15 == 'd' )
                              {
                                while ( 1 )
                                {
LABEL_62:
                                  loc_1A6D ^= qword_A080;
                                  v16 = get_input(v1, v0, loc_1A6D ^ qword_A080, loc_1A6D, v2 + 31);
                                  if ( v16 != 'w' )
                                  {
                                    if ( v16 != 'a' )
                                    {
                                      if ( v16 != 'd' )
                                      {
                                        if ( v16 != 's' )
                                          return puts("Failed!");
                                        goto LABEL_137;
                                      }
                                      goto LABEL_67;
                                    }
                                    goto LABEL_57;
                                  }
LABEL_1108:
                                  loc_6BE0 ^= qword_A710;
                                  v225 = get_input(v1, v0, loc_6BE0 ^ qword_A710, loc_6BE0, v2 + 57);
                                  if ( v225 == 'w' )
                                    break;
                                  if ( v225 == 'a' )
                                    goto LABEL_1103;
                                  if ( v225 == 'd' )
                                    goto LABEL_1113;
                                  if ( v225 != 's' )
                                    return puts("Failed!");
                                }
                                while ( 1 )
                                {
LABEL_1033:
                                  loc_660F ^= qword_A698;
                                  v210 = get_input(v1, v0, loc_660F ^ qword_A698, loc_660F, v2 + 55);
                                  if ( v210 != 'w' )
                                  {
                                    if ( v210 != 'a' )
                                    {
                                      if ( v210 != 'd' )
                                      {
                                        if ( v210 != 's' )
                                          return puts("Failed!");
                                        goto LABEL_1108;
                                      }
                                      goto LABEL_1038;
                                    }
                                    goto LABEL_1028;
                                  }
LABEL_958:
                                  loc_603E ^= qword_A620;
                                  v195 = get_input(v1, v0, loc_603E ^ qword_A620, loc_603E, v2 + 28);
                                  if ( v195 == 'w' )
                                    break;
                                  if ( v195 == 'a' )
                                    goto LABEL_953;
                                  if ( v195 == 'd' )
                                    goto LABEL_963;
                                  if ( v195 != 's' )
                                    return puts("Failed!");
                                }
                                while ( 1 )
                                {
LABEL_883:
                                  loc_5A6D ^= qword_A5A8;
                                  v180 = get_input(v1, v0, loc_5A6D ^ qword_A5A8, loc_5A6D, v2 + 3);
                                  if ( v180 != 'w' )
                                  {
                                    if ( v180 != 'a' )
                                    {
                                      if ( v180 != 'd' )
                                      {
                                        if ( v180 != 's' )
                                          return puts("Failed!");
                                        goto LABEL_958;
                                      }
                                      goto LABEL_888;
                                    }
                                    goto LABEL_878;
                                  }
LABEL_808:
                                  loc_549C ^= qword_A530;
                                  v165 = get_input(v1, v0, loc_549C ^ qword_A530, loc_549C, v2 + 46);
                                  if ( v165 == 'w' )
                                    break;
                                  if ( v165 == 'a' )
                                    goto LABEL_803;
                                  if ( v165 == 'd' )
                                    goto LABEL_813;
                                  if ( v165 != 's' )
                                    return puts("Failed!");
                                }
                                while ( 1 )
                                {
LABEL_733:
                                  loc_4ECB ^= qword_A4B8;
                                  v150 = get_input(v1, v0, loc_4ECB ^ qword_A4B8, loc_4ECB, v2 + 34);
                                  if ( v150 != 'w' )
                                  {
                                    if ( v150 != 'a' )
                                    {
                                      if ( v150 != 'd' )
                                      {
                                        if ( v150 != 's' )
                                          return puts("Failed!");
                                        goto LABEL_808;
                                      }
                                      goto LABEL_738;
                                    }
                                    goto LABEL_728;
                                  }
LABEL_658:
                                  loc_48FA ^= qword_A440;
                                  v135 = get_input(v1, v0, loc_48FA ^ qword_A440, loc_48FA, v2 + 36);
                                  if ( v135 == 'w' )
                                    break;
                                  if ( v135 == 'a' )
                                    goto LABEL_653;
                                  if ( v135 == 'd' )
                                    goto LABEL_663;
                                  if ( v135 != 's' )
                                    return puts("Failed!");
                                }
                                while ( 1 )
                                {
LABEL_583:
                                  loc_4329 ^= qword_A3C8;
                                  v120 = get_input(v1, v0, loc_4329 ^ qword_A3C8, loc_4329, v2 + 4);
                                  if ( v120 != 'w' )
                                  {
                                    if ( v120 != 'a' )
                                    {
                                      if ( v120 != 'd' )
                                      {
                                        if ( v120 != 's' )
                                          return puts("Failed!");
                                        goto LABEL_658;
                                      }
                                      goto LABEL_588;
                                    }
                                    goto LABEL_578;
                                  }
LABEL_512:
                                  loc_3D58 ^= qword_A350;
                                  v106 = get_input(v1, v0, loc_3D58 ^ qword_A350, loc_3D58, v2 + 19);
                                  if ( v106 == 'w' )
                                    break;
                                  if ( v106 == 'a' )
                                    goto LABEL_507;
                                  if ( v106 == 'd' )
                                    goto LABEL_517;
                                  if ( v106 != 's' )
                                    return puts("Failed!");
                                }
                                while ( 1 )
                                {
LABEL_437:
                                  loc_3787 ^= qword_A2D8;
                                  v91 = get_input(v1, v0, loc_3787 ^ qword_A2D8, loc_3787, v2 + 48);
                                  if ( v91 != 'w' )
                                  {
                                    if ( v91 != 'a' )
                                    {
                                      if ( v91 != 'd' )
                                      {
                                        if ( v91 != 's' )
                                          return puts("Failed!");
                                        goto LABEL_512;
                                      }
                                      goto LABEL_442;
                                    }
                                    goto LABEL_432;
                                  }
LABEL_362:
                                  loc_31B6 ^= qword_A260;
                                  v76 = get_input(v1, v0, loc_31B6 ^ qword_A260, loc_31B6, v2 + 32);
                                  switch ( v76 )
                                  {
                                    case 'w':
                                      goto LABEL_287;
                                    case 'a':
                                      goto LABEL_357;
                                    case 'd':
                                      goto LABEL_367;
                                  }
                                  if ( v76 != 's' )
                                    return puts("Failed!");
                                }
                              }
                              if ( v15 != 's' )
                                return puts("Failed!");
                            }
                            while ( 1 )
                            {
LABEL_1103:
                              loc_6B7D ^= qword_A708;
                              v224 = get_input(v1, v0, loc_6B7D ^ qword_A708, loc_6B7D, v2 + 48);
                              if ( v224 != 'w' )
                              {
                                if ( v224 != 'a' )
                                {
                                  if ( v224 != 'd' )
                                  {
                                    if ( v224 != 's' )
                                      return puts("Failed!");
                                    goto LABEL_57;
                                  }
                                  goto LABEL_1108;
                                }
                                goto LABEL_1098;
                              }
LABEL_1028:
                              loc_65AC ^= qword_A690;
                              v209 = get_input(v1, v0, loc_65AC ^ qword_A690, loc_65AC, v2 + 61);
                              if ( v209 == 'w' )
                                break;
                              if ( v209 == 'a' )
                                goto LABEL_1023;
                              if ( v209 == 'd' )
                                goto LABEL_1033;
                              if ( v209 != 's' )
                                return puts("Failed!");
                            }
                            while ( 1 )
                            {
LABEL_953:
                              loc_5FDB ^= qword_A618;
                              v194 = get_input(v1, v0, loc_5FDB ^ qword_A618, loc_5FDB, v2 + 7);
                              if ( v194 != 'w' )
                              {
                                if ( v194 != 'a' )
                                {
                                  if ( v194 != 'd' )
                                  {
                                    if ( v194 != 's' )
                                      return puts("Failed!");
                                    goto LABEL_1028;
                                  }
                                  goto LABEL_958;
                                }
                                goto LABEL_948;
                              }
LABEL_878:
                              loc_5A0A ^= qword_A5A0;
                              v179 = get_input(v1, v0, loc_5A0A ^ qword_A5A0, loc_5A0A, v2 + 4);
                              if ( v179 == 'w' )
                                break;
                              if ( v179 == 'a' )
                                goto LABEL_873;
                              if ( v179 == 'd' )
                                goto LABEL_883;
                              if ( v179 != 's' )
                                return puts("Failed!");
                            }
                            while ( 1 )
                            {
LABEL_803:
                              loc_5439 ^= qword_A528;
                              v164 = get_input(v1, v0, loc_5439 ^ qword_A528, loc_5439, v2 + 44);
                              if ( v164 != 'w' )
                              {
                                if ( v164 != 'a' )
                                {
                                  if ( v164 != 'd' )
                                  {
                                    if ( v164 != 's' )
                                      return puts("Failed!");
                                    goto LABEL_878;
                                  }
                                  goto LABEL_808;
                                }
                                goto LABEL_798;
                              }
LABEL_728:
                              loc_4E68 ^= qword_A4B0;
                              v149 = get_input(v1, v0, loc_4E68 ^ qword_A4B0, loc_4E68, v2 + 40);
                              if ( v149 == 'w' )
                                break;
                              if ( v149 == 'a' )
                                goto LABEL_723;
                              if ( v149 == 'd' )
                                goto LABEL_733;
                              if ( v149 != 's' )
                                return puts("Failed!");
                            }
                            while ( 1 )
                            {
LABEL_653:
                              loc_4897 ^= qword_A438;
                              v134 = get_input(v1, v0, loc_4897 ^ qword_A438, loc_4897, v2 + 53);
                              if ( v134 != 'w' )
                              {
                                if ( v134 != 'a' )
                                {
                                  if ( v134 != 'd' )
                                  {
                                    if ( v134 != 's' )
                                      return puts("Failed!");
                                    goto LABEL_728;
                                  }
                                  goto LABEL_658;
                                }
                                goto LABEL_648;
                              }
LABEL_578:
                              loc_42C6 ^= qword_A3C0;
                              v119 = get_input(v1, v0, loc_42C6 ^ qword_A3C0, loc_42C6, v2 + 24);
                              if ( v119 == 'w' )
                                break;
                              if ( v119 == 'a' )
                                goto LABEL_573;
                              if ( v119 == 'd' )
                                goto LABEL_583;
                              if ( v119 != 's' )
                                return puts("Failed!");
                            }
                            while ( 1 )
                            {
LABEL_507:
                              loc_3CF5 ^= qword_A348;
                              v105 = get_input(v1, v0, loc_3CF5 ^ qword_A348, loc_3CF5, v2 + 23);
                              if ( v105 != 'w' )
                              {
                                if ( v105 != 'a' )
                                {
                                  if ( v105 != 'd' )
                                  {
                                    if ( v105 != 's' )
                                      return puts("Failed!");
                                    goto LABEL_578;
                                  }
                                  goto LABEL_512;
                                }
                                goto LABEL_502;
                              }
LABEL_432:
                              loc_3724 ^= qword_A2D0;
                              v90 = get_input(v1, v0, loc_3724 ^ qword_A2D0, loc_3724, v2 + 54);
                              switch ( v90 )
                              {
                                case 'w':
                                  goto LABEL_357;
                                case 'a':
                                  goto LABEL_427;
                                case 'd':
                                  goto LABEL_437;
                              }
                              if ( v90 != 's' )
                                return puts("Failed!");
                            }
                          }
                          if ( v29 != 's' )
                            return puts("Failed!");
                        }
                        while ( 1 )
                        {
LABEL_52:
                          loc_19A7 ^= qword_A070;
                          v14 = get_input(v1, v0, loc_19A7 ^ qword_A070, loc_19A7, v2 + 14);
                          if ( v14 != 'w' )
                          {
                            if ( v14 != 'a' )
                            {
                              if ( v14 != 'd' )
                              {
                                if ( v14 != 's' )
                                  return puts("Failed!");
                                goto LABEL_127;
                              }
                              goto LABEL_57;
                            }
                            goto LABEL_47;
                          }
LABEL_1098:
                          loc_6B1A ^= qword_A700;
                          v223 = get_input(v1, v0, loc_6B1A ^ qword_A700, loc_6B1A, v2 + 33);
                          if ( v223 == 'w' )
                            break;
                          if ( v223 == 'a' )
                            goto LABEL_1093;
                          if ( v223 == 'd' )
                            goto LABEL_1103;
                          if ( v223 != 's' )
                            return puts("Failed!");
                        }
                        while ( 1 )
                        {
LABEL_1023:
                          loc_6549 ^= qword_A688;
                          v208 = get_input(v1, v0, loc_6549 ^ qword_A688, loc_6549, v2 + 45);
                          if ( v208 != 'w' )
                          {
                            if ( v208 != 'a' )
                            {
                              if ( v208 != 'd' )
                              {
                                if ( v208 != 's' )
                                  return puts("Failed!");
                                goto LABEL_1098;
                              }
                              goto LABEL_1028;
                            }
                            goto LABEL_1018;
                          }
LABEL_948:
                          loc_5F78 ^= qword_A610;
                          v193 = get_input(v1, v0, loc_5F78 ^ qword_A610, loc_5F78, v2 + 25);
                          if ( v193 == 'w' )
                            break;
                          if ( v193 == 'a' )
                            goto LABEL_943;
                          if ( v193 == 'd' )
                            goto LABEL_953;
                          if ( v193 != 's' )
                            return puts("Failed!");
                        }
                        while ( 1 )
                        {
LABEL_873:
                          loc_59A7 ^= qword_A598;
                          v178 = get_input(v1, v0, loc_59A7 ^ qword_A598, loc_59A7, v2 + 19);
                          if ( v178 != 'w' )
                          {
                            if ( v178 != 'a' )
                            {
                              if ( v178 != 'd' )
                              {
                                if ( v178 != 's' )
                                  return puts("Failed!");
                                goto LABEL_948;
                              }
                              goto LABEL_878;
                            }
                            goto LABEL_868;
                          }
LABEL_798:
                          loc_53D6 ^= qword_A520;
                          v163 = get_input(v1, v0, loc_53D6 ^ qword_A520, loc_53D6, v2 + 50);
                          if ( v163 == 'w' )
                            break;
                          if ( v163 == 'a' )
                            goto LABEL_793;
                          if ( v163 == 'd' )
                            goto LABEL_803;
                          if ( v163 != 's' )
                            return puts("Failed!");
                        }
                        while ( 1 )
                        {
LABEL_723:
                          loc_4E05 ^= qword_A4A8;
                          v148 = get_input(v1, v0, loc_4E05 ^ qword_A4A8, loc_4E05, v2 + 46);
                          if ( v148 != 'w' )
                          {
                            if ( v148 != 'a' )
                            {
                              if ( v148 != 'd' )
                              {
                                if ( v148 != 's' )
                                  return puts("Failed!");
                                goto LABEL_798;
                              }
                              goto LABEL_728;
                            }
                            goto LABEL_718;
                          }
LABEL_648:
                          loc_4834 ^= qword_A430;
                          v133 = get_input(v1, v0, loc_4834 ^ qword_A430, loc_4834, v2 + 50);
                          if ( v133 == 'w' )
                            break;
                          if ( v133 == 'a' )
                            goto LABEL_643;
                          if ( v133 == 'd' )
                            goto LABEL_653;
                          if ( v133 != 's' )
                            return puts("Failed!");
                        }
                        while ( 1 )
                        {
LABEL_573:
                          loc_4263 ^= qword_A3B8;
                          v118 = get_input(v1, v0, loc_4263 ^ qword_A3B8, loc_4263, v2 + 57);
                          if ( v118 != 'w' )
                          {
                            if ( v118 != 'a' )
                            {
                              if ( v118 != 'd' )
                              {
                                if ( v118 != 's' )
                                  return puts("Failed!");
                                goto LABEL_648;
                              }
                              goto LABEL_578;
                            }
                            goto LABEL_568;
                          }
LABEL_502:
                          loc_3C92 ^= qword_A340;
                          v104 = get_input(v1, v0, loc_3C92 ^ qword_A340, loc_3C92, v2 + 60);
                          switch ( v104 )
                          {
                            case 'w':
                              goto LABEL_427;
                            case 'a':
                              goto LABEL_497;
                            case 'd':
                              goto LABEL_507;
                          }
                          if ( v104 != 's' )
                            return puts("Failed!");
                        }
                      }
                      if ( v43 != 's' )
                        return puts("Failed!");
                    }
                    while ( 1 )
                    {
LABEL_122:
                      loc_1F1A ^= qword_A0E0;
                      v28 = get_input(v1, v0, loc_1F1A ^ qword_A0E0, loc_1F1A, v2 + 3);
                      if ( v28 != 'w' )
                      {
                        if ( v28 != 'a' )
                        {
                          if ( v28 != 'd' )
                          {
                            if ( v28 != 's' )
                              return puts("Failed!");
                            goto LABEL_197;
                          }
                          goto LABEL_127;
                        }
                        goto LABEL_117;
                      }
LABEL_47:
                      loc_1944 ^= qword_A068;
                      v13 = get_input(v1, v0, loc_1944 ^ qword_A068, loc_1944, v2 + 58);
                      if ( v13 == 'w' )
                        break;
                      if ( v13 == 'a' )
                        goto LABEL_42;
                      if ( v13 == 'd' )
                        goto LABEL_52;
                      if ( v13 != 's' )
                        return puts("Failed!");
                    }
                    while ( 1 )
                    {
LABEL_1093:
                      loc_6AB7 ^= qword_A6F8;
                      v222 = get_input(v1, v0, loc_6AB7 ^ qword_A6F8, loc_6AB7, v2 + 29);
                      if ( v222 != 'w' )
                      {
                        if ( v222 != 'a' )
                        {
                          if ( v222 != 'd' )
                          {
                            if ( v222 != 's' )
                              return puts("Failed!");
                            goto LABEL_47;
                          }
                          goto LABEL_1098;
                        }
                        goto LABEL_1088;
                      }
LABEL_1018:
                      loc_64E6 ^= qword_A680;
                      v207 = get_input(v1, v0, loc_64E6 ^ qword_A680, loc_64E6, v2 + 27);
                      if ( v207 == 'w' )
                        break;
                      if ( v207 == 'a' )
                        goto LABEL_1013;
                      if ( v207 == 'd' )
                        goto LABEL_1023;
                      if ( v207 != 's' )
                        return puts("Failed!");
                    }
                    while ( 1 )
                    {
LABEL_943:
                      loc_5F15 ^= qword_A608;
                      v192 = get_input(v1, v0, loc_5F15 ^ qword_A608, loc_5F15, v2 + 16);
                      if ( v192 != 'w' )
                      {
                        if ( v192 != 'a' )
                        {
                          if ( v192 != 'd' )
                          {
                            if ( v192 != 's' )
                              return puts("Failed!");
                            goto LABEL_1018;
                          }
                          goto LABEL_948;
                        }
                        goto LABEL_938;
                      }
LABEL_868:
                      loc_5944 ^= qword_A590;
                      v177 = get_input(v1, v0, loc_5944 ^ qword_A590, loc_5944, v2 + 10);
                      if ( v177 == 'w' )
                        break;
                      if ( v177 == 'a' )
                        goto LABEL_863;
                      if ( v177 == 'd' )
                        goto LABEL_873;
                      if ( v177 != 's' )
                        return puts("Failed!");
                    }
                    while ( 1 )
                    {
LABEL_793:
                      loc_5373 ^= qword_A518;
                      v162 = get_input(v1, v0, loc_5373 ^ qword_A518, loc_5373, v2 + 27);
                      if ( v162 != 'w' )
                      {
                        if ( v162 != 'a' )
                        {
                          if ( v162 != 'd' )
                          {
                            if ( v162 != 's' )
                              return puts("Failed!");
                            goto LABEL_868;
                          }
                          goto LABEL_798;
                        }
                        goto LABEL_788;
                      }
LABEL_718:
                      loc_4DA2 ^= qword_A4A0;
                      v147 = get_input(v1, v0, loc_4DA2 ^ qword_A4A0, loc_4DA2, v2 + 63);
                      if ( v147 == 'w' )
                        break;
                      if ( v147 == 'a' )
                        goto LABEL_713;
                      if ( v147 == 'd' )
                        goto LABEL_723;
                      if ( v147 != 's' )
                        return puts("Failed!");
                    }
                    while ( 1 )
                    {
LABEL_643:
                      loc_47D1 ^= qword_A428;
                      v132 = get_input(v1, v0, loc_47D1 ^ qword_A428, loc_47D1, v2 + 63);
                      if ( v132 != 'w' )
                      {
                        if ( v132 != 'a' )
                        {
                          if ( v132 != 'd' )
                          {
                            if ( v132 != 's' )
                              return puts("Failed!");
                            goto LABEL_718;
                          }
                          goto LABEL_648;
                        }
                        goto LABEL_638;
                      }
LABEL_568:
                      loc_4200 ^= qword_A3B0;
                      v117 = get_input(v1, v0, loc_4200 ^ qword_A3B0, loc_4200, v2 + 26);
                      switch ( v117 )
                      {
                        case 'w':
                          goto LABEL_497;
                        case 'a':
                          goto LABEL_563;
                        case 'd':
                          goto LABEL_573;
                      }
                      if ( v117 != 's' )
                        return puts("Failed!");
                    }
                  }
                  if ( v57 != 's' )
                    return puts("Failed!");
                  goto LABEL_342;
                }
              }
            }
            if ( v71 != 'a' )
            {
              if ( v71 != 'd' )
              {
                if ( v71 != 's' )
                  return puts("Failed!");
                goto LABEL_412;
              }
              goto LABEL_342;
            }
          }
        }
        if ( v85 != 'a' )
        {
          if ( v85 != 'd' )
          {
            if ( v85 != 's' )
              return puts("Failed!");
            goto LABEL_482;
          }
          goto LABEL_412;
        }
      }
    }
    if ( v99 == 'a' )
      goto LABEL_472;
    if ( v99 != 'd' )
    {
      if ( v99 != 's' )
        return puts("Failed!");
      goto LABEL_552;
    }
LABEL_482:
    loc_3B06 ^= qword_A320;
    v100 = get_input(v1, v0, loc_3B06 ^ qword_A320, loc_3B06, v2 + 39);
    if ( v100 == 'w' )
      goto LABEL_407;
  }
  while ( v100 == 'a' );
  if ( v100 != 'd' )
  {
    if ( v100 != 's' )
      return puts("Failed!");
LABEL_557:
    loc_40D7 ^= qword_A398;
    v115 = get_input(v1, v0, loc_40D7 ^ qword_A398, loc_40D7, v2 + 20);
    if ( v115 != 'w' )
    {
      if ( v115 != 'a' )
      {
        if ( v115 == 'd' )
          goto gotoWIN;
        if ( v115 != 's' )
          return puts("Failed!");
        goto LABEL_628;
      }
      goto LABEL_552;
    }
    goto LABEL_482;
  }
LABEL_487:
  while ( 1 )
  {
    loc_3B69 ^= qword_A328;
    v101 = get_input(v1, v0, loc_3B69 ^ qword_A328, loc_3B69, v2 + 57);
    if ( v101 != 'w' )
      break;
LABEL_412:
    loc_3598 ^= qword_A2B0;
    v86 = get_input(v1, v0, loc_3598 ^ qword_A2B0, loc_3598, v2 + 39);
    switch ( v86 )
    {
      case 'w':
        goto LABEL_337;
      case 'a':
        goto LABEL_407;
      case 'd':
        goto LABEL_417;
    }
    if ( v86 != 's' )
      return puts("Failed!");
  }
  switch ( v101 )
  {
    case 'a':
      goto LABEL_482;
    case 'd':
      goto LABEL_492;
    case 's':
gotoWIN:
      loc_413A ^= qword_A3A0;
      win();
  }
  return puts("Failed!");
}
