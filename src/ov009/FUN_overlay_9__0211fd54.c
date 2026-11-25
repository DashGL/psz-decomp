// FUN_overlay_9__0211fd54 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_9__0211fd54 @ 0x0211fd54 (thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full menu rendering/destructor body and concrete helper ABI reviewed. */
extern unsigned short D_02120df4[];
typedef struct {unsigned short glyph,a,b,pad;int x,y;} Draw;extern void *FUN_0209081c(void);extern void FUN_020144f0(void),FUN_02014714(void),FUN_02090b54(void *,void *,int),FUN_02090a28(void *),FUN_overlay_9__0211e6b4(int);int FUN_overlay_9__0211fd54(int *s){void *manager=FUN_0209081c();int i;Draw d;FUN_020144f0();for(i=0;i<2;i++){d.glyph=0;d.a=0;d.b=0;d.glyph=0;d.a=0;d.b=0;d.y=0;d.x=0;d.x=0x80000;d.y=(22*(i+1)+246)*4096;d.glyph=D_02120df4[i];if(i==s[1])d.glyph++;FUN_02090b54(manager,&d,3);}FUN_02014714();FUN_02090a28(manager);FUN_overlay_9__0211e6b4(s[1]);return 1;}
