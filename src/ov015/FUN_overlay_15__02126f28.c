// FUN_overlay_15__02126f28 @ 0x02126f28 (code 0x42, pool extent 0x4c, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Move fifth sprite upward and switch task when it reaches its bound.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02135a54(void *,int,int *,int *);
extern void FUN_overlay_15__02127468(int,int);
extern void FUN_overlay_15__02127674(void);
extern void FUN_overlay_15__0213743c(void *,void *);
void FUN_overlay_15__02126f28(void *task) {int x,y;FUN_overlay_15__02135a54((void *)(*(int **)0x0213e7e0)[16],0,&x,&y);y-=12;if(y>170)FUN_overlay_15__02127468(4,y);else {FUN_overlay_15__02127468(4,170);FUN_overlay_15__02127674();FUN_overlay_15__0213743c(task,(void *)0x02126f75);}}
