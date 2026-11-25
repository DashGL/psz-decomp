// FUN_overlay_24__0219b0a4 @ 0x0219b0a4 (0xd8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch2.json; original draft retained for referenced provenance.
// FUN_overlay_24__0219b0a4 @ 0x0219b0a4 (full extent 0xd8, thumb)
// check: vers=2.0/sp2p3 target=0xd8 candidate=0xd8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete retreat state entry. ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch613.md. */
typedef struct Vec{int x,y,z;}Vec;extern int DAT_0219c790;extern int FUN_020370b8(void *,int,Vec *);extern void FUN_0205c8cc(const Vec *,Vec *);extern void FUN_020bbfbc(Vec *,unsigned);extern void FUN_02044570(void *,int,int);extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_24__0219b0a4(char *self){char *owner=*(char **)(self+4);int id=*(int *)(*(char **)(self+8)+0x44),scale;Vec direction,result;direction.x=0;direction.y=0;direction.z=0;if(FUN_020370b8(owner,id,&direction)==1){if(direction.x||direction.y||direction.z)FUN_0205c8cc(&direction,&direction);FUN_020bbfbc(&direction,32768);}scale=DAT_0219c790;result.x=(int)(((long long)direction.x*scale+2048)>>12);result.y=(int)(((long long)direction.y*scale+2048)>>12);result.z=(int)(((long long)direction.z*scale+2048)>>12);*(Vec *)(self+0x10)=result;FUN_02044570(owner,0,0);FUN_02040c0c(owner,0,4,4096,0);*(int *)(self+12)=0;}
