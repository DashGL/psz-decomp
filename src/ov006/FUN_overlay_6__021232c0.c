// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_overlay_6__021232c0 @ 0x021232c0 (code 0x24, pool extent 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 6 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize shared vector and object, then register its raw exit callback.
 * Field identities remain provisional.
 */
extern char G_02123430[]; extern char G_021237E0[]; extern char G_021237EC[];
extern void FUN_02035408(void *,int,int,int);
extern void *FUN_overlay_6__0211f30c(void *);
extern void FUN_0200c594(void *,unsigned int,void *);
void FUN_overlay_6__021232c0(void) {FUN_02035408((void *)G_02123430,2048,6144,0);FUN_overlay_6__0211f30c((void *)G_021237EC);FUN_0200c594((void *)G_021237EC,0x02120425,(void *)G_021237E0);}
