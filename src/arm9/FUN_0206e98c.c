// FUN_0206e98c @ 0x0206e98c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206e98c @ 0x0206e98c
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy eight-byte global field at +19c to caller output when manager exists.
 * Evidence: scratch/coverage-root/batch6/0206e98c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0206e88c(void *,const void *);
int FUN_0206e98c(void *out) { char *manager=*(char **)0x0211a1f4;if(manager) { FUN_0206e88c(out,manager+412);return 1; }return 0; }
