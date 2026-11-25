// FUN_02078cb8 @ 0x02078cb8 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_02078cb8 @ 0x02078cb8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return nested global subobject pointer plus d28.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078cb8.txt.
 */
extern void *FUN_02086e3c(void); extern char *FUN_020870c4(void *);
void *FUN_02078cb8(void) { return FUN_020870c4(FUN_02086e3c())+0xd28; }
