// FUN_020be758 @ 0x020be758 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020be758 @ 0x020be758 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compare nested shapes from second and third inputs with mode zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be758.txt.
 */
extern int FUN_020bf938(void *,void *,int); int FUN_020be758(void *unused,void **a,void **b) { return FUN_020bf938((char *)a[3]+32,(char *)b[3]+32,0); }
