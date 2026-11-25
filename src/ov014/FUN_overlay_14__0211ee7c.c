// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// FUN_overlay_14__0211ee7c @ 0x0211ee7c
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_02122160[];
extern char D_02121a0c[];
extern char D_0211fcc5[];
extern char D_0212216c[];
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Return selected embedded record or lazily initialize shared fallback.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_14__0211fcb0(void *,int,int);
extern void FUN_0200c594(void *,void *,void *);
void *FUN_overlay_14__0211ee7c(char *p) {int i=*(int *)(p+148);if(i>=0&&i<2)return p+96+i*20;if(!(*D_02122160&1)){FUN_overlay_14__0211fcb0(D_02121a0c,1,1);FUN_0200c594(D_02121a0c,D_0211fcc5,D_0212216c);*D_02122160|=1;}return D_02121a0c;}
