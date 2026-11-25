// FUN_overlay_20__0219b9f4 @ 0x0219b9f4 (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219b9f4 @ 0x0219b9f4 (code 0x88, pool extent 0x8c, thumb)
// check: vers=2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Choose mirrored starting position and heading, set entity flags, and start animation eighteen.
 * Field identities remain provisional.
 */
typedef struct{int x,y,z;}Vec;
extern void FUN_overlay_20__02199030(void *,int);
extern void FUN_overlay_20__02199010(void *,int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_20__0219b9f4(unsigned char *self){unsigned char *data=*(unsigned char **)(self+8);unsigned char *cfg=data+48;unsigned char *owner=*(unsigned char **)(self+4);unsigned short heading;
if(*(signed char *)(cfg+28)){*(Vec *)(owner+56)=*(Vec *)0x0219fbc0;heading=32768;}else{Vec p=*(Vec *)0x0219fbc0;p.z=-p.z;*(Vec *)(owner+56)=p;heading=0;}
*(unsigned short *)(owner+68)=heading;*(int *)(self+16)=*(int *)(cfg+4);
FUN_overlay_20__02199030(owner,1);FUN_overlay_20__02199010(owner,1);FUN_02040c0c(owner,0,18,5120,0);*(int *)(self+12)=2;*(int *)(data+144)=1;}
