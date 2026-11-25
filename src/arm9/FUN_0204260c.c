// FUN_0204260c @ 0x0204260c (0x5a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_0204260c @ 0x0204260c (inventory code 0x5a, thumb)
// check: 2.0/sp2p3 target=0x5a candidate=0x5a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 40.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b40/0204260c.txt.
 */
typedef struct{unsigned int w[12];} Matrix43;typedef struct{unsigned int w[9];} Matrix33;
int FUN_0204260c(char *s,unsigned int index,Matrix43 *a,Matrix33 *b){if(index<*(unsigned char *)(s+229)){Matrix43 *first=*(Matrix43 **)(s+244);if(first&&*(void **)(s+248)){if(a)*a=first[index];if(b)*b=(*(Matrix33 **)(s+248))[index];return 1;}}return 0;}
