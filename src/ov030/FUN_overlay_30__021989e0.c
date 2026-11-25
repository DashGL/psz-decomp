// FUN_overlay_30__021989e0 @ 0x021989e0 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_30__021989e0 @ 0x021989e0 (code 0x3c, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Track the registered target while waiting for animation completion, then advance the child state.
 * Field identities remain provisional.
 */
typedef struct{int x,y,z;}Vec;
extern int FUN_overlay_30__02199454(void *,Vec *);
extern void FUN_overlay_30__0219906c(void *,Vec *,unsigned int,unsigned int);
extern int FUN_02040d2c(void *,int);extern void FUN_02037924(void *);
void FUN_overlay_30__021989e0(unsigned char *self){unsigned char *state=*(unsigned char **)(self+8);void *owner=*(void **)(self+4);Vec target;if(FUN_overlay_30__02199454(state,&target)==1)FUN_overlay_30__0219906c(owner,&target,384,0);if(FUN_02040d2c(owner,0)){*(int *)(state+72)=0;FUN_02037924(state);}}
