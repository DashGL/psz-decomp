// FUN_overlay_12__02134bdc @ 0x02134bdc (0x84, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// FUN_overlay_12__02134bdc @ 0x02134bdc (thumb)
// check: 2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {unsigned words[7];} Config;
extern void FUN_overlay_12__02134784(int),FUN_overlay_12__02133744(void *,int);
extern const char *FUN_overlay_12__02135300(int);
extern int FUN_overlay_12__021341fc(void);
extern void FUN_overlay_12__0213248c(void *,const Config *,int,int,int),FUN_overlay_12__02134a34(void *,int),FUN_overlay_12__021350cc(void *),FUN_02079120(void);
void FUN_overlay_12__02134bdc(unsigned *self,void *parent,int mode){
    Config config;
    void *panel;
    int special,count;
    self[0]=mode;
    FUN_overlay_12__02134784(mode);
    FUN_overlay_12__02133744(parent,2);
    panel=*(void **)0x0213f2f4;
    if(panel)*(const char *(**)(int))((char *)panel+372)=FUN_overlay_12__02135300;
    if(FUN_overlay_12__021341fc()==4)special=1;else special=0;
    if(special)count=2;else count=1;
    config=*(const Config *)0x0213bcec;
    config.words[6]=count;
    FUN_overlay_12__0213248c(parent,&config,1,special,1);
    FUN_overlay_12__02134a34(self+1,1);
    FUN_overlay_12__021350cc(self);
    FUN_02079120();
}
