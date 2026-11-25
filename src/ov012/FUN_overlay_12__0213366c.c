// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_overlay_12__0213366c @ 0x0213366c
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Mark selected slot and shared state only for two valid indices.
 * Field identities remain provisional.
 */
void FUN_overlay_12__0213366c(unsigned int *p,int index) {if(index>=0 && index<2){(p+index)[28]=3;p[32]=15;}}
