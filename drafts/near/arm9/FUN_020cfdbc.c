// near: full target=0x17c0 candidate=0x174c; complete reconstruction with verified by-value pair ABI; parked layout/register residuals, no spelling sweeps
// Full shared-frame routine through020d157c; inventory0x5e is only initial timeout return.
// flags: -O4,p
// Evidence: notes/reference/resume2-upper-20261112/full-body-cfdbc.json
// No interior functions: cfe1a loop and d1526/d1532/d154a exits share the entry frame.
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char bool;
#define true 1
#define false 0
typedef void (*CallbackCFDBC)(int *,int *,unsigned int);
#pragma thumb off
extern void FUN_02000edc(int,int,int,int);
#pragma thumb reset
#pragma thumb off
extern int FUN_02001540(int,int,int);
#pragma thumb reset
#pragma thumb off
extern int FUN_02003c8c(int,int);
#pragma thumb reset
#pragma thumb off
extern int FUN_02003e24(int,int);
#pragma thumb reset
#pragma thumb off
extern int FUN_02003fa8(int,int);
#pragma thumb reset
#pragma thumb off
extern int FUN_02005898(int);
#pragma thumb reset
extern int FUN_020c7824(void);
extern void FUN_020c7864(int);
extern int FUN_020c7bcc(int);
extern int FUN_020c7bdc(int,int);
extern void FUN_020c7bec(int);
extern int FUN_020cb184(int,int,int);
extern int FUN_020cb1a0(int,int,int);
extern int FUN_020cb330(int,int,int,int,int);
extern int FUN_020cb474(int,int,int,int,int,int);
extern void FUN_020cb778(int,int,int);
typedef struct { int a, b; } Pair_cb81c;
struct Node_cb81c;
extern int FUN_020cb81c(char **,Pair_cb81c,int,struct Node_cb81c *,int);
extern int FUN_020cfc44(int,int,int,int,int,int,int,int,int,int,int);
extern void FUN_020d183c(int,int,int);
extern int FUN_020d1888(int,int,int);
extern int FUN_020d191c(int,int,int,int);
extern int FUN_020d19c4(int,int,int);
extern int FUN_020d1a30(int,int,int,int,int);
extern void FUN_020d1b58(int,int,int);
extern void FUN_020d1b74(int,int);
extern void FUN_020d1b84(int,int);
int FUN_020cfdbc(int *param_1,int param_2)

