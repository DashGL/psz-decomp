// FUN_02086558 @ 0x02086558 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02086558 @ 0x02086558 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return 8-byte slot at manager +260 for signed index [0,4), else null.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02086558.txt.
 */
void *FUN_02086558(int index) { char *manager=*(char **)0x0211a52c; if(manager && index>=0 && index<4) return manager+0x260+8*index; return 0; }
