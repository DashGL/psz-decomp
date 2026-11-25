// FUN_overlay_20__0219d68c @ 0x0219d68c (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219d68c @ 0x0219d68c (code 0x76, pool extent 0x7c, thumb)
// check: vers=2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize motion duration and turn toward the target or preserve current heading.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vec;extern void FUN_02040c0c(void *,int,int,int,int);extern int FUN_020866b4(int,Vec *);extern void FUN_02036348(Vec *,const Vec *,const Vec *);extern void FUN_02036368(Vec *);extern unsigned short FUN_0205cc08(int);
void FUN_overlay_20__0219d68c(unsigned char *self){unsigned char *owner=*(unsigned char **)(self+4),*params=*(unsigned char **)(self+8)+48;Vec target,delta;unsigned short angle;*(int *)(self+20)=*(int *)0x020fc988;*(int *)(self+24)=*(signed short *)(params+24)<<12;FUN_02040c0c(owner,0,5,4096,10);if(FUN_020866b4(*(int *)(params+4),&target)){FUN_02036348(&delta,&target,(Vec *)(owner+56));delta.y=0;FUN_02036368(&delta);angle=FUN_0205cc08(delta.z);if(delta.x<0)angle=(unsigned short)(65536-angle);*(unsigned short *)(self+16)=angle;}else *(unsigned short *)(self+16)=*(unsigned short *)(owner+68);*(int *)(self+12)=0;}
