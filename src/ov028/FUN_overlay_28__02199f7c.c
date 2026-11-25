// FUN_overlay_28__02199f7c @ 0x02199f7c (0xdc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch2.json; original draft retained for referenced provenance.
// FUN_overlay_28__02199f7c @ 0x02199f7c (full extent 0xdc, thumb)
// check: vers=2.0/sp2p3 target=0xdc candidate=0xdc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete receiver-only movement behavior. ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch622.md. */
typedef struct Vec{int x,y,z;}Vec;extern int DAT_0219c1ac[];extern int FUN_020370b8(void *,int,Vec *);extern void FUN_02037924(void *);extern void FUN_0205c8cc(const Vec *,Vec *);extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_28__02199f7c(char *self){char *state=*(char **)(self+8),*owner=*(char **)(self+4);Vec direction,result;int scale,animation;if(!FUN_020370b8(owner,*(int *)(state+0x48),&direction)){FUN_02037924(state);return;}if(direction.x||direction.y||direction.z)FUN_0205c8cc(&direction,&direction);scale=DAT_0219c1ac[0];result.x=(int)(((long long)direction.x*scale+2048)>>12);result.y=(int)(((long long)direction.y*scale+2048)>>12);result.z=(int)(((long long)direction.z*scale+2048)>>12);*(Vec *)(self+12)=result;*(int *)(self+24)=DAT_0219c1ac[2];animation=3;if(*(int *)(owner+0xd4)==1){*(int *)(self+24)=DAT_0219c1ac[1];animation=4;}FUN_02040c0c(owner,0,animation,4096,0);}
