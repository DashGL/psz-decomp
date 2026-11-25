// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// FUN_overlay_4__0211ee2c @ 0x0211ee2c, verified extent 0x58.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0211f0e9[];
extern unsigned char DAT_0211f109[];
extern unsigned char DAT_0212e6b4[];
// FUN_overlay_4__0211ee2c @ 0x0211ee2c (code 0x4c, pool extent 0x58, thumb)
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize the UI receiver, construct three embedded elements, create its display, and enable shared UI state.
 * Field identities remain provisional.
 */
typedef void *(*Lifecycle)(void *);extern void FUN_0200c394(void *,int,int,Lifecycle,Lifecycle);extern void FUN_overlay_4__0211f02c(void *);extern void *FUN_02077930(void);extern void FUN_02077a84(void *);void *FUN_overlay_4__0211ee2c(unsigned char *self,unsigned int owner){*(unsigned int *)self=((unsigned int)DAT_0212e6b4 + 0u);FUN_0200c394(self+4,3,44,(Lifecycle)((unsigned int)DAT_0211f0e9 + 0u),(Lifecycle)((unsigned int)DAT_0211f109 + 0u));*(int *)(self+136)=0;*(unsigned int *)(self+140)=owner;*(int *)(self+144)=0;*(int *)(self+148)=0;*(int *)(self+152)=0;FUN_overlay_4__0211f02c(self);FUN_02077a84(FUN_02077930());return self;}
