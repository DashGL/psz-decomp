// FUN_0206e59c @ 0x0206e59c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206e59c @ 0x0206e59c
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install cleanup table, call two cleanup helpers, free receiver.
 * Evidence: scratch/coverage-root/batch6/0206e59c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0206e670(void *),FUN_0206e6f4(void *),FUN_020ba8ac(void *);
void *FUN_0206e59c(unsigned int *self) { self[0]=0x020f9818;FUN_0206e670(self);FUN_0206e6f4(self);FUN_020ba8ac(self);return self; }
