// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_12__0213268c @ 0x0213268c (code 0x2e, pool extent 0x38, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Release shared view state, clear active receiver, destroy and free receiver.
 * Field identities remain provisional.
 */
extern void * D_0213f2dc;
extern void FUN_overlay_12__02132f94(void *);
extern void FUN_overlay_12__02133ac4(int);
extern void FUN_overlay_12__02131dd4(void *);
extern void FUN_020ba940(void *);
unsigned int *FUN_overlay_12__0213268c(unsigned int *p) {*p=0x0213e898;FUN_overlay_12__02132f94(p);FUN_overlay_12__02133ac4(1);if(D_0213f2dc==p)D_0213f2dc=0;FUN_overlay_12__02131dd4(p);FUN_020ba940(p);return p;}
