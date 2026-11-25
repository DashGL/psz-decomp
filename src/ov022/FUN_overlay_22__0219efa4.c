// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_overlay_22__0219efa4 @ 0x0219efa4 (code 0x50, full extent 0x50, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Randomized game command or guarded
 * attached-object coordinate query; exact defaults and argument slots.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch385.md.
 */
typedef struct {int x,y,z;} Vec;extern int *FUN_0204475c(void *,int);extern void *FUN_02036c88(void *,int);extern int FUN_0204260c(void *,int,void *,void *);extern void *FUN_0200c938(void *,int);extern void FUN_0205b960(void *,void *,void *);
void FUN_overlay_22__0219efa4(int *self,int index,int *output) { int matrix43[12],matrix33[9];Vec v;int *record;void *object;*output=4096;record=FUN_0204475c(self,index);if(record && record[2]==2){object=FUN_02036c88(self,record[3]);if(object && FUN_0204260c(object,record[4],matrix43,matrix33)==1){FUN_0200c938(&v,12);FUN_0205b960(&v,matrix43,&v);*output=v.y;}} }
