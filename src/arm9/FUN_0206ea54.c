// FUN_0206ea54 @ 0x0206ea54 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206ea54 @ 0x0206ea54
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install cleanup table, clean global optional state and embedded +194, then free receiver.
 * Evidence: scratch/coverage-root/batch6/0206ea54.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0206e8c0(void),FUN_0206e874(void *),FUN_020ba8ac(void *);
void *FUN_0206ea54(char *self) { *(unsigned int *)self=0x020f9860;FUN_0206e8c0();FUN_0206e874(self+404);FUN_020ba8ac(self);return self; }
