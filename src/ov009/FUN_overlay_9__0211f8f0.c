// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// FUN_overlay_9__0211f8f0 @ 0x0211f8f0
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned short D_02120de0[];
/* USA ROM reconstruction, 2026-11-05. Full menu rendering/destructor body and concrete helper ABI reviewed. */
typedef struct {unsigned short glyph,a,b,pad;int x,y;} Draw;extern void *FUN_0209081c(void);extern void FUN_020144f0(void),FUN_02014714(void),FUN_02090b54(void *,void *,int),FUN_02090a28(void *),FUN_overlay_9__0211e6b4(int);int FUN_overlay_9__0211f8f0(int *s){void *manager=FUN_0209081c();int i;Draw d;FUN_020144f0();for(i=0;i<3;i++){d.glyph=0;d.a=0;d.b=0;d.glyph=0;d.a=0;d.b=0;d.y=0;d.x=0;d.x=0x80000;d.y=(27*(i+1)+228)*4096;d.glyph=D_02120de0[i];if(i==s[1])d.glyph++;FUN_02090b54(manager,&d,3);}FUN_02014714();FUN_02090a28(manager);FUN_overlay_9__0211e6b4(s[1]);return 1;}
