// FUN_020c49e8 @ 0x020c49e8 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020c49e8 @ 0x020c49e8
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward two inputs after optional manager, requiring nonnull second input.
 * Evidence: scratch/coverage-root/batch5/020c49e8.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int FUN_020c4a0c(void *,unsigned int,void *);
unsigned int FUN_020c49e8(unsigned int arg,void *buffer) { void *manager=*(void **)0x0211ceec;if(manager && buffer)return FUN_020c4a0c(manager,arg,buffer);return 0; }
