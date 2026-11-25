// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// FUN_overlay_19__0219a81c @ 0x0219a81c
// check: 2.0/sp2p3 target=0xb8 candidate=0xb8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch474.md.
 */
extern int data_0219d170[];
typedef struct {int x,y,z;} Vec;typedef struct {Vec difference,normalized,velocity,unit,scaled;} Frame;extern void FUN_overlay_19__02198c5c(void *);extern void *FUN_02035408(void *,int,int,int);extern void FUN_02091cc0(void *,void *,void *);extern void FUN_020bbfbc(void *,unsigned);extern void FUN_02036348(void *,void *,void *);extern void FUN_020b78d0(void *,void *);
void * FUN_overlay_19__0219a81c(int *self,Vec *position,unsigned angle,int index) { Frame f;FUN_overlay_19__02198c5c(self);self[0]=0x0219d1f8;self[12]=-1;FUN_02035408(self+13,0,0,0);FUN_02035408(self+16,0,0,0);self[19]=0;self[2]=2;*(Vec *)(self+3)=*position;self[4]=(data_0219d170)[12];*(unsigned short *)(self+6)=angle;self[10]=index;self[9]=1;f.unit.x=0;f.unit.y=0;f.unit.z=4096;FUN_02091cc0(&f.scaled,&f.unit,(void *)0x0219d1ac);FUN_020bbfbc(&f.scaled,angle);FUN_02036348(&f.difference,&f.scaled,position);FUN_020b78d0(&f.normalized,&f.difference);FUN_02091cc0(&f.velocity,&f.normalized,(void *)0x0219d1b0);*(Vec *)(self+16)=f.velocity;return self; }
