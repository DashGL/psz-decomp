// FUN_overlay_12__0212f2c4 @ 0x0212f2c4 (0xc2, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xc2 candidate=0xc2 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 list panel mode-0 sprite rendering and description refresh, 194-byte code extent before 2-byte alignment.
typedef struct{short a,b,c,d;int x,y;} D;
extern void FUN_02071d0c(void *),FUN_02090b44(void *),FUN_overlay_12__02131c58(void),FUN_overlay_12__0212f0b8(void *,int),FUN_020c32b4(void *,int),FUN_overlay_12__0212f0f4(void *,int),FUN_overlay_12__0212ca54(void),FUN_overlay_12__0212ca2c(const void *,int,int,int);
extern const void *FUN_overlay_12__0212d268(int,int);
void FUN_overlay_12__0212f2c4(unsigned char *self){D d;FUN_02071d0c(&d);FUN_02090b44(&d);FUN_overlay_12__02131c58();FUN_overlay_12__0212f0b8(self,0);if(*(int *)(self+0xf4)!=-1&&*(int *)(self+0x48)>0){d.x=0x33<<12;d.y=0x5b<<14;d.a=3;FUN_020c32b4(&d,*(int *)(self+0xf4));}FUN_overlay_12__0212f0f4(self,0);if(*(int *)(self+0x48)>0){if(*(int *)(self+0xf4)!=-1){d.x=2<<18;d.y=0x12<<16;d.a=0;FUN_020c32b4(&d,*(int *)(self+0xf4));}if(*(int *)(self+0xfc)!=0){const void *text;FUN_overlay_12__0212ca54();*(int *)(self+0xfc)=0;text=FUN_overlay_12__0212d268(4,*(short *)(self+0x50+2*(*(int *)(self+0xec))));FUN_overlay_12__0212ca2c(text,13,119,2);}}}
