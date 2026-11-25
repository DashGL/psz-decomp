// FUN_02097d5c @ 0x02097d5c (0x8a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_02097d5c @ 0x02097d5c (inventory code 0x8a, thumb)
// check: 2.0/sp2p3 target=0x8a candidate=0x8a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release selected action slot and optional backing allocation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097d5c.txt.
 */
extern void FUN_02098e00(void *),FUN_02096d84(void *),FUN_020ba8ac(void *),FUN_02099480(void *);void FUN_02097d5c(char *s,int *descriptor,int release){void *p;if(descriptor[1]>=0 && descriptor[1]<5){p=*(void **)(s+4*descriptor[1]);if(p){if(p){FUN_02098e00(p);FUN_020ba8ac(p);}*(void **)(s+4*descriptor[1])=0;}p=*(void **)(s+20+4*descriptor[1]);if(p){if(p){FUN_02096d84(p);FUN_020ba8ac(p);}*(void **)(s+20+4*descriptor[1])=0;}*(int *)(s+40+8*descriptor[1])=-1;*(short *)(s+44+8*descriptor[1])=0;if(release && *(void **)(s+80+4*descriptor[1])){FUN_02099480(*(void **)(s+80+4*descriptor[1]));*(void **)(s+80+4*descriptor[1])=0;}}}
