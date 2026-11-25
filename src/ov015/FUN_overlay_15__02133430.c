// FUN_overlay_15__02133430 @ 0x02133430 (code 0x48, pool extent 0x54, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Move sprite group downward and select next task after crossing screen edge.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02135a54(void *,int,int *,int *);
extern void FUN_overlay_15__0213322c(int);
extern void FUN_overlay_15__0213743c(void *,void *);
void FUN_overlay_15__02133430(void *task) {int x,y;FUN_overlay_15__02135a54(**(void ***)0x0213e8d8,0,&x,&y);y+=12;FUN_overlay_15__0213322c(y);if(y>=192){if((*(unsigned char **)0x0213e8d8)[30])FUN_overlay_15__0213743c(task,(void *)0x02133485);else FUN_overlay_15__0213743c(task,(void *)0x021334c1);}}
