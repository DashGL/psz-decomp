// FUN_overlay_11__02121940 @ 0x02121940 (0x88, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_11__02121940 @ 0x02121940 (thumb)
// check: 2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {unsigned short glyph,b,z,pad;unsigned x,y;} Draw;
extern void FUN_020144f0(void),FUN_02014714(void),FUN_02071d0c(void *),FUN_02090b44(void *),FUN_020c32b4(void *,unsigned),FUN_overlay_11__021219c8(void *,int,unsigned);
extern unsigned *FUN_overlay_11__0212146c(void *,int);
void FUN_overlay_11__02121940(char *self,signed char *appearance){
    int selected,i;Draw draw;
    FUN_020144f0();
    selected=*(int *)(self+72);
    if(selected==4 && *FUN_overlay_11__0212146c(self+72,4)<=7){
        FUN_02071d0c(&draw);FUN_02090b44(&draw);draw.glyph=17;draw.x=0x10000;draw.y=0x126000;
        FUN_020c32b4(&draw,*(unsigned *)(self+68));
    }
    if(selected<=3 && appearance[32]==2)selected=(unsigned)selected*2+10;
    FUN_overlay_11__021219c8(self,*(int *)(self+72),(unsigned)selected);
    if(appearance[32]==2)for(i=0;i<=3;i++)FUN_overlay_11__021219c8(self,i,2*i+9);
    FUN_02014714();
}
