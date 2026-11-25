// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_19__0219ccec @ 0x0219ccec (code 0x3c, pool extent 0x3c, thumb)
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Follow the selected target until unavailable or the current animation finishes.
 * Field identities remain provisional.
 */
typedef struct{int x,y,z;}Vec;
extern int FUN_020370b8(void *,int,Vec *);extern void FUN_overlay_19__02198814(void *,Vec *);extern int FUN_02041474(void *,int);extern void FUN_02037924(void *);
void FUN_overlay_19__0219ccec(unsigned char *self){void *owner=*(void **)(self+4);unsigned char *state=*(unsigned char **)(self+8);Vec delta;if(!FUN_020370b8(owner,*(int *)(state+104),&delta))FUN_02037924(state);else{FUN_overlay_19__02198814(owner,&delta);if(FUN_02041474(owner,0))FUN_02037924(state);}}
