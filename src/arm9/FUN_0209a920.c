// FUN_0209a920 @ 0x0209a920 (0x9c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_0209a920 @ 0x0209a920 (inventory code 0x9c, thumb)
// check: 2.0/sp2p3 target=0x9c candidate=0x9c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve loaded resources and activate pending configuration.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a920.txt.
 */
extern void *FUN_020bc508(void *,int),*FUN_020ba440(void *);extern void FUN_0209a9bc(void),FUN_0209aa0c(void *),FUN_0209ad54(void *),FUN_0209b0b8(void *);void FUN_0209a920(char *s){if((*(int **)(s+160))[1]==2){*(void **)(s+164)=FUN_020ba440(FUN_020bc508(*(void **)(s+160),0));*(void **)(s+168)=FUN_020ba440(FUN_020bc508(*(void **)(s+160),1));*(void **)(s+172)=FUN_020ba440(FUN_020bc508(*(void **)(s+160),2));if(*(void **)(s+164) && *(void **)(s+168)){if((int)(unsigned char)s[4]%7==0)FUN_0209a9bc();FUN_0209aa0c(s);}if(*(void **)(s+172)){s[4]=((int)(unsigned char)s[4]%31)>>3;FUN_0209ad54(s);}FUN_0209b0b8(s);*(int *)s=3;}}
