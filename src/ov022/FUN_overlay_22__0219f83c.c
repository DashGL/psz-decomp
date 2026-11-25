// FUN_overlay_22__0219f83c @ 0x0219f83c (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f83c @ 0x0219f83c (code 0x46, pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Construct registered resource object, initialize four invalid handles, copy descriptor and position.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vec;extern void *FUN_overlay_22__0219f700(void *);extern void *FUN_overlay_22__0219f808(void *);extern void *FUN_overlay_22__0219f888(void *,const void *);void *FUN_overlay_22__0219f83c(unsigned char *p,const unsigned char *descriptor) {FUN_overlay_22__0219f700(p);*(unsigned int *)p=0x021a16d0;FUN_overlay_22__0219f808(p+24);*(int *)(p+64)=-1;*(int *)(p+68)=-1;*(int *)(p+72)=-1;*(int *)(p+76)=-1;*(int *)(p+80)=0;*(int *)(p+84)=0;*(int *)(p+88)=0;FUN_overlay_22__0219f888(p+24,descriptor);*(Vec *)(p+8)=*(const Vec *)(descriptor+8);return p;}
