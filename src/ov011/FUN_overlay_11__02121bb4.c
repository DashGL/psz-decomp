// FUN_overlay_11__02121bb4 @ 0x02121bb4 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_11__02121bb4 @ 0x02121bb4 (code 0x4e, pool extent 0x54, thumb)
// check: vers=2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Clear background memory and configure display rectangle from five inputs.
 * Field identities remain provisional.
 */
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(int,void *,unsigned int);
extern void FUN_020c35d4(void *,void *);
extern void FUN_020c38f0(void *,int);
void FUN_overlay_11__02121bb4(char *p,int x,int y,int width,int height) {struct T {int w[8];} t;FUN_0206557c(0,FUN_0205e0c4(),2048);t=*(struct T *)0x02123904;t.w[1]=x;t.w[2]=y;t.w[3]=width;t.w[4]=height;FUN_020c35d4(p+8,&t);FUN_020c38f0(p+8,0);}
