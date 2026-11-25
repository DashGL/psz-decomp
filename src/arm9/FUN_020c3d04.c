// FUN_020c3d04 @ 0x020c3d04 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// FUN_020c3d04 @ 0x020c3d04
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install cleanup table, invoke cleanup helper, return original receiver.
 * Evidence: scratch/coverage-root/batch5/020c3d04.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020ba494(void *),FUN_020ba8ac(void *);
void *FUN_020c3d04(unsigned int *self) { self[0]=0x020fcb54;FUN_020ba494(self);return self; }
