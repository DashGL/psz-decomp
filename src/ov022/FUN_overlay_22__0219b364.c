// FUN_overlay_22__0219b364 @ 0x0219b364 (0xc4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219b364 @ 0x0219b364 (code 0xc0, full extent 0xc4, thumb)
// check: vers=2.0/sp2p3 target=0xc4 candidate=0xc4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch487.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {Vec copy2,copy1,zero2,zero1;int matrix33[9],matrix43[12];Vec position;} Frame;extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern void FUN_0200c938(void *,unsigned);extern void FUN_0205b960(void *,void *,void *);extern void FUN_020345f0(void *,void *);extern void FUN_0204477c(void *,int,int,int);
void FUN_overlay_22__0219b364(int *self) { Frame f;void *child=FUN_02036c88((void *)self[1],1);if(child){int x,z;f.position=*(Vec *)0x020fc958;if(FUN_0204260c(child,3,f.matrix43,f.matrix33)==1){FUN_0200c938(&f.zero1,12);FUN_0205b960(&f.zero1,f.matrix43,&f.zero1);FUN_020345f0(&f.copy1,&f.zero1);f.position=f.copy1;}if(FUN_0204260c(child,4,f.matrix43,f.matrix33)==1){FUN_0200c938(&f.zero2,12);FUN_0205b960(&f.zero2,f.matrix43,&f.zero2);FUN_020345f0(&f.copy2,&f.zero2);}x=(int)((unsigned)f.position.x<<1);z=(int)((unsigned)f.position.z<<1);FUN_0204477c((void *)self[1],6,(int)(((long long)x*2048+2048)>>12),(int)(((long long)z*2048+2048)>>12));} }
