// FUN_overlay_22__0219a30c @ 0x0219a30c (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a30c @ 0x0219a30c (code 0x58, pool extent 0x5c, thumb)
// check: vers=2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Turn toward a selected actor position using the established angular adjustment helper.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vec;extern unsigned char *FUN_overlay_22__0219a638(int,int);extern void FUN_020345f0(Vec *,const void *);extern void FUN_020b3b30(Vec *,const Vec *);extern unsigned short FUN_0205c9e4(int,int);extern unsigned short FUN_overlay_22__0219a3c4(unsigned short,unsigned short,unsigned int);void FUN_overlay_22__0219a30c(unsigned char *p,int index,unsigned int step) {Vec position=*(const Vec *)0x020fc958;unsigned char *target=FUN_overlay_22__0219a638(index,0);if(target){Vec v;FUN_020345f0(&v,target+180);position=v;}FUN_020b3b30(&position,(const Vec *)(p+16));*(unsigned short *)(p+42)=FUN_overlay_22__0219a3c4(*(unsigned short *)(p+42),FUN_0205c9e4(position.x,position.z),step);}
