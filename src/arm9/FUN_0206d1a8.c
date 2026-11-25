// FUN_0206d1a8 @ 0x0206d1a8 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206d1a8 @ 0x0206d1a8
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate first five-word record, then compare fields in reverse order.
 * Evidence: scratch/coverage-root/batch13/0206d1a8.txt.
 */
extern int FUN_0206d1fc(const int *);
int FUN_0206d1a8(const int *a,const int *b){if(!FUN_0206d1fc(a))return 0;if(b[4]==a[4] && b[3]==a[3] && b[2]==a[2] && b[1]==a[1] && b[0]==a[0])return 1;return 0;}
