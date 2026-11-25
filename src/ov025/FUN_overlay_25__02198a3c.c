// FUN_overlay_25__02198a3c @ 0x02198a3c (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_25__02198a3c @ 0x02198a3c (code 0x7c, pool extent 0x7c, thumb)
// check: vers=2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Choose a facing-dependent animation for the registered target, or advance when it is unavailable.
 * Field identities remain provisional.
 */
typedef struct{int x,y,z;}Vec;extern int FUN_overlay_25__0219893c(void *,Vec *);extern unsigned short FUN_overlay_25__021984d0(void *,Vec *);extern void FUN_02037924(void *);extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_25__02198a3c(unsigned char *self){unsigned char *state=*(unsigned char **)(self+8);unsigned char *owner;Vec target,position,delta;if(!FUN_overlay_25__0219893c(state,&target)){*(int *)(state+72)=0;FUN_02037924(state);return;}owner=*(unsigned char **)(self+4);position=*(Vec *)(owner+56);delta.x=target.x-position.x;delta.y=target.y-position.y;delta.z=target.z-position.z;if(FUN_overlay_25__021984d0(owner,&delta)<6144)FUN_02040c0c(*(void **)(self+4),0,3,4096,0);else FUN_02040c0c(*(void **)(self+4),0,4,4096,0);}
