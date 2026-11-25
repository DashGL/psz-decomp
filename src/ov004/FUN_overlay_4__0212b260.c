// FUN_overlay_4__0212b260 @ 0x0212b260 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch36.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212b260 @ 0x0212b260 (code 0x42, pool extent 0x42, thumb)
// check: vers=2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Render resource message when global entity is ready.
 * Field identities remain provisional.
 */
extern int FUN_020b491c(void);
extern void *FUN_0208f068(void);
extern void *FUN_02077930(void);
extern int FUN_02077d98(void *);
extern void *FUN_0208efa8(void *,int,int,int);
extern void FUN_020c3788(void *,void *,int,int,int);
int FUN_overlay_4__0212b260(void **p) {void *m,*text;if(FUN_020b491c()==1){m=FUN_0208f068();if(m){text=FUN_0208efa8(m,FUN_02077d98(FUN_02077930()),0,36);if(text)FUN_020c3788(p[0],text,0,6,2);}return 1;}return 0;}
