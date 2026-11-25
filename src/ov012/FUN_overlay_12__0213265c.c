// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_12__0213265c @ 0x0213265c (code 0x28, pool extent 0x30, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear display state, release matching singleton reference and destroy base.
 * Field identities remain provisional.
 */
extern void * D_0213f2dc;
extern void FUN_overlay_12__02132f94(void *);
extern void FUN_overlay_12__02133ac4(int);
extern void *FUN_overlay_12__02131dd4(void *);
void *FUN_overlay_12__0213265c(unsigned int *p) {p[0]=0x0213e898;FUN_overlay_12__02132f94(p);FUN_overlay_12__02133ac4(1);if(D_0213f2dc==p)D_0213f2dc=0;FUN_overlay_12__02131dd4(p);return p;}
