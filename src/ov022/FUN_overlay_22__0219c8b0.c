// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_overlay_22__0219c8b0 @ 0x0219c8b0 (code 0x3e, full extent 0x50, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Nullable game-object factory with
 * static descriptor initialization or parent slot attachment.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch391.md.
 */
extern char G_021A13F8[]; extern char G_021A140C[]; extern char G_021A1788[];
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_22__0219c940(void *,void *,void *,void *);
void * FUN_overlay_22__0219c8b0(void *owner,void *data) { void *p;int flags=*(int *)G_021A1788;if(!(flags&1)){((int *)G_021A13F8)[5]=0;((int *)G_021A13F8)[6]=3;((int *)G_021A13F8)[7]=0x021a0e40;((int *)G_021A13F8)[8]=0;*(int *)G_021A1788=flags|1;}p=FUN_020ba894(228);if(p)p=FUN_overlay_22__0219c940(p,owner,data,(void *)G_021A140C);return p; }
