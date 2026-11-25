// FUN_02072f94 @ 0x02072f94 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072f94 @ 0x02072f94 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release optional first field, clear count and sixteen pointer/byte slots.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072f94.txt.
 */
extern void FUN_020ba8b4(void *); void FUN_02072f94(char *self) { int i; if(*(void **)self) { FUN_020ba8b4(*(void **)self); *(void **)self=0; } *(unsigned int *)(self+4)=0; for(i=0;i<16;i++) { ((unsigned int *)(self+8))[i]=0; self[i+72]=0; } }
