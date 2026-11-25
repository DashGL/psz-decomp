// FUN_020ae9c8 @ 0x020ae9c8 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020ae9c8 @ 0x020ae9c8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy three-word source into receiver +b8.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ae9c8.txt.
 */
typedef struct { unsigned int a,b,c; } Triple; void FUN_020ae9c8(char *self,Triple *source) { *(Triple *)(self+184)=*source; }
