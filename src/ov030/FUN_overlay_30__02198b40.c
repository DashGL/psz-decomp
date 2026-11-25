// FUN_overlay_30__02198b40 @ 0x02198b40 (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_30__02198b40 @ 0x02198b40 (code 0x56, pool extent 0x56, thumb)
// check: vers=2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Track the target through repeated animation cycles and advance after the counter expires.
 * Field identities remain provisional.
 */
typedef struct{int x,y,z;}Vec;
extern int FUN_overlay_30__02199454(void *,Vec *);extern void FUN_overlay_30__0219906c(void *,Vec *,unsigned int,unsigned int);
extern int FUN_02040d2c(void *,int);extern void FUN_02037924(void *);extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_30__02198b40(unsigned char *self){unsigned char *state=*(unsigned char **)(self+8);void *owner=*(void **)(self+4);Vec target;if(FUN_overlay_30__02199454(state,&target)==1)FUN_overlay_30__0219906c(owner,&target,768,0);if(FUN_02040d2c(owner,0)){if(--*(int *)(self+12)==0){*(int *)(state+72)=1;FUN_02037924(state);}else FUN_02040c0c(owner,0,1,4096,0);}}
