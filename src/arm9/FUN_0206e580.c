// FUN_0206e580 @ 0x0206e580 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206e580 @ 0x0206e580
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install cleanup table, call two cleanup helpers.
 * Evidence: scratch/coverage-root/batch6/0206e580.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0206e670(void *),FUN_0206e6f4(void *),FUN_020ba8ac(void *);
void *FUN_0206e580(unsigned int *self) { self[0]=0x020f9818;FUN_0206e670(self);FUN_0206e6f4(self);return self; }
