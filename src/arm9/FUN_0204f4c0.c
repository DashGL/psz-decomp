// FUN_0204f4c0 @ 0x0204f4c0 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_0204f4c0 @ 0x0204f4c0 (thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, ABI correction 2026-11-05.
 * Preserve descriptor and category across global manager query, return lookup.
 * Original incoming receiver is ignored by the concrete global accessor. */
extern void *FUN_020b3d04(void),*FUN_020b435c(void *,void *,int);
void *FUN_0204f4c0(void *unused,void *descriptor,int category){return FUN_020b435c(FUN_020b3d04(),descriptor,category);}
