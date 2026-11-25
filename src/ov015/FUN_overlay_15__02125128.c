// FUN_overlay_15__02125128 @ 0x02125128 (code 0x46, pool extent 0x50, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Enqueue task cleanup, release three sprites and free shared state.
 * Field identities remain provisional.
 */
extern unsigned char DAT_0213e788[];
extern unsigned char DAT_a_0213e788[];

extern void FUN_overlay_15__02137440(int,void *);
extern void FUN_overlay_15__02135820(void *);
extern void FUN_overlay_15__021366dc(void *);
void FUN_overlay_15__02125128(void *task) {int i;void *v;FUN_overlay_15__02137440(0,task);v=(*(void ***)(&DAT_0213e788))[4];if(v)FUN_overlay_15__02137440(0,v);for(i=0;i<2;i++){v=(*(void ***)(&DAT_0213e788))[i];if(v)FUN_overlay_15__02135820(v);}FUN_overlay_15__02135820((*(void ***)(&DAT_0213e788))[2]);FUN_overlay_15__021366dc((void *)(&DAT_a_0213e788));}
