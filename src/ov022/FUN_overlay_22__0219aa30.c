// FUN_overlay_22__0219aa30 @ 0x0219aa30 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219aa30 @ 0x0219aa30 (code 0x3c, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Apply component position and three orientation halfwords, then mirror the fields locally.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vec;extern void FUN_02043ef0(void *,int,const Vec *,unsigned short,unsigned short,unsigned short);void FUN_overlay_22__0219aa30(unsigned char *p,const Vec *position,unsigned short x,unsigned short y,unsigned short z) {FUN_02043ef0(*(void **)(p+4),**(int **)(p+12),position,x,y,z);*(Vec *)(p+16)=*position;*(unsigned short *)(p+40)=x;*(unsigned short *)(p+42)=y;*(unsigned short *)(p+44)=z;}
