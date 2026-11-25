// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x32, exact bytes and relocation targets.
// FUN_overlay_22__0219f628 @ 0x0219f628 (code 0x32, pool extent 0x32, thumb)
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Insert nonnull child into first free slot and allocate generation handle.
 * Field identities remain provisional.
 */
unsigned int FUN_overlay_22__0219f628(unsigned int *p,void *child) {int i;if(!child)return ~0U;for(i=0;i<20;i++){if(!p[i]){unsigned int handle;p[i]=(unsigned int)child;handle=(p[20]<<16)+i;p[20]++;return handle;}}return ~0U;}
