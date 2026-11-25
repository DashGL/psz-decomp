// FUN_overlay_29__02198c10 @ 0x02198c10 (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_29__02198c10 @ 0x02198c10 (code 0x76, full extent 0x7c, thumb)
// check: vers=2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch425.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {int m[9];} Mat;extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern void FUN_0200c938(void *,unsigned);extern void FUN_0205b960(void *,void *,void *);extern void FUN_020345f0(void *,void *);typedef struct {Vec copy,position;Mat matrix33;int matrix43[12];} Frame;extern void FUN_02037404(void *,void *,int,unsigned,unsigned,int);
void FUN_overlay_29__02198c10(int *self) { Frame f;void *child=FUN_02036c88(self,0);int option,type;if(child && FUN_0204260c(child,1,f.matrix43,&f.matrix33)){f.position=*(Vec *)0x0219b880;FUN_0205b960(&f.position,f.matrix43,&f.position);FUN_020345f0(&f.copy,&f.position);option=2;type=**(signed char **)self[5];if(type==38)option=4;else if(type==39)option=3;FUN_02037404(self,&f.copy,(unsigned short)(*(unsigned short *)((char *)self+68)+0xc000),1,5,option);} }
