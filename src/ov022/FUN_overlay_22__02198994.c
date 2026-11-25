// FUN_overlay_22__02198994 @ 0x02198994 (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__02198994 @ 0x02198994 (code 0x56, pool extent 0x56, thumb)
// check: vers=2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Recover horizontal component position, clamp it, synchronize transform and start animation.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vec;
extern int FUN_overlay_22__0219a9a8(void *,int,Vec *,unsigned short *);extern int FUN_overlay_22__0219a278(void *,Vec *);extern void FUN_overlay_22__0219aa30(void *,const Vec *,unsigned short,unsigned short,unsigned short);extern void FUN_overlay_22__0219a0f4(void *,int);
void FUN_overlay_22__02198994(unsigned char *self,int animation){Vec position=*(Vec *)(self+16);unsigned short angle=0;FUN_overlay_22__0219a9a8(self,0,&position,&angle);*(int *)(self+16)=position.x;*(int *)(self+24)=position.z;FUN_overlay_22__0219a278(self,(Vec *)(self+16));FUN_overlay_22__0219aa30(self,(Vec *)(self+16),*(unsigned short *)(self+40),*(unsigned short *)(self+42),*(unsigned short *)(self+44));FUN_overlay_22__0219a0f4(self,animation);}
