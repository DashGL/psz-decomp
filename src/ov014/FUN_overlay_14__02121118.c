// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0xb8 candidate=0xb8 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_14__02121118 @ 0x02121118 (thumb)
// flags: -O4,s
extern unsigned short D_02121980[];
typedef struct {unsigned short glyph,b,z,pad;unsigned x,y;} Draw;
extern void *FUN_0209081c(void);
extern void FUN_020144f0(void),FUN_02014714(void),FUN_02071d0c(void *),FUN_02090b44(void *),FUN_02090b54(void *,void *,unsigned),FUN_02090a28(void *);
int FUN_overlay_14__02121118(char *self){
    void *renderer=FUN_0209081c();Draw upper,lower;int i;FUN_020144f0();
    for(i=0;i<3;i++){FUN_02071d0c(&upper);FUN_02090b44(&upper);upper.x=0x80000;upper.y=((unsigned)i*27+228)<<12;upper.glyph=D_02121980[i];if(i==*(int *)(self+4))upper.glyph++;FUN_02090b54(renderer,&upper,1);}
    for(i=3;i<5;i++){FUN_02071d0c(&lower);FUN_02090b44(&lower);lower.x=0x80000;lower.y=(((unsigned)i-3)*23+314)<<12;lower.glyph=D_02121980[i];if(i==*(int *)(self+4))lower.glyph++;FUN_02090b54(renderer,&lower,1);}
    FUN_02014714();FUN_02090a28(renderer);return 1;
}
