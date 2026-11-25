// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_overlay_12__021362f4 @ 0x021362f4
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0213f328[];
extern int D_0213eb74[];
extern char D_0213eb7c[];
extern char D_0213eb98[];
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Load two shared resource handles once and register primary handle.
 * Field identities remain provisional.
 */
extern void *FUN_0208f068(void);
extern int FUN_0208ef48(void *,const void *,int);
extern void *FUN_02077930(void);
extern void FUN_02077d90(void *,int);
void FUN_overlay_12__021362f4(void) {void *m;if(!*D_0213f328){*D_0213f328=1;m=FUN_0208f068();if(m){D_0213eb74[1]=FUN_0208ef48(m,D_0213eb7c,6);*D_0213eb74=FUN_0208ef48(m,D_0213eb98,5);FUN_02077d90(FUN_02077930(),*D_0213eb74);}}}
