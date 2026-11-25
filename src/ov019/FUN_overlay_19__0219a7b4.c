// FUN_overlay_19__0219a7b4 @ 0x0219a7b4 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219a7b4 @ 0x0219a7b4 (code 0x46, pool extent 0x46, thumb)
// check: vers=2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Acquire child handle and copy saved vector or mark failure.
 * Field identities remain provisional.
 */
typedef struct {int v[3];} Vec;
extern int FUN_02074e9c(void *,int,int,int);
extern char *FUN_02075040(void *,int);
void FUN_overlay_19__0219a7b4(int *p,void *owner) {char *c;if(p[12]==-1)p[12]=FUN_02074e9c(owner,1,0,0);c=FUN_02075040(owner,p[12]);if(!c){p[12]=-1;p[7]=1;}else *(Vec *)(c+92)=*(Vec *)(p+3);}
