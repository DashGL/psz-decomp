// FUN_overlay_29__0219b708 @ 0x0219b708 (0xd4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch2.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219b708 @ 0x0219b708 (full extent 0xd4, thumb)
// check: vers=2.0/sp2p3 target=0xd4 candidate=0xd4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete movement/animation state update. ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch611.md. */
typedef struct Vec{int x,y,z;}Vec;extern int DAT_0219bfb4;extern int FUN_02036f7c(void *,Vec *);extern void FUN_overlay_29__0219aad8(void *,const Vec *);extern int FUN_02037254(void *,int,int,const Vec *,int);extern int FUN_02041474(void *,int);extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_29__0219b708(char *self){char *owner=*(char **)(self+4);Vec velocity,position;int scale;velocity.x=0;velocity.y=0;velocity.z=0;FUN_02036f7c(owner,&velocity);scale=DAT_0219bfb4;velocity.x=(int)(((long long)velocity.x*scale+2048)>>12);velocity.y=(int)(((long long)velocity.y*scale+2048)>>12);velocity.z=(int)(((long long)velocity.z*scale+2048)>>12);FUN_overlay_29__0219aad8(owner,&velocity);position=*(Vec *)(owner+0x38);FUN_02037254(owner,15,1,&position,0);if(FUN_02041474(*(void **)(self+4),0)){*(unsigned *)(self+16)+=1;if(*(int *)(self+16)>6){*(int *)(self+12)=2;FUN_02040c0c(*(void **)(self+4),0,4,4096,0);}}}
