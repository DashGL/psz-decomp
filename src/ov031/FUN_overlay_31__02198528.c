// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// FUN_overlay_31__02198528 @ 0x02198528 (code 0x64, full extent 0x64, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game state/geometry initialization.
 * Full behavior and ABI: notes/sessions/coverage-overlays-2026-11-05-batch379.md.
 */
extern void FUN_020473e8(void *,void *,int);extern void FUN_020bf694(void *,void *,void *);extern void FUN_020c0488(void *);extern void *FUN_02047798(void *,void *);
void FUN_overlay_31__02198528(int *self,void *request) { int lower[2],upper[2];FUN_020473e8(self,request,0);lower[0]=self[23]-24576;lower[1]=self[25]-24576;upper[0]=self[23]+24576;upper[1]=self[25]+24576;FUN_020bf694(self+67,lower,upper);FUN_020c0488(self+76);FUN_02047798(self+79,self+67);self[78]=4096;self[89]=-1; }
