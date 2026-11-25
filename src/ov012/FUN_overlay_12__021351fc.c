// FUN_overlay_12__021351fc @ 0x021351fc (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__021351fc @ 0x021351fc (code 0x5c, pool extent 0x74, thumb)
// check: vers=2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Draw state-mapped descriptor at shared coordinates.
 * Field identities remain provisional.
 */
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_0208971c(void *,void *);
extern int FUN_overlay_12__02131ad0(int);
extern void FUN_020c32b4(void *,int);
void FUN_overlay_12__021351fc(unsigned int state) {struct D {unsigned short a,b,c,pad;int x,y;} d;int index;switch(state){case 2:index=0;break;case 3:index=1;break;case 4:index=2;break;case 5:index=3;break;case 6:index=4;break;case 7:index=5;break;case 8:index=6;break;default:return;}FUN_02071d0c(&d);FUN_02090b44(&d);d.a=index;FUN_0208971c(&d.x,(void *)0x0213bcac);FUN_020c32b4(&d,FUN_overlay_12__02131ad0(6));}
