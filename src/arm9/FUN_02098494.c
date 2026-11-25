// FUN_02098494 @ 0x02098494 (0xb6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_02098494 @ 0x02098494 (inventory code 0xb6, thumb)
// check: 2.0/sp2p3 target=0xb6 candidate=0xb6 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set the appropriate actor category counter for an event.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098494.txt.
 */
extern int FUN_020b7b90(void *),FUN_020b7ba8(void *),FUN_020b7bbc(void *),FUN_020b7bd0(void *),FUN_020b7bf8(void *);extern void FUN_0209c734(void *,int,int,int);void FUN_02098494(char *s,void *actor,int event){if(event==1){if(FUN_020b7b90(actor))return;if(FUN_020b7ba8(actor)){FUN_0209c734(s+120,-1,2,5);return;}if(FUN_020b7bbc(actor)){FUN_0209c734(s+120,-1,1,5);return;}if(FUN_020b7bd0(actor)){FUN_0209c734(s+120,-1,5,5);return;}if(FUN_020b7bf8(actor)){FUN_0209c734(s+120,-1,4,5);return;}FUN_0209c734(s+120,-1,0,5);}else if(event==2&&FUN_020b7b90(actor))FUN_0209c734(s+120,-1,3,5);}
