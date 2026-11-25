// FUN_overlay_21__0219ecb0 @ 0x0219ecb0 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219ecb0 @ 0x0219ecb0 (code 0x4c, pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Start child animation and emit feedback at projected position.
 * Field identities remain provisional.
 */
typedef struct {int v[3];} Vec;
extern void FUN_02040c0c(void *,int,int,int,int);
extern void *FUN_02090c20(void);
extern void FUN_02090f74(short *,void *,void *,int);
extern void FUN_020c193c(int,int,int,int,int);
void FUN_overlay_21__0219ecb0(int **p) {int *c=p[1];Vec pos;short xy[2];FUN_02040c0c(c,0,7,4096,0);pos=*(Vec *)(c+63);FUN_02090f74(xy,FUN_02090c20(),&pos,1);FUN_020c193c(26,14,xy[0],xy[1],4);}
