// FUN_020889a8 @ 0x020889a8 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020889a8 @ 0x020889a8 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch resource flag update or unregister operation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020889a8.txt.
 */
extern void *FUN_02034b78(void);extern void FUN_02035128(void *,int),FUN_0203510c(void *,int),FUN_02035144(void *,int);void FUN_020889a8(char *s,int mode){void *p;if(mode==0){p=FUN_02034b78();if(p)FUN_02035128(p,*(int *)(s+88));}else if(mode==1){p=FUN_02034b78();if(p)FUN_0203510c(p,*(int *)(s+88));}else if(mode==2){p=FUN_02034b78();if(p){FUN_02035144(p,*(int *)(s+88));*(int *)(s+88)=-1;}}}
