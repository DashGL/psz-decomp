// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_overlay_12__0212079c @ 0x0212079c, verified extent 0x28.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020c2b51[];
extern unsigned char DAT_020c2b69[];
// FUN_overlay_12__0212079c @ 0x0212079c (code 0x20, pool extent 0x28, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Construct the two resource holders and initialize their display layers.
 * Field identities remain provisional.
 */
typedef void *(*Lifecycle)(void *);extern void FUN_0200c394(void *,int,int,Lifecycle,Lifecycle);extern void FUN_overlay_12__021207e0(void *);
void *FUN_overlay_12__0212079c(void *self){FUN_0200c394(self,2,4,(Lifecycle)((unsigned int)DAT_020c2b51 + 0u),(Lifecycle)((unsigned int)DAT_020c2b69 + 0u));FUN_overlay_12__021207e0(self);return self;}
