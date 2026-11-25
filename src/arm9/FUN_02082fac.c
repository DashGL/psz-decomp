// FUN_02082fac @ 0x02082fac (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02082fac @ 0x02082fac (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Bounds-checked signed lookup into 52-byte array; null base returns null.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02082fac.txt.
 */
void *FUN_02082fac(char *self,int index) { char *records=*(char **)(self+0x4ec); if(records && index>=0 && index<*(int *)(self+0x4f0)) return records+52*index; return 0; }
