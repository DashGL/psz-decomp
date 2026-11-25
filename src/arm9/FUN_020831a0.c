// FUN_020831a0 @ 0x020831a0 (0xa2, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_020831a0 @ 0x020831a0 (inventory code 0xa2, thumb)
// check: 2.0/sp2p3 target=0xa2 candidate=0xa2 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select explicit generation descriptors or use mode fallback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020831a0.txt.
 */
extern void FUN_0206d188(void *,int,int,int,int,int),FUN_02082be4(void *,void *,int),FUN_02082c78(void *,int);void FUN_020831a0(void *s,int mode,int value){int a[5],b[5],c[5];if(mode==4){FUN_0206d188(a,8,4,5,0,0);FUN_02082be4(s,a,-1);}else if(mode==11){FUN_0206d188(b,8,11,4,0,1);FUN_02082be4(s,b,-1);}else if(value%10==0){if(value>100)value=100;else if(value<0)value=0;FUN_0206d188(c,8,1,0,1,value/10-1);FUN_02082be4(s,c,-1);}else FUN_02082c78(s,mode);}
