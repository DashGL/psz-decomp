// FUN_020a416c @ 0x020a416c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020a416c @ 0x020a416c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy three-word position locally and invoke helper with constants three and nine.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a416c.txt.
 */
typedef struct { unsigned int a,b,c; } Triple; extern void FUN_02033658(int,int,void *); void FUN_020a416c(char *self) { Triple value=*(Triple *)(self+28); FUN_02033658(3,9,&value); }
