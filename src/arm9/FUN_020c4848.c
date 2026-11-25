// FUN_020c4848 @ 0x020c4848 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c4848 @ 0x020c4848
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return true for existing manager in state 3 or 0; missing manager is false.
 * Evidence: scratch/coverage-root/batch5/020c4848.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
int FUN_020c4848(void) { unsigned int *manager=*(unsigned int **)0x0211ceec;if(manager) { if(manager[2]==3)return 1;if(manager[2]==0)return 1;return 0; }return 0; }
