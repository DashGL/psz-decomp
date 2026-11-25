// FUN_0206e8c0 @ 0x0206e8c0 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206e8c0 @ 0x0206e8c0
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * When global manager exists, release optional embedded allocation at +194 if +198 is nonzero; return manager presence.
 * Evidence: scratch/coverage-root/batch6/0206e8c0.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0206e874(void *);
int FUN_0206e8c0(void) { char *manager=*(char **)0x0211a1f4;if(manager) { if(*(unsigned int *)(manager+408))FUN_0206e874(manager+404);return 1; }return 0; }
