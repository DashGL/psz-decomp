// FUN_0209e9cc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0209e9cc @ 0x0209e9cc (inventory code 0xfe, thumb)
// check: 2.0/sp2p3 target=0x10c candidate=0x10c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch interface events according to the selected resource category.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e9cc.txt.
 */
extern int UNK_020fb624[],UNK_020fb604[];extern void *UNK_02108c84;extern void *FUN_0209f170(void);extern void FUN_0209f3d0(void *,int),FUN_0209f404(void *,int),FUN_02034534(void *,int,int);void FUN_0209e9cc(char *s,int event){int kind,value;if(event==0){kind=*(signed char *)(*(char **)(s+288)+32);if(kind<5){value=UNK_020fb624[kind];if(value==UNK_020fb604[1]||value==UNK_020fb604[4]){FUN_0209f3d0(FUN_0209f170(),1);*(int *)(s+324)=0;FUN_0209f404(FUN_0209f170(),*(int *)(s+324));}}}else if(event==1){kind=*(signed char *)(*(char **)(s+288)+32);if(kind<5){value=UNK_020fb624[kind];if(value==UNK_020fb604[1]||value==UNK_020fb604[4])FUN_0209f3d0(FUN_0209f170(),0);else if(UNK_02108c84)FUN_02034534(UNK_02108c84,1,4096);}}else if(event==2){kind=*(signed char *)(*(char **)(s+288)+32);if(kind<5){value=UNK_020fb624[kind];if(value!=UNK_020fb604[1]&&value!=UNK_020fb604[4])*(int *)(s+420)|=1;}}else if(event==3){kind=*(signed char *)(*(char **)(s+288)+32);if(kind<5){value=UNK_020fb624[kind];if(value!=UNK_020fb604[1]&&value!=UNK_020fb604[4]&&UNK_02108c84)FUN_02034534(UNK_02108c84,1,4096);}}}
