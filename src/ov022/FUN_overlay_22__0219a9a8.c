// FUN_overlay_22__0219a9a8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_22__0219a9a8 @ 0x0219a9a8 (code 0x84, pool extent 0x88, thumb)
// check: 2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Extract component translation and heading from its transform matrices.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vec;typedef struct {int v[12];} Matrix43;typedef struct {int v[9];} Matrix33;
extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,Matrix43 *,Matrix33 *);extern void FUN_0200c938(void *,unsigned int);extern void FUN_0205b960(const Vec *,const Matrix43 *,Vec *);extern Vec *FUN_020345f0(Vec *,const Vec *);extern void FUN_0205b0f0(const Vec *,const Matrix33 *,Vec *);extern unsigned short FUN_0205c9e4(int,int);
int FUN_overlay_22__0219a9a8(unsigned char *self,int index,Vec *out,unsigned short *angle){Matrix43 m;Matrix33 r;Vec position,forward,b,a;void *component=FUN_02036c88(*(void **)(self+4),**(int **)(self+12));if(component&&FUN_0204260c(component,index,&m,&r)==1){FUN_0200c938(&position,12);FUN_0205b960(&position,&m,&position);FUN_020345f0(&a,&position);*out=a;forward=*(Vec *)0x021a0b30;FUN_0205b0f0(&forward,&r,&forward);FUN_020345f0(&b,&forward);*angle=(unsigned short)(16384-FUN_0205c9e4(b.z,b.x));return 1;}return 0;}
