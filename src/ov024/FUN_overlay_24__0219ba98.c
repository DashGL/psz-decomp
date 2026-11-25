// FUN_overlay_24__0219ba98 @ 0x0219ba98 (0x13c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// FUN_overlay_24__0219ba98 @ 0x0219ba98 (full extent 0x13c, thumb)
// check: vers=2.0/sp2p3 target=0x13c candidate=0x13c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete game state enter/init logic. ABI and arithmetic evidence:
 * notes/sessions/coverage-overlays-2026-11-05-batch668.md. */
typedef struct Vec{int x,y,z;}Vec;extern int DAT_0219c884[];extern void FUN_02036f7c(void *,Vec *),FUN_020bbfbc(Vec *,unsigned),FUN_overlay_24__0219b5ec(void *,const Vec *),FUN_0205c8cc(const Vec *,Vec *),FUN_02040c0c(void *,int,int,int,int),FUN_020445a8(void *,int,int);
void FUN_overlay_24__0219ba98(char *self){char *owner=*(char **)(self+4);Vec direction,rotated,scaled;int scale;FUN_02036f7c(owner,&direction);scale=DAT_0219c884[0];direction.x=(int)(((long long)direction.x*scale+2048)>>12);direction.y=(int)(((long long)direction.y*scale+2048)>>12);direction.z=(int)(((long long)direction.z*scale+2048)>>12);rotated=direction;FUN_020bbfbc(&rotated,32768u);FUN_overlay_24__0219b5ec(owner,&rotated);if(direction.x||direction.y||direction.z)FUN_0205c8cc(&direction,&direction);scale=DAT_0219c884[1];scaled.x=(int)(((long long)direction.x*scale+2048)>>12);scaled.y=(int)(((long long)direction.y*scale+2048)>>12);scaled.z=(int)(((long long)direction.z*scale+2048)>>12);*(Vec *)(self+0xc)=scaled;FUN_02040c0c(owner,0,0,4096,0);FUN_020445a8(owner,0,0);}