{
  Pair_cb81c callback_pair;
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iStack_51c;
  int iStack_50c;
  undefined1 auStack_46c [4];
  undefined1 auStack_468 [4];
  CallbackCFDBC pcStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  int aiStack_458 [5];
  undefined1 auStack_444 [45];
  char acStack_417 [512];
  undefined1 auStack_217 [515];
  
  iVar4 = *param_1;
  piVar13 = *(int **)(param_2 + 4);
  if (*(int *)(param_2 + 8) == 0) {
    bVar2 = false;
    iVar5 = FUN_020c7824();
    if (0x0000ea60 < ((uint)iVar5 - (uint)piVar13[0x52])) {
      piVar13[0x51] = 1;
      FUN_020d1b58((int)param_1,0x00000d02,0x020fe1c0);
      FUN_020cb778((int)param_1,3,0);
      return 3;
    }
  }
  else {
    bVar2 = true;
  }
  do {
    iVar5 = FUN_020cb474((int)param_1,piVar13[1],(int)(piVar13 + 6),(int)auStack_46c,1,0x020fe1d8
                        );
    if (iVar5 != 0) {
      return iVar5;
    }
    if (*(int *)(param_2 + 0x14) == 1) {
      iVar5 = FUN_020d19c4((int)param_1,piVar13[1],(int)aiStack_458);
      if (iVar5 != 0) {
        return iVar5;
      }
      if (aiStack_458[0] == 4) {
        FUN_020d1b58((int)param_1,0x00000d01,0x020fe1dc);
        FUN_020cb778((int)param_1,4,0);
        return 4;
      }
      if (aiStack_458[0] == 3) {
        iVar5 = *piVar13;
        if (iVar5 == 1) {
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe208);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe214);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x198));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe220);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x1a0));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe22c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x0000060c));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe23c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x1a4));
          if ((char)piVar13[10] != '\0') {
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe248);
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)(piVar13 + 10));
          }
          if (*(char *)((int)piVar13 + 0x47) != '\0') {
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe250);
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)piVar13 + 0x47);
          }
          if ((char)piVar13[0x17] != '\0') {
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe260);
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)(piVar13 + 0x17));
          }
          if (*(char *)((int)piVar13 + 0x8f) != '\0') {
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe268);
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)piVar13 + 0x8f);
          }
          if (*(char *)((int)piVar13 + 0xae) != '\0') {
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe274);
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)piVar13 + 0xae);
          }
          if (piVar13[0x4d] != 0) {
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe280);
            FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),piVar13[0x4d]);
          }
          if (0 < piVar13[0x4e]) {
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe28c);
            FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),piVar13[0x4e]);
          }
        }
        else if (iVar5 == 2) {
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe294);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe260);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)(piVar13 + 0x17));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe23c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x1a4));
        }
        else if (iVar5 == 3) {
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe29c);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe260);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)(piVar13 + 0x17));
          FUN_020d1b84((int)piVar13 + 0xcd,(int)auStack_444);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe2a4);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)auStack_444);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe22c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x0000060c));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe23c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x1a4));
        }
        else if (iVar5 == 4) {
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe2b0);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe214);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x198));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe220);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x1a0));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe2bc);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),piVar13[0x4f]);
        }
        else if (iVar5 == 5) {
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe2c8);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe248);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)(piVar13 + 10));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe260);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)(piVar13 + 0x17));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe23c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x1a4));
          FUN_020d1b84((int)piVar13 + 0xcd,(int)auStack_444);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe2a4);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)auStack_444);
        }
        else if (iVar5 == 6) {
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe2d0);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe248);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)(piVar13 + 10));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe260);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)(piVar13 + 0x17));
          FUN_020d1b84((int)piVar13 + 0xcd,(int)auStack_444);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe2a4);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)auStack_444);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe2dc);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x00000608));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe22c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x0000060c));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe250);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)piVar13 + 0x47);
          if ((char)piVar13[0x3b] != '\0') {
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe2e8);
            FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)(piVar13 + 0x3b));
          }
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe23c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x1a4));
        }
        else if (iVar5 == 7) {
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe2f0);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe214);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x198));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe220);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x1a0));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe22c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x0000060c));
        }
        else if (iVar5 == 9) {
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe2fc);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe214);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x198));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe220);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x1a0));
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe30c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),piVar13[0x54]);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe318);
          if ((int *)piVar13[0x53] != (int *)0x0) {
            FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)piVar13[0x53]);
            iStack_50c = 1;
            if (1 < piVar13[0x54]) {
              iVar5 = 4;
              do {
                FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe320);
                FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(piVar13[0x53] + iVar5));
                iVar5 = iVar5 + 4;
                iStack_50c = iStack_50c + 1;
              } while (iStack_50c < piVar13[0x54]);
            }
          }
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe22c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x0000060c));
        }
        else if (iVar5 == 8) {
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe324);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe334);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),(int)piVar13 + 0x47);
          FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe22c);
          FUN_020cb1a0((int)param_1,(int)(piVar13 + 6),*(int *)(iVar4 + 0x0000060c));
        }
        else {
          FUN_02000edc(0x020fe344,0x020fe178,0x020fe03c,0x000002bf);
        }
        FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe348);
        FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x0211cfc8);
        FUN_020cb184((int)param_1,(int)(piVar13 + 6),0x020fe354);
        *(undefined4 *)(param_2 + 0x14) = 4;
      }
    }
    else if (*(int *)(param_2 + 0x14) == 4) {
      iVar5 = FUN_020cb330((int)param_1,piVar13[1],(int)(piVar13 + 2),(int)auStack_468,
                           (int)auStack_46c);
      if (iVar5 != 0) {
        if (iVar5 != 3) {
          return iVar5;
        }
        FUN_020d1b58((int)param_1,0x00000d01,0x020fe35c);
        FUN_020cb778((int)param_1,3,0);
        return 3;
      }
      if ((*(int *)(param_2 + 8) != 0) &&
         (iVar5 = FUN_020c7824(), 0x0000ea60 < ((uint)iVar5 - (uint)piVar13[0x52]))) {
        piVar13[0x51] = 1;
        FUN_020d1b58((int)param_1,0x00000d02,0x020fe1c0);
        FUN_020cb778((int)param_1,3,0);
        return 3;
      }
      iVar5 = FUN_02003fa8(piVar13[2],0x020fe354);
      if (iVar5 != 0) {
        uStack_45c = 0;
        *(undefined4 *)(param_2 + 0x14) = 5;
        iVar5 = FUN_020d1888((int)param_1,piVar13[2],1);
        if (iVar5 != 0) {
          piVar13[0x51] = 1;
          return 4;
        }
        iVar5 = *piVar13;
        if (iVar5 == 1) {
          bVar2 = false;
          aiStack_458[1] = 0;
          aiStack_458[2] = 0;
          aiStack_458[4] = 0;
          aiStack_458[3] = 0x00000601;
          do {
            iVar5 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                 (int)acStack_417);
            if (iVar5 != 0) {
              return iVar5;
            }
            iVar5 = FUN_02003e24((int)auStack_217,0x020fe388);
            if (iVar5 == 0) {
              iVar5 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                   (int)acStack_417);
              if (iVar5 != 0) {
                return iVar5;
              }
              iVar5 = FUN_02003e24((int)auStack_217,0x020fe390);
              if ((iVar5 == 0) && (iVar5 = FUN_02003e24((int)acStack_417,0x020fe344), iVar5 != 0)
                 ) {
                aiStack_458[3] = 0x600;
              }
              bVar2 = true;
            }
            else {
              iVar5 = FUN_02003e24((int)auStack_217,0x020fe398);
              if (iVar5 != 0) {
                FUN_020d1b58((int)param_1,1,0x020fe3d0);
                FUN_020cb778((int)param_1,3,1);
                return 3;
              }
              aiStack_458[2] = aiStack_458[2] + 1;
              iVar5 = FUN_020c7bdc(aiStack_458[4],aiStack_458[2] * 0xac);
              aiStack_458[4] = iVar5;
              if (iVar5 == 0) {
                FUN_020d1b74((int)param_1,0x020fe0bc);
                return 1;
              }
              iVar10 = (aiStack_458[2] + -1) * 0xac;
              iVar6 = iVar5 + iVar10;
              FUN_02001540(iVar6,0,0xac);
              iVar14 = FUN_02005898((int)acStack_417);
              *(int *)(iVar5 + iVar10) = iVar14;
              bVar1 = false;
              do {
                uVar3 = uStack_45c;
                iVar5 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                     (int)acStack_417);
                if (iVar5 != 0) {
                  return iVar5;
                }
                iVar5 = FUN_02003e24((int)auStack_217,0x020fe39c);
                if (iVar5 == 0) {
                  FUN_020d183c(iVar6 + 4,(int)acStack_417,0x1f);
                }
                else {
                  iVar5 = FUN_02003e24((int)auStack_217,0x020fe3a4);
                  if (iVar5 == 0) {
                    FUN_020d183c(iVar6 + 0x23,(int)acStack_417,0x15);
                  }
                  else {
                    iVar5 = FUN_02003e24((int)auStack_217,0x020fe3b0);
                    if (iVar5 == 0) {
                      FUN_020d183c(iVar6 + 0x38,(int)acStack_417,0x1f);
                    }
                    else {
                      iVar5 = FUN_02003e24((int)auStack_217,0x020fe3bc);
                      if (iVar5 == 0) {
                        FUN_020d183c(iVar6 + 0x57,(int)acStack_417,0x1f);
                      }
                      else {
                        iVar5 = FUN_02003e24((int)auStack_217,0x020fe3c8);
                        if (iVar5 == 0) {
                          FUN_020d183c(iVar6 + 0x76,(int)acStack_417,0x33);
                        }
                        else {
                          iVar5 = FUN_02003e24((int)auStack_217,0x020fe398);
                          if ((iVar5 == 0) ||
                             (iVar5 = FUN_02003e24((int)auStack_217,0x020fe388), iVar5 == 0)) {
                            bVar1 = true;
                            uStack_45c = uVar3;
                          }
                        }
                      }
                    }
                  }
                }
              } while (!bVar1);
            }
            iVar5 = aiStack_458[3];
          } while (!bVar2);
          pcStack_464 = *(CallbackCFDBC *)(param_2 + 0xc);
          uStack_460 = *(undefined4 *)(param_2 + 0x10);
          if (pcStack_464 != (CallbackCFDBC)0) {
            (*pcStack_464)(param_1,aiStack_458 + 1,uStack_460);
          }
          if (((iVar5 == 0x600) && (aiStack_458[3] == 0x600)) &&
             (iVar5 = FUN_020cfc44((int)param_1,(int)(piVar13 + 10),(int)piVar13 + 0x47,
                                   (int)(piVar13 + 0x17),(int)piVar13 + 0x8f,(int)piVar13 + 0xae,
                                   piVar13[0x4d],aiStack_458[2] + piVar13[0x4e],
                                   *(int *)(param_2 + 8),*(int *)(param_2 + 0xc),
                                   *(int *)(param_2 + 0x10)), iVar5 != 0)) {
            return iVar5;
          }
          FUN_020c7bec(aiStack_458[4]);
          aiStack_458[4] = 0;
        }
        else if (iVar5 == 2) {
          iVar10 = *(int *)(param_2 + 0xc);
          iVar5 = *(int *)(param_2 + 0x10);
          if (iVar10 != 0) {
            iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                 (int)acStack_417);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_02003e24((int)auStack_217,0x020fe3f8);
            if (iVar6 != 0) {
              FUN_020d1b58((int)param_1,1,0x020fe3d0);
              FUN_020cb778((int)param_1,3,1);
              return 3;
            }
            puVar7 = (undefined4 *)FUN_020c7bcc(0x3c);
            if (puVar7 == (undefined4 *)0x0) {
              FUN_020d1b74((int)param_1,0x020fe0bc);
              return 1;
            }
            *puVar7 = 0;
            FUN_020d183c((int)(puVar7 + 1),(int)(piVar13 + 0x17),0x33);
            if (acStack_417[0] == '0') {
              puVar7[0xe] = 0;
            }
            else {
              puVar7[0xe] = 1;
            }
            callback_pair.a = iVar10;
            callback_pair.b = iVar5;
            iVar5 = FUN_020cb81c((char **)param_1,callback_pair,(int)puVar7,
                                   (struct Node_cb81c *)param_2,0);
            if (iVar5 != 0) {
              return iVar5;
            }
          }
        }
        else if (iVar5 == 3) {
          iVar10 = *(int *)(param_2 + 0xc);
          iVar5 = *(int *)(param_2 + 0x10);
          if (iVar10 != 0) {
            puVar7 = (undefined4 *)FUN_020c7bcc(0x44);
            if (puVar7 == (undefined4 *)0x0) {
              FUN_020d1b74((int)param_1,0x020fe0bc);
              return 1;
            }
            *puVar7 = 0;
            FUN_02003c8c((int)(puVar7 + 1),(int)(piVar13 + 0x17));
            puVar7[0xe] = 0;
            puVar7[0xf] = 0;
            puVar7[0x10] = 0;
            iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                 (int)acStack_417);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_02003e24((int)auStack_217,0x020fe3fc);
            if (iVar6 != 0) {
              FUN_020d1b58((int)param_1,1,0x020fe3d0);
              FUN_020cb778((int)param_1,3,1);
              return 3;
            }
            bVar2 = false;
            do {
              iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                   (int)acStack_417);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar6 = FUN_02003e24((int)auStack_217,0x020fe39c);
              if (iVar6 == 0) {
                iVar6 = FUN_020c7bdc(puVar7[0xf],(puVar7[0xe] + 1) * 4);
                if (iVar6 == 0) {
                  FUN_020d1b74((int)param_1,0x020fe0bc);
                  return 1;
                }
                puVar7[0xf] = iVar6;
                iVar6 = FUN_020c7bcc(0x1f);
                if (iVar6 == 0) {
                  FUN_020d1b74((int)param_1,0x020fe0bc);
                  return 1;
                }
                *(int *)(puVar7[0xf] + puVar7[0xe] * 4) = iVar6;
                FUN_020d183c(*(int *)(puVar7[0xf] + puVar7[0xe] * 4),(int)acStack_417,0x1f);
                puVar7[0xe] = puVar7[0xe] + 1;
              }
              else {
                iVar6 = FUN_02003e24((int)auStack_217,0x020fe3a4);
                if (iVar6 == 0) {
                  if (0 < (int)puVar7[0xe]) {
                    iVar6 = FUN_020c7bdc(puVar7[0x10],puVar7[0xe] << 2);
                    if (iVar6 == 0) {
                      FUN_020d1b74((int)param_1,0x020fe0bc);
                      return 1;
                    }
                    puVar7[0x10] = iVar6;
                    iVar6 = FUN_020c7bcc(0x15);
                    if (iVar6 == 0) {
                      FUN_020d1b74((int)param_1,0x020fe0bc);
                      return 1;
                    }
                    *(int *)(puVar7[0x10] + puVar7[0xe] * 4 + -4) = iVar6;
                    FUN_020d183c(*(int *)(puVar7[0x10] + puVar7[0xe] * 4 + -4),(int)acStack_417,0x15
                                );
                  }
                }
                else {
                  iVar6 = FUN_02003e24((int)auStack_217,0x020fe400);
                  if (iVar6 != 0) {
                    FUN_020d1b58((int)param_1,1,0x020fe3d0);
                    FUN_020cb778((int)param_1,3,1);
                    return 3;
                  }
                  bVar2 = true;
                }
              }
            } while (!bVar2);
            callback_pair.a = iVar10;
            callback_pair.b = iVar5;
            iVar5 = FUN_020cb81c((char **)param_1,callback_pair,(int)puVar7,
                                   (struct Node_cb81c *)param_2,3);
            if (iVar5 != 0) {
              return iVar5;
            }
          }
        }
        else if (iVar5 == 4) {
          iVar10 = *(int *)(param_2 + 0xc);
          iVar5 = *(int *)(param_2 + 0x10);
          if (iVar10 != 0) {
            puVar7 = (undefined4 *)FUN_020c7bcc(0x10);
            if (puVar7 == (undefined4 *)0x0) {
              FUN_020d1b74((int)param_1,0x020fe0bc);
              return 1;
            }
            puVar7[1] = piVar13[0x4f];
            *puVar7 = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            bVar2 = false;
            do {
              iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                   (int)acStack_417);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar6 = FUN_02003e24((int)auStack_217,0x020fe408);
              if (iVar6 == 0) {
                bVar2 = true;
              }
              else {
                iVar6 = FUN_02003e24((int)auStack_217,0x020fe410);
                if (iVar6 != 0) {
                  FUN_020d1b58((int)param_1,1,0x020fe3d0);
                  FUN_020cb778((int)param_1,3,1);
                  return 3;
                }
                puVar7[2] = puVar7[2] + 1;
                iVar6 = FUN_020c7bdc(puVar7[3],puVar7[2] * 0x128);
                puVar7[3] = iVar6;
                if (iVar6 == 0) {
                  FUN_020d1b74((int)param_1,0x020fe0bc);
                  return 1;
                }
                iVar14 = (puVar7[2] + -1) * 0x128;
                iVar11 = iVar6 + iVar14;
                FUN_02001540(iVar11,0,0x128);
                *(undefined4 *)(iVar11 + 0x24) = 1;
                iVar9 = FUN_02005898((int)acStack_417);
                *(int *)(iVar6 + iVar14) = iVar9;
                bVar1 = false;
                do {
                  uVar3 = uStack_45c;
                  iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                       (int)acStack_417);
                  if (iVar6 != 0) {
                    return iVar6;
                  }
                  iVar6 = FUN_02003e24((int)auStack_217,0x020fe414);
                  if (iVar6 == 0) {
                    FUN_020d183c(iVar11 + 0x28,(int)acStack_417,0x100);
                  }
                  else {
                    iVar6 = FUN_02003e24((int)auStack_217,0x020fe39c);
                    if (iVar6 == 0) {
                      FUN_020d183c(iVar11 + 4,(int)acStack_417,0x1f);
                    }
                  }
                  iVar6 = FUN_02003e24((int)auStack_217,0x020fe41c);
                  if (iVar6 == 0) {
                    iVar6 = FUN_02005898((int)acStack_417);
                    *(int *)(iVar11 + 0x24) = iVar6;
                  }
                  else {
                    iVar6 = FUN_02003e24((int)auStack_217,0x020fe410);
                    if ((iVar6 == 0) ||
                       (iVar6 = FUN_02003e24((int)auStack_217,0x020fe408), iVar6 == 0)) {
                      bVar1 = true;
                      uStack_45c = uVar3;
                    }
                  }
                } while (!bVar1);
              }
            } while (!bVar2);
            callback_pair.a = iVar10;
            callback_pair.b = iVar5;
            iVar5 = FUN_020cb81c((char **)param_1,callback_pair,(int)puVar7,
                                   (struct Node_cb81c *)param_2,4);
            if (iVar5 != 0) {
              return iVar5;
            }
          }
        }
        else if (iVar5 == 5) {
          iVar10 = *(int *)(param_2 + 0xc);
          iVar5 = *(int *)(param_2 + 0x10);
          if (iVar10 != 0) {
            iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                 (int)acStack_417);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_02003e24((int)auStack_217,0x020fe428);
            if (iVar6 != 0) {
              FUN_020d1b58((int)param_1,1,0x020fe3d0);
              FUN_020cb778((int)param_1,3,1);
              return 3;
            }
            iVar6 = FUN_02005898((int)acStack_417);
            if (iVar6 == 0) {
              iVar14 = FUN_020d191c(piVar13[2],0x020fe42c,(int)acStack_417,0x200);
              if (iVar14 == 0) {
                FUN_020d1b58((int)param_1,1,0x020fe3d0);
                FUN_020cb778((int)param_1,3,1);
                return 3;
              }
              iVar14 = FUN_02005898((int)acStack_417);
            }
            else {
              iVar14 = 0;
              *(int *)(iVar4 + 0x000005b8) = iVar6;
            }
            piVar8 = (int *)FUN_020c7bcc(8);
            if (piVar8 == (int *)0x0) {
              FUN_020d1b74((int)param_1,0x020fe0bc);
              return 1;
            }
            *piVar8 = iVar6;
            piVar8[1] = iVar14;
            callback_pair.a = iVar10;
            callback_pair.b = iVar5;
            iVar5 = FUN_020cb81c((char **)param_1,callback_pair,(int)piVar8,
                                   (struct Node_cb81c *)param_2,0);
            if (iVar5 != 0) {
              return iVar5;
            }
          }
        }
        else if (iVar5 == 6) {
          iVar10 = *(int *)(param_2 + 0xc);
          iVar5 = *(int *)(param_2 + 0x10);
          if (iVar10 != 0) {
            iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                 (int)acStack_417);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_02003e24((int)auStack_217,0x020fe434);
            if (iVar6 != 0) {
              FUN_020d1b58((int)param_1,1,0x020fe3d0);
              FUN_020cb778((int)param_1,3,1);
              return 3;
            }
            iVar6 = FUN_02005898((int)acStack_417);
            if (iVar6 != 0) {
              *(int *)(iVar4 + 0x000005b8) = iVar6;
            }
            iVar14 = FUN_020d191c(piVar13[2],0x020fe42c,(int)acStack_417,0x200);
            if (iVar14 == 0) {
              if (iVar6 == 0) {
                FUN_020d1b58((int)param_1,1,0x020fe3d0);
                FUN_020cb778((int)param_1,3,1);
                return 3;
              }
              iVar14 = 0;
            }
            else {
              iVar14 = FUN_02005898((int)acStack_417);
            }
            piVar8 = (int *)FUN_020c7bcc(8);
            if (piVar8 == (int *)0x0) {
              FUN_020d1b74((int)param_1,0x020fe0bc);
              return 1;
            }
            *piVar8 = iVar6;
            piVar8[1] = iVar14;
            callback_pair.a = iVar10;
            callback_pair.b = iVar5;
            iVar5 = FUN_020cb81c((char **)param_1,callback_pair,(int)piVar8,
                                   (struct Node_cb81c *)param_2,0);
            if (iVar5 != 0) {
              return iVar5;
            }
          }
        }
        else if (iVar5 == 7) {
          iVar10 = *(int *)(param_2 + 0xc);
          iVar5 = *(int *)(param_2 + 0x10);
          if (iVar10 != 0) {
            puVar7 = (undefined4 *)FUN_020c7bcc(0xc);
            if (puVar7 == (undefined4 *)0x0) {
              FUN_020d1b74((int)param_1,0x020fe0bc);
              return 1;
            }
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                 (int)acStack_417);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_02003e24((int)auStack_217,0x020fe438);
            if (iVar6 != 0) {
              FUN_020d1b58((int)param_1,1,0x020fe3d0);
              FUN_020cb778((int)param_1,3,1);
              return 3;
            }
            bVar2 = false;
            do {
              iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                   (int)acStack_417);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar6 = FUN_02003e24((int)auStack_217,0x020fe440);
              if (iVar6 == 0) {
                bVar2 = true;
              }
              else {
                iVar6 = FUN_02003e24((int)auStack_217,0x020fe448);
                if (iVar6 != 0) {
                  FUN_020d1b58((int)param_1,1,0x020fe3d0);
                  FUN_020cb778((int)param_1,3,1);
                  return 3;
                }
                iVar6 = FUN_020c7bdc(puVar7[2],(puVar7[1] + 1) * 0xac);
                if (iVar6 == 0) {
                  FUN_020d1b74((int)param_1,0x020fe0bc);
                  return 1;
                }
                puVar7[2] = iVar6;
                iVar11 = puVar7[1];
                iVar14 = iVar6 + iVar11 * 0xac;
                FUN_02001540(iVar14,0,0xac);
                puVar7[1] = puVar7[1] + 1;
                iVar9 = FUN_02005898((int)acStack_417);
                *(int *)(iVar6 + iVar11 * 0xac) = iVar9;
                bVar1 = false;
                do {
                  uVar3 = uStack_45c;
                  iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                       (int)acStack_417);
                  if (iVar6 != 0) {
                    return iVar6;
                  }
                  iVar6 = FUN_02003e24((int)auStack_217,0x020fe39c);
                  if (iVar6 == 0) {
                    FUN_020d183c(iVar14 + 4,(int)acStack_417,0x1f);
                  }
                  else {
                    iVar6 = FUN_02003e24((int)auStack_217,0x020fe3a4);
                    if (iVar6 == 0) {
                      FUN_020d183c(iVar14 + 0x23,(int)acStack_417,0x15);
                    }
                    else {
                      iVar6 = FUN_02003e24((int)auStack_217,0x020fe44c);
                      if (iVar6 == 0) {
                        FUN_020d183c(iVar14 + 0x38,(int)acStack_417,0x1f);
                      }
                      else {
                        iVar6 = FUN_02003e24((int)auStack_217,0x020fe454);
                        if (iVar6 == 0) {
                          FUN_020d183c(iVar14 + 0x57,(int)acStack_417,0x1f);
                        }
                        else {
                          iVar6 = FUN_02003e24((int)auStack_217,0x020fe3c8);
                          if (iVar6 == 0) {
                            FUN_020d183c(iVar14 + 0x76,(int)acStack_417,0x33);
                          }
                          else {
                            iVar6 = FUN_02003e24((int)auStack_217,0x020fe448);
                            if ((iVar6 == 0) ||
                               (iVar6 = FUN_02003e24((int)auStack_217,0x020fe440), iVar6 == 0)) {
                              bVar1 = true;
                              uStack_45c = uVar3;
                            }
                          }
                        }
                      }
                    }
                  }
                } while (!bVar1);
              }
            } while (!bVar2);
            callback_pair.a = iVar10;
            callback_pair.b = iVar5;
            iVar5 = FUN_020cb81c((char **)param_1,callback_pair,(int)puVar7,
                                   (struct Node_cb81c *)param_2,8);
            if (iVar5 != 0) {
              return iVar5;
            }
          }
        }
        else if (iVar5 == 9) {
          iVar10 = *(int *)(param_2 + 0xc);
          iVar5 = *(int *)(param_2 + 0x10);
          if (iVar10 != 0) {
            puVar7 = (undefined4 *)FUN_020c7bcc(0xc);
            if (puVar7 == (undefined4 *)0x0) {
              FUN_020d1b74((int)param_1,0x020fe0bc);
              return 1;
            }
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                 (int)acStack_417);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_02003e24((int)auStack_217,0x020fe45c);
            if (iVar6 != 0) {
              FUN_020d1b58((int)param_1,1,0x020fe3d0);
              FUN_020cb778((int)param_1,3,1);
              return 3;
            }
            bVar2 = false;
            do {
              iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                   (int)acStack_417);
              if (iVar6 != 0) {
                return iVar6;
              }
              iVar6 = FUN_02003e24((int)auStack_217,0x020fe468);
              if (iVar6 == 0) {
                bVar2 = true;
              }
              else {
                iVar6 = FUN_02003e24((int)auStack_217,0x020fe448);
                if (iVar6 != 0) {
                  FUN_020d1b58((int)param_1,1,0x020fe3d0);
                  FUN_020cb778((int)param_1,3,1);
                  return 3;
                }
                iVar6 = FUN_020c7bdc(puVar7[2],(puVar7[1] + 1) * 0x1c);
                if (iVar6 == 0) {
                  FUN_020d1b74((int)param_1,0x020fe0bc);
                  return 1;
                }
                puVar7[2] = iVar6;
                piVar12 = (int *)(iVar6 + puVar7[1] * 0x1c);
                iVar6 = 0x1c;
                piVar8 = piVar12;
                do {
                  *(undefined1 *)piVar8 = 0;
                  piVar8 = (int *)((int)piVar8 + 1);
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                puVar7[1] = puVar7[1] + 1;
                iVar6 = FUN_02005898((int)acStack_417);
                bVar1 = false;
                *piVar12 = iVar6;
                do {
                  uVar3 = uStack_45c;
                  iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                       (int)acStack_417);
                  if (iVar6 != 0) {
                    return iVar6;
                  }
                  iVar6 = FUN_02003e24((int)auStack_217,0x020fe3a4);
                  if (iVar6 == 0) {
                    FUN_020d183c((int)(piVar12 + 1),(int)acStack_417,0x15);
                  }
                  else {
                    iVar6 = FUN_02003e24((int)auStack_217,0x020fe448);
                    if ((iVar6 == 0) ||
                       (iVar6 = FUN_02003e24((int)auStack_217,0x020fe468), iVar6 == 0)) {
                      bVar1 = true;
                      uStack_45c = uVar3;
                    }
                  }
                } while (!bVar1);
              }
            } while (!bVar2);
            callback_pair.a = iVar10;
            callback_pair.b = iVar5;
            iVar5 = FUN_020cb81c((char **)param_1,callback_pair,(int)puVar7,
                                   (struct Node_cb81c *)param_2,0xd);
            if (iVar5 != 0) {
              return iVar5;
            }
          }
        }
        else if (iVar5 == 8) {
          iVar10 = *(int *)(param_2 + 0xc);
          iVar5 = *(int *)(param_2 + 0x10);
          if (iVar10 != 0) {
            iStack_51c = 0;
            puVar7 = (undefined4 *)FUN_020c7bcc(0xc);
            if (puVar7 == (undefined4 *)0x0) {
              FUN_020d1b74((int)param_1,0x020fe0bc);
              return 1;
            }
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            iVar6 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                 (int)acStack_417);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar6 = FUN_02003e24((int)auStack_217,0x020fe470);
            if (iVar6 != 0) {
              FUN_020d1b58((int)param_1,1,0x020fe3d0);
              FUN_020cb778((int)param_1,3,1);
              return 3;
            }
            iVar6 = FUN_02005898((int)acStack_417);
            puVar7[1] = iVar6;
            iVar6 = FUN_020c7bcc((int)((uint)iVar6 << 2));
            puVar7[2] = iVar6;
            if (iVar6 == 0) {
              FUN_020d1b74((int)param_1,0x020fe0bc);
              return 1;
            }
            iVar6 = 0;
            bVar2 = false;
            do {
              iVar14 = FUN_020d1a30((int)param_1,piVar13[2],(int)&uStack_45c,(int)auStack_217,
                                    (int)acStack_417);
              if (iVar14 != 0) {
                return iVar14;
              }
              iVar14 = FUN_02003e24((int)auStack_217,0x020fe39c);
              if (iVar14 == 0) {
                iVar14 = FUN_020c7bcc(0x15);
                *(int *)(puVar7[2] + iVar6) = iVar14;
                if (*(int *)(puVar7[2] + iVar6) == 0) {
                  FUN_020d1b74((int)param_1,0x020fe0bc);
                  return 1;
                }
                FUN_020d183c(*(int *)(puVar7[2] + iVar6),(int)acStack_417,0x15);
                iVar6 = iVar6 + 4;
                iStack_51c = iStack_51c + 1;
              }
              else {
                iVar14 = FUN_02003e24((int)auStack_217,0x020fe474);
                if (iVar14 != 0) {
                  FUN_020d1b58((int)param_1,1,0x020fe3d0);
                  FUN_020cb778((int)param_1,3,1);
                  return 3;
                }
                if (iStack_51c != puVar7[1]) {
                  FUN_02000edc(0x020fe47c,0x020fe178,0x020fe03c,0x000005c7);
                }
                puVar7[1] = iStack_51c;
                bVar2 = true;
              }
            } while (!bVar2);
            callback_pair.a = iVar10;
            callback_pair.b = iVar5;
            iVar5 = FUN_020cb81c((char **)param_1,callback_pair,(int)puVar7,
                                   (struct Node_cb81c *)param_2,9);
            if (iVar5 != 0) {
              return iVar5;
            }
          }
        }
        else {
          FUN_02000edc(0x020fe344,0x020fe178,0x020fe03c,0x000005dc);
        }
        piVar13[0x51] = 1;
        bVar2 = false;
      }
    }
    if (!bVar2) {
      return 0;
    }
    FUN_020c7864(10);
  } while( true );
}

