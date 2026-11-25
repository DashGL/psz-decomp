// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x42, exact bytes and relocation targets.
// FUN_overlay_12__02126cb8 @ 0x02126cb8
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Search inventory for a valid category-three table member.
 * Field identities remain provisional.
 */
extern char *FUN_02086e3c(void);
extern unsigned char *FUN_020b00ac(void *,int);
extern int FUN_0203a1fc(void *);
extern int FUN_overlay_12__02134ae8(void *);
int FUN_overlay_12__02126cb8(void) {char *p=FUN_02086e3c()+16;int i,n=*(short *)(p+8);for(i=0;i<n;i++){unsigned char *v=FUN_020b00ac(p,i);if(!FUN_0203a1fc(v)&&v[0]==3&&FUN_overlay_12__02134ae8(v))return 1;}return 0;}
