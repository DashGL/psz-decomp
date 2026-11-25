// FUN_020a7014 @ 0x020a7014 (0x104, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_020a7014 @ 0x020a7014 (inventory code 0xfa, thumb)
// check: 2.0/sp2p3 target=0x104 candidate=0x104 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Handle selected menu action, copied selection state, and confirmation callback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a7014.txt.
 */
extern signed char UNK_020fc1dc[];extern void FUN_020c193c(int,int,int,int,int),FUN_020a5298(void *,void *),FUN_020a7490(void *,void (*)(void)),FUN_020a6ff0(void),FUN_020a5148(void *,int),FUN_020a73a0(void *,int),FUN_020a73e8(void *,int);extern void *FUN_020aff4c(void *,int);void FUN_020a7014(char *s){switch(*(int *)(s+328)){case 0:FUN_020c193c(0,17,0,0,-1);UNK_020fc1dc[1]=*(int *)(s+212)-7+*(int *)(*(char **)(s+252)+8);FUN_020a5298(s,FUN_020aff4c(*(void **)(s+252),UNK_020fc1dc[1]));UNK_020fc1dc[0]=*(int *)(*(char **)(s+252)+8);if(*(int *)(*(char **)(s+252)+20))FUN_020a7490(s,FUN_020a6ff0);else FUN_020a5148(s,*(int *)(s+244)==2?4:7);break;case 1:FUN_020c193c(0,17,0,0,-1);*(int *)(s+316)=2;UNK_020fc1dc[1]=*(int *)(s+212)-7+*(int *)(*(char **)(s+252)+8);FUN_020a73a0(s,1);*(int *)(s+240)=0;break;case 2:FUN_020a73e8(s,*(int *)(s+212)-7);FUN_020c193c(0,16,0,0,-1);*(int *)(s+240)=1;break;}}
