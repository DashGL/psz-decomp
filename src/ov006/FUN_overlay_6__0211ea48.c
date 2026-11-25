// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// FUN_overlay_6__0211ea48 @ 0x0211ea48, verified extent 0x58.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0211e641[];
extern unsigned char DAT_0211e68d[];
// FUN_overlay_6__0211ea48 @ 0x0211ea48 (code 0x4c, pool extent 0x58, thumb)
// flags: -O4,s
/* USA overlay 6 reconstruction from extracted module bytes, 2026-11-04.
 * Construct and reset nine embedded UI records and initialize the container state.
 * Field identities remain provisional.
 */
typedef void *(*Lifecycle)(void *);extern void FUN_0200c394(void *,int,int,Lifecycle,Lifecycle);extern void FUN_overlay_6__0211e690(void *);
void *FUN_overlay_6__0211ea48(unsigned char *self){int i;*(int *)self=0;*(int *)(self+4)=0;FUN_0200c394(self+8,9,288,(Lifecycle)((unsigned int)DAT_0211e641 + 0u),(Lifecycle)((unsigned int)DAT_0211e68d + 0u));*(int *)(self+2600)=0;*(int *)(self+2604)=12288;*(int *)(self+2608)=-1;for(i=0;i<9;i++)FUN_overlay_6__0211e690(self+8+288*i);return self;}
