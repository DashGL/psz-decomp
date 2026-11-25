// FUN_0209cbb8 @ 0x0209cbb8 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0209cbb8 @ 0x0209cbb8 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read bounded text from singleton with adjusted category and index.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209cbb8.txt.
 */
extern int FUN_0209e238(void *,void *,int,int,int); int FUN_0209cbb8(void *out,int category,int index) { void *p=*(void **)0x0211a620; if(p) return FUN_0209e238(p,out,21,category+88,index-1); return 0; }
