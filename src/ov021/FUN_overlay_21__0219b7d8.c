// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_overlay_21__0219b7d8 @ 0x0219b7d8 (code 0x1c, pool extent 0x1c, thumb)
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Set option on two child-selected owner slots.
 * Field identities remain provisional.
 */
extern void FUN_02044570(void *,unsigned int,unsigned int);
void FUN_overlay_21__0219b7d8(void **p) { void *owner=p[1]; unsigned int *child=p[2]; FUN_02044570(owner,child[11],1); FUN_02044570(owner,child[12],1); }
