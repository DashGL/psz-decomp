// FUN_overlay_22__0219a94c @ 0x0219a94c (0x5a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a94c @ 0x0219a94c (code 0x5a, pool extent 0x5a, thumb)
// check: vers=2.0/sp2p3 target=0x5a candidate=0x5a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Transform a local offset through a selected component matrix when available.
 * Field identities remain provisional.
 */
typedef struct{int x,y,z;}Vec;
extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern void FUN_0205b960(Vec *,void *,Vec *);extern void *FUN_020345f0(Vec *,const Vec *);
int FUN_overlay_22__0219a94c(unsigned char *self,int index,Vec *out,Vec *offset){int matrix[12],rotation[9];Vec local,copy;void *component=FUN_02036c88(*(void **)(self+4),**(int **)(self+12));if(component&&FUN_0204260c(component,index,matrix,rotation)==1){local.x=offset->x;local.y=offset->y;local.z=offset->z;FUN_0205b960(&local,matrix,&local);FUN_020345f0(&copy,&local);*out=copy;return 1;}return 0;}
