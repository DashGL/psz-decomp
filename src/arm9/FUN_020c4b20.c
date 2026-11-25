// FUN_020c4b20 @ 0x020c4b20 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c4b20 @ 0x020c4b20
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query optional global manager, returning zero if absent.
 * Evidence: scratch/coverage-root/batch5/020c4b20.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int FUN_020c4b38(void *);
unsigned int FUN_020c4b20(void) { void *manager=*(void **)0x0211ceec;if(manager)return FUN_020c4b38(manager);return 0; }
