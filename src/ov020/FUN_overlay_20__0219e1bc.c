// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_20__0219e1bc @ 0x0219e1bc (code 0x76, full extent 0x84, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch433.md.
 */
extern int D_0219fe20[];
typedef struct {int x,y,z;} Vec;typedef struct {Vec difference,position;} Frame;extern void FUN_overlay_20__0219df38(void *);extern int FUN_020866b4(int,void *);extern void FUN_02036348(void *,void *,void *);extern int FUN_overlay_20__0219e154(void *);extern void FUN_02036368(void *);extern unsigned short FUN_0205cc08(int);
void FUN_overlay_20__0219e1bc(int *self,int identifier) { Frame f;int *p=(int *)self[56];unsigned angle;FUN_overlay_20__0219df38(p);if(FUN_020866b4(identifier,&f.position)){FUN_02036348(&f.difference,&f.position,(void *)0x020fc958);f.difference.y=0;if(FUN_overlay_20__0219e154(&f.difference)>0){FUN_02036368(&f.difference);angle=FUN_0205cc08(f.difference.z);if(f.difference.x<0)angle=(unsigned short)(65536-angle);}else angle=0;*(unsigned short *)(p+3)=angle;p[4]=identifier;p[7]=1;p[8]=1;p[9]=D_0219fe20[0];p[10]=30720;p[11]=D_0219fe20[4];*(unsigned short *)(p+12)=0x222;} }
