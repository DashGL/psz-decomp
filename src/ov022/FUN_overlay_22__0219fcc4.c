// FUN_overlay_22__0219fcc4 @ 0x0219fcc4 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219fcc4 @ 0x0219fcc4 (code 0x4a, pool extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Construct registered descriptor object with four invalid handles, five cleared words, and copied position.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vec;extern void *FUN_overlay_22__0219f700(void *);extern void *FUN_overlay_22__0219fc94(void *);extern void *FUN_overlay_22__0219fd14(void *,const void *);void *FUN_overlay_22__0219fcc4(unsigned char *p,const unsigned char *descriptor) {FUN_overlay_22__0219f700(p);*(unsigned int *)p=0x021a16b4;FUN_overlay_22__0219fc94(p+24);*(int *)(p+60)=-1;*(int *)(p+64)=-1;*(int *)(p+68)=-1;*(int *)(p+72)=-1;*(int *)(p+76)=0;*(int *)(p+80)=0;*(int *)(p+84)=0;*(int *)(p+88)=0;*(int *)(p+92)=0;FUN_overlay_22__0219fd14(p+24,descriptor);*(Vec *)(p+8)=*(const Vec *)(descriptor+8);return p;}
