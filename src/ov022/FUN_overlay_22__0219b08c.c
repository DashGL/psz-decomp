// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// FUN_overlay_22__0219b08c @ 0x0219b08c
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_021a1748[];
extern int D_021a11fc[];
extern char D_021a1250[];
/* USA ROM reconstruction, 2026-11-05. Nullable game-object factory with
 * static descriptor initialization or parent slot attachment.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch391.md.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_22__0219b0e8(void *,void *,void *,void *);
void * FUN_overlay_22__0219b08c(void *owner,void *data) { void *p;int flags=*D_021a1748;if(!(flags&1)){D_021a11fc[21]=1;D_021a11fc[22]=4;D_021a11fc[23]=0x021a0c34;D_021a11fc[24]=0;*D_021a1748=flags|1;}p=FUN_020ba894(112);if(p)p=FUN_overlay_22__0219b0e8(p,owner,data,D_021a1250);return p; }
