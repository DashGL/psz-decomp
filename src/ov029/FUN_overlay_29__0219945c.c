// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// FUN_overlay_29__0219945c @ 0x0219945c (code 0x60, full extent 0x60, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game direction/effect setup with
 * bounded stack vector/matrix/request objects and original guards.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch383.md.
 */
typedef struct {int x,y,z;} Vec;
extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern void *FUN_0200c938(void *,int);extern void FUN_0205b960(void *,void *,void *);extern void FUN_020345f0(void *,void *);extern void *FUN_0203666c(void *);extern void *FUN_02046d94(void *,int,int);
void FUN_overlay_29__0219945c(int *self) { int matrix43[12],matrix33[9];Vec zero,position;int request[25];void *object=FUN_02036c88(self,0);if(object && FUN_0204260c(object,0,matrix43,matrix33)){FUN_0200c938(&zero,12);FUN_0205b960(&zero,matrix43,&zero);FUN_020345f0(&position,&zero);FUN_0203666c(request);request[21]=38;request[22]=self[3];*(Vec *)(request+8)=position;FUN_02046d94(request,0,0);} }
