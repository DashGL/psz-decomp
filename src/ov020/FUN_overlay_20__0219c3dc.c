// flags: -O4,p
// FUN_overlay_20__0219c3dc @ 0x0219c3dc (code 0x90, full extent 0xa4, thumb)
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch458.md.
 */
extern unsigned char DAT_020ed09c[];
extern unsigned char DAT_020ed0a0[];
extern unsigned char DAT_020fc958[];
extern unsigned char DAT_020fc988[];
extern unsigned char DAT_0219fc1c[];
typedef struct {int x,y,z;} Vec;extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_overlay_20__02198f08(void *,int);extern void FUN_overlay_20__02198f20(void *,int);extern void FUN_overlay_20__0219c7a4(void *);
void FUN_overlay_20__0219c3dc(int *self) { int *owner=(int *)self[1];owner[59]|=16;self[16]=5;*(Vec *)(self+13)=*(Vec *)(owner+14);self[17]=0;self[18]=30;FUN_02040c0c(owner,0,22,4096,0);self[5]=3072;self[6]=102;FUN_overlay_20__02198f08(owner,self[5]);FUN_overlay_20__02198f20(owner,self[6]);*(Vec *)(self+7)=*(Vec *)DAT_020fc958;self[10]=*(int *)DAT_020fc988;self[11]=((int *)DAT_0219fc1c)[2];self[12]=((int *)DAT_0219fc1c)[1];self[3]=*(int *)DAT_020ed09c;self[4]=*(int *)DAT_020ed0a0;FUN_overlay_20__0219c7a4(self); }
