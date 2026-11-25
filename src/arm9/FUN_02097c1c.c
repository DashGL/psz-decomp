// FUN_02097c1c @ 0x02097c1c (0x5a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_02097c1c @ 0x02097c1c (inventory code 0x5a, thumb)
// check: 2.0/sp2p3 target=0x5a candidate=0x5a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy five paired owned objects and release shared handle.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097c1c.txt.
 */
extern void FUN_02098e00(void *),FUN_02096d84(void *),FUN_020ba8ac(void *),FUN_02099480(void *),FUN_0209ec8c(void *);void *FUN_02097c1c(char *s){int i;for(i=0;i<5;i++){void **slot=(void **)s+i;void *p=slot[0];if(p){if(p){FUN_02098e00(p);FUN_020ba8ac(p);}slot[0]=0;}p=slot[5];if(p){if(p){FUN_02096d84(p);FUN_020ba8ac(p);}slot[5]=0;}FUN_02099480(slot[20]);}if(*(void **)(s+296))FUN_0209ec8c(s+296);return s;}
