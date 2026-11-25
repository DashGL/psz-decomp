// FUN_overlay_12__02135cfc @ 0x02135cfc (0xa8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__02135cfc @ 0x02135cfc (thumb)
// check: 2.0/sp2p3 target=0xa8 candidate=0xa8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {unsigned words[7];} Config;
extern void *FUN_overlay_12__02134a14(void *),*FUN_overlay_12__02134b68(void *);
extern void FUN_02045848(void *),FUN_0203955c(void *),FUN_overlay_12__02134a34(void *,int);
extern void FUN_overlay_12__0212c824(int),FUN_overlay_12__02131b70(int),FUN_overlay_12__02135140(void),FUN_02079120(void);
extern void FUN_overlay_12__02133744(void *,int),FUN_overlay_12__0213248c(void *,const Config *,int,int,int);
extern void FUN_overlay_12__021262f8(void),FUN_overlay_12__02135e7c(void *);
extern const char *FUN_overlay_12__02135118(void *,int);
extern void FUN_overlay_12__02135084(const char *),FUN_overlay_12__02135094(const char *);
void *FUN_overlay_12__02135cfc(unsigned *self,void *parent){
    Config config;
    self[0]=0;
    FUN_overlay_12__02134a14(self+1);
    FUN_overlay_12__02134b68(self+2);
    self[3]=-1;
    FUN_02045848(self+4);
    self[6]=0;
    FUN_0203955c(self+7);
    FUN_overlay_12__02134a34(self+1,1);
    FUN_overlay_12__0212c824(0);FUN_overlay_12__02131b70(0);
    FUN_overlay_12__02135140();FUN_02079120();
    FUN_overlay_12__02133744(parent,2);
    config=*(const Config *)0x0213bea4;
    FUN_overlay_12__0213248c(parent,&config,1,1,1);
    FUN_overlay_12__021262f8();FUN_overlay_12__02135e7c(self);
    FUN_overlay_12__02135084(FUN_overlay_12__02135118(self+2,10));
    FUN_overlay_12__02135094(FUN_overlay_12__02135118(self+2,15));
    return self;
}
