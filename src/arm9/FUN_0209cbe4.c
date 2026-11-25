// FUN_0209cbe4 @ 0x0209cbe4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_0209cbe4 @ 0x0209cbe4 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read text for positive one-based index when singleton exists.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209cbe4.txt.
 */
extern int FUN_0209e238(void *,void *,int,int,int); int FUN_0209cbe4(void *out,int index) { int slot=index-1; if(slot>=0) { void *p=*(void **)0x0211a620; if(p) return FUN_0209e238(p,out,21,88,slot); } return 0; }
