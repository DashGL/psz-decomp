// FUN_overlay_12__021220e8 @ 0x021220e8 (0xd0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch37.json; original draft retained for referenced provenance.
// FUN_overlay_12__021220e8 @ 0x021220e8; full Thumb extent 0xd0
// check: vers=2.0/sp2p3 target=0xd0 candidate=0xd0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern const int data_02137ca8[],data_02137cd8[],data_0213ecb4[];
extern void FUN_02071d0c(void *),FUN_02090b44(void *),FUN_0208971c(void *,const void *),FUN_020c32b4(void *,int);
extern int FUN_overlay_12__02131ad0(int),FUN_overlay_12__02122250(void *);
extern void FUN_overlay_12__021222e4(void *),FUN_overlay_12__021221b8(void *),FUN_overlay_12__0212236c(void *),FUN_020144f0(void),FUN_02014714(void);
typedef struct {short a,b;int c,x,y;} Draw;
void FUN_overlay_12__021220e8(int *self)
{
    Draw first, other;
    int i;
    if (self[4]) {
        FUN_02071d0c(&first);FUN_02090b44(&first);
        first.a=4;FUN_0208971c(&first.x,data_02137ca8);
        FUN_020c32b4(&first,FUN_overlay_12__02131ad0(7));
    } else {
        FUN_02071d0c(&other);
        if (FUN_overlay_12__02122250(self)) FUN_overlay_12__021222e4(self);
        FUN_020144f0();FUN_overlay_12__021221b8(self);
        for(i=0;i<4;i++) {
            if(data_0213ecb4[i*2+1]==0) {
                other.a=3;other.x=0xb000;other.y=i*0x12000+0x41000;
                FUN_020c32b4(&other,self[0]);
            }
        }
        FUN_02090b44(&other);other.a=0;FUN_0208971c(&other.x,data_02137cd8);
        FUN_020c32b4(&other,self[0]);FUN_02014714();
        if(self[3]) {self[3]=0;FUN_overlay_12__0212236c(self);}
    }
}
