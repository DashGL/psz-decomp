// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// FUN_overlay_10__021218a4 @ 0x021218a4, verified extent 0x8c.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02122354[];
extern unsigned char DAT_02122cd8[];
extern unsigned char DAT_02122cf4[];
// FUN_overlay_10__021218a4 @ 0x021218a4 (thumb)
// flags: -O4,s
/* Build three-entry profile menu and refresh the current profile panel. */
extern void *FUN_overlay_10__0211fc88(void *,int),*FUN_020af01c(void *,int,int),*FUN_overlay_10__02121ad4(void),*FUN_02093c00(int),*FUN_02093b2c(void *,int,int);extern void FUN_overlay_10__02121bb8(void *),FUN_overlay_10__0211ff68(void *,void *,int,int);
void *FUN_overlay_10__021218a4(int *self,int selection){void *panel,*manager;int i;FUN_overlay_10__0211fc88(self,3);FUN_020af01c(self+36,3,1);self[0]=((unsigned int)DAT_02122cd8 + 0u);self[36]=((unsigned int)DAT_02122cf4 + 0u);self[40]=0;if(selection>=0&&selection<3){self[38]=3;self[37]=selection;}panel=FUN_overlay_10__02121ad4();if(panel)FUN_overlay_10__02121bb8(panel);manager=FUN_02093c00(0);if(manager){for(i=0;i<3;i++)FUN_overlay_10__0211ff68(self,FUN_02093b2c(manager,5,((int *)((unsigned int)DAT_02122354 + 0u))[i]),0,i*16);}return self;}
