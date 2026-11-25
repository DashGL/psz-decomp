// FUN_overlay_7__0211fb84 @ 0x0211fb84 (0x70, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch36.json; original draft retained for referenced provenance.
// FUN_overlay_7__0211fb84 @ 0x0211fb84 (code 0x6c, pool extent 0x70, thumb)
// check: vers=2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 7 reconstruction from extracted module bytes, 2026-11-04.
 * Configure display template and advance backing tile allocation cursor.
 * Field identities remain provisional.
 */
extern void FUN_020c35d4(void *,void *);
extern void FUN_020c38f0(void *,int);
extern int FUN_020c38c8(void *,int,int);
void FUN_overlay_7__0211fb84(int *p,void *display,int width,int height,int x,int y,int mode) {struct T {int w[8];} t=*(struct T *)0x0211fd64;int a,b;t.w[0]=p[37];t.w[1]=x;t.w[2]=y;t.w[3]=width;t.w[4]=height;t.w[5]=mode;FUN_020c35d4(display,&t);FUN_020c38f0(display,0);a=FUN_020c38c8(display,x,width);b=FUN_020c38c8(display,y,height);p[37]+=a*b;}
