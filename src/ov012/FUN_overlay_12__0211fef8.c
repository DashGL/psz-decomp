// FUN_overlay_12__0211fef8 @ 0x0211fef8 (0xb4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211fef8 @ 0x0211fef8 (thumb)
// check: 2.0/sp2p3 target=0xb4 candidate=0xb4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int FUN_020bbf94(unsigned);
extern void FUN_020c193c(unsigned,unsigned,unsigned,unsigned,int),FUN_overlay_12__0211f880(void *);
void FUN_overlay_12__0211fef8(char *self){
    unsigned previous=*(unsigned *)(self+3032);
    if(FUN_020bbf94(128)){
        FUN_020c193c(0,2,0,0,-1);
        *(unsigned *)(self+3028)+=1;
        if(*(int *)(self+3028)>=*(int *)(self+3020))*(unsigned *)(self+3028)=0;
        FUN_overlay_12__0211f880(self+3020);
        if(previous!=*(unsigned *)(self+3032)){*(unsigned *)(self+28)=20;*(unsigned *)(self+3036)=1;}
        return;
    }
    if(FUN_020bbf94(64)){
        FUN_020c193c(0,2,0,0,-1);
        *(unsigned *)(self+3028)-=1;
        if(*(int *)(self+3028)<0)*(unsigned *)(self+3028)=*(unsigned *)(self+3020)-1;
        FUN_overlay_12__0211f880(self+3020);
        if(previous!=*(unsigned *)(self+3032)){*(unsigned *)(self+28)=10;*(unsigned *)(self+3036)=1;}
    }
}
