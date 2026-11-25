// FUN_020ab740 @ 0x020ab740 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020ab740 @ 0x020ab740 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy three-word source to receiver +20.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ab740.txt.
 */
typedef struct { unsigned int a,b,c; } Triple; void FUN_020ab740(char *self,Triple *source) { *(Triple *)(self+32)=*source; }
