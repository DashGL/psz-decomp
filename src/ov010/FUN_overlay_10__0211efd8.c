// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_10__0211efd8 @ 0x0211efd8 (code 0x44, pool extent 0x54, thumb)
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Return selected embedded record or lazily initialize shared fallback.
 * Field identities remain provisional.
 */
extern unsigned int D_02122d60;
extern void *FUN_overlay_10__0211e7b4(void *,int,int);
extern void FUN_0200c594(void *,void *,void *);
void *FUN_overlay_10__0211efd8(char *p) {int i=*(int *)(p+148);if(i>=0&&i<2)return p+96+i*20;if(!(D_02122d60&1)){FUN_overlay_10__0211e7b4((void *)0x0212247c,1,1);FUN_0200c594((void *)0x0212247c,(void *)0x0211e7c9,(void *)0x02122d78);D_02122d60|=1;}return (void *)0x0212247c;}
