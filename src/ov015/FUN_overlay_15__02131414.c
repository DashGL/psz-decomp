// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// FUN_overlay_15__02131414 @ 0x02131414 (thumb)
// flags: -O4,p
/* USA ROM reconstruction, 2026-11-05. Full touch-region selection; all four rectangle halfwords initialized by concrete helper. */
extern void FUN_overlay_15__0213149c(int,unsigned short *);extern int FUN_overlay_15__02136ac8(const unsigned short *),FUN_overlay_15__02136a68(const unsigned short *);
int FUN_overlay_15__02131414(void){unsigned short rect[4];int i;FUN_overlay_15__0213149c(1,rect);if(FUN_overlay_15__02136ac8(rect))return 1;for(i=2;i<=3;i++){FUN_overlay_15__0213149c(i,rect);if(FUN_overlay_15__02136ac8(rect))return i;}FUN_overlay_15__0213149c(4,rect);if(FUN_overlay_15__02136a68(rect))return 4;return 0;}
