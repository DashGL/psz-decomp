// FUN_overlay_15__02130248 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__02130248 @ 0x02130248 (thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Config{void *(*allocate)(unsigned,unsigned);void (*release)(unsigned,void *,unsigned);unsigned char p[4];} Config;
extern unsigned char *FUN_overlay_15__021318ac(void);
extern void FUN_overlay_15__02127e24(unsigned *,unsigned *),FUN_020dab44(unsigned,const void *),FUN_overlay_15__021303e0(void *,unsigned);
extern int FUN_020da80c(const Config *);
extern void *FUN_overlay_15__021373d8(unsigned,void (*)(void *,unsigned),unsigned,unsigned);
#pragma thumb off
extern void FUN_0206552c(const void *,void *,unsigned),FUN_02068728(void);
#pragma thumb on
void FUN_overlay_15__02130248(void){
    Config config;
    unsigned mode;
    unsigned char *state=FUN_overlay_15__021318ac();
    FUN_0206552c((void *)0x0213a63c,&config,12);
    FUN_overlay_15__02127e24(0,&mode);
    if(mode==2)config.p[2]=4;else config.p[2]=(unsigned char)(state[244]+1);
    if(!FUN_020da80c(&config))FUN_02068728();
    if(mode==0)FUN_020dab44(state[244],state);
    FUN_overlay_15__021373d8(0,FUN_overlay_15__021303e0,0,120);
}
