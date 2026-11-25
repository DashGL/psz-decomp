// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x118, exact bytes and relocation targets.
// FUN_overlay_12__02133b2c @ 0x02133b2c, verified extent 0x118.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213bbe4[];
extern unsigned char DAT_0213bc04[];
extern unsigned char DAT_0213bc24[];
extern unsigned char DAT_0213e968[];
extern unsigned char DAT_0213e980[];
// FUN_overlay_12__02133b2c @ 0x02133b2c (thumb)
// flags: -O4,s
typedef struct {unsigned words[8];} Config;
extern void *FUN_02077f3c(void),*FUN_020c1fc8(void);
extern int FUN_02077fec(void *),FUN_02078038(void *),FUN_020c2438(void *,const void *,const void *,int);
extern void FUN_02077fa4(void *),FUN_02077ff0(void *),FUN_020c35d4(void *,const Config *),FUN_020c38f0(void *,int),FUN_overlay_12__02134090(void *),FUN_overlay_12__02131ff8(void *,int);
void FUN_overlay_12__02133b2c(unsigned *self){
    Config first,second,third;
    void *resources;
    if(self[16]==0){
        resources=FUN_02077f3c();
        if(FUN_02077fec(resources)==-1){FUN_02077fa4(FUN_02077f3c());self[91]=1;}
        if(FUN_02078038(resources)==-1){FUN_02077ff0(FUN_02077f3c());self[92]=1;}
        first=*(Config *)((unsigned int)DAT_0213bbe4 + 0u);
        FUN_020c35d4(self+19,&first);FUN_020c38f0(self+19,0);
        second=*(Config *)((unsigned int)DAT_0213bc04 + 0u);
        FUN_020c35d4(self+34,&second);FUN_020c38f0(self+34,0);
        third=*(Config *)((unsigned int)DAT_0213bc24 + 0u);
        FUN_020c35d4(self+49,&third);FUN_020c38f0(self+49,0);
        third.words[5]=2081;
        FUN_020c35d4(self+64,&third);FUN_020c38f0(self+64,0);
        FUN_overlay_12__02134090(self);
        self[17]=FUN_020c2438(FUN_020c1fc8(),(void *)((unsigned int)DAT_0213e968 + 0u),(void *)((unsigned int)DAT_0213e980 + 0u),2);
        if(!self[87])FUN_overlay_12__02131ff8(self,2);
        self[16]=1;
    }
}
