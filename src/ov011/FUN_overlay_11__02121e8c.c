// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf8, exact bytes and relocation targets.
// FUN_overlay_11__02121e8c @ 0x02121e8c
// check: 2.0/sp2p3 target=0xf8 candidate=0xf8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned D_02123934[];
extern unsigned D_02123928[];
typedef struct {unsigned short glyph,b,z,pad;unsigned x,y;} Draw;
extern void FUN_020144f0(void),FUN_02014714(void),FUN_02071d0c(void *),FUN_02090b44(void *),FUN_020c32b4(void *,unsigned);
void FUN_overlay_11__02121e8c(char *self,signed char *appearance){
    Draw backdrop,item,choice;int count,i;
    FUN_020144f0();
    if(*(unsigned *)(self+36)!=0){FUN_02071d0c(&backdrop);FUN_02090b44(&backdrop);backdrop.glyph=0;backdrop.x=0x14000;backdrop.y=0xc5000;FUN_020c32b4(&backdrop,((unsigned *)(self+20))[*(unsigned *)(self+36)]);}
    count=*(int *)(self+8);
    if(*(unsigned *)(self+36)!=0){
        for(i=0;i<count;i++){
            int kind;FUN_02071d0c(&item);FUN_02090b44(&item);item.x=0x42000;
            kind=appearance[32];item.y=(D_02123934[kind]+D_02123928[kind]*(unsigned)i+192)<<12;
            if(i==*(int *)(self+4))item.glyph=(unsigned)i+1+(unsigned)count;else item.glyph=(unsigned)i+1;
            FUN_020c32b4(&item,((unsigned *)(self+20))[*(unsigned *)(self+36)]);
        }
    }else{
        for(i=0;i<count;i++){
            FUN_02071d0c(&choice);FUN_02090b44(&choice);choice.y=((unsigned)i*38+221)<<12;
            if(i==*(int *)(self+4)){choice.x=0x15000;choice.glyph=(unsigned)i+(unsigned)count;}else{choice.x=0x27000;choice.glyph=i;}
            FUN_020c32b4(&choice,((unsigned *)(self+20))[*(unsigned *)(self+36)]);
        }
    }
    FUN_02014714();
}
