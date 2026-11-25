// FUN_overlay_10__02120aa0 @ 0x02120aa0 (0xdc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_10__02120aa0 @ 0x02120aa0 (thumb)
// check: 2.0/sp2p3 target=0xdc candidate=0xdc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {unsigned short glyph,b,z,pad;unsigned x,y;} Draw;
extern void FUN_020144f0(void),FUN_02014714(void),FUN_02071d0c(void *),FUN_02090b44(void *),FUN_020c32b4(void *,unsigned);
int FUN_overlay_10__02120aa0(char *self){
    Draw background,caret,key;int column;
    FUN_020144f0();FUN_02071d0c(&background);FUN_02090b44(&background);
    background.x=0x6c000;background.y=0xf5000;background.glyph=0;FUN_020c32b4(&background,*(unsigned *)(self+8));
    if(*(unsigned *)(self+72)==0){
        *(unsigned *)(self+84)+=1;
        if(*(int *)(self+84)>10){
            column=*(int *)(self+76);if(column>=12)column=11;
            FUN_02071d0c(&caret);FUN_02090b44(&caret);
            caret.x=((unsigned)column*15+39)<<12;caret.y=0xc9000;caret.glyph=5;
            FUN_020c32b4(&caret,*(unsigned *)(self+8));
            if(*(int *)(self+84)>20)*(unsigned *)(self+84)=0;
        }
    }
    if(*(unsigned *)(self+72)==0){
        FUN_02071d0c(&key);FUN_02090b44(&key);
        if(*(short *)(self+82)<4){key.x=((unsigned)*(short *)(self+80)*16+105)<<12;key.y=((unsigned)*(short *)(self+82)*16+243)<<12;key.glyph=3;}
        else{key.x=0x69000;key.y=(((unsigned)*(short *)(self+82)-4)*16+308)<<12;key.glyph=1;}
        FUN_020c32b4(&key,*(unsigned *)(self+8));
    }
    FUN_02014714();return 0;
}
