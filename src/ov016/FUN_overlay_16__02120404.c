// flags: -O4,s
// Overlay 16 movie playback tick and audio synchronization; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x21c candidate=0x228 words=999 exact_bytes=999 bad_relocs=1
// near: ndiff=999/135 size=0x21c vers=2.0/sp2p3 next="recover 64-bit counter scheduling and movie buffer loop layout"
#pragma thumb off
extern int FUN_overlay_16__0211e7f0(void *),FUN_overlay_16__0211e778(void *);
extern unsigned int FUN_overlay_16__0211e880(void *);
extern void FUN_overlay_16__0211e814(void *),FUN_overlay_16__0211e85c(void *),FUN_overlay_16__0211e898(void *,void *),FUN_020673f0(void *,unsigned int);
#pragma thumb on
extern void FUN_overlay_16__02120978(void *,unsigned int,unsigned int),FUN_overlay_16__02120934(void *,void *);
void FUN_overlay_16__02120404(unsigned char *self) {
    // ROM0212054e sign-extends i for the 64-bit unsigned bound comparison.
    unsigned long long count;
    int i;
    unsigned long long played,queued;
    unsigned int capacity;
    if(!FUN_overlay_16__0211e7f0(*(void **)(self+0x448))) return;
    FUN_overlay_16__0211e814(*(void **)(self+0x448));
    ++*(unsigned int *)(self+0x4b8);
    if(FUN_overlay_16__0211e778(*(void **)(self+0x448))) {
        count=FUN_overlay_16__0211e880(*(void **)(self+0x448));
        for(i=0;i<count;i++) {
            if(*(int *)(self+0x498)) {
                played=*(unsigned long long *)self;
                queued=*(volatile unsigned long long *)(self+0x4c0);
                if(queued>=played) {
                    if(!*(int *)(self+0x49c)) *(int *)(self+0x49c)=1;
                } else {
                    capacity=*(unsigned int *)(self+12);
                    while((unsigned long long)capacity-(played-*(volatile unsigned long long *)(self+0x4c0))==0) {}
                }
            }
            switch(*(int *)(self+0x494)) {
            case 2:
                FUN_overlay_16__0211e898(*(void **)(self+0x448),*(unsigned char **)(self+20)+(*(unsigned int *)(self+8)<<1));
                FUN_overlay_16__0211e898(*(void **)(self+0x448),*(unsigned char **)(self+24)+(*(unsigned int *)(self+8)<<1));
                FUN_020673f0(*(unsigned char **)(self+20)+(*(unsigned int *)(self+8)<<1),*(unsigned int *)(self+0x4a0)<<1);
                FUN_020673f0(*(unsigned char **)(self+24)+(*(unsigned int *)(self+8)<<1),*(unsigned int *)(self+0x4a0)<<1);
                break;
            case 1:
                FUN_overlay_16__0211e898(*(void **)(self+0x448),*(unsigned char **)(self+16)+(*(unsigned int *)(self+8)<<1));
                FUN_020673f0(*(unsigned char **)(self+16)+(*(unsigned int *)(self+8)<<1),*(unsigned int *)(self+0x4a0)<<1);
                break;
            }
            *(unsigned int *)(self+8)+=*(unsigned int *)(self+0x4a0);
            if(*(unsigned int *)(self+8)==*(unsigned int *)(self+12)**(unsigned int *)(self+0x4a0)) *(unsigned int *)(self+8)=0;
            ++*(unsigned long long *)self;
        }
        if(!*(int *)(self+0x498) && *(unsigned int *)(self+0x4b8)>=*(unsigned int *)(self+0x4b4)) {
            unsigned int rate=FUN_overlay_16__0211e778(*(void **)(self+0x448));
            FUN_overlay_16__02120978(self,rate,*(unsigned int *)(self+0x4a0));
            *(int *)(self+0x498)=1;
        }
    }
    if(*(unsigned int *)(self+0x4b8)>=*(unsigned int *)(self+0x4b4) || !FUN_overlay_16__0211e778(*(void **)(self+0x448))) {
        if((int)(*(unsigned int *)self-(unsigned int)*(volatile unsigned long long *)(self+0x4c0))<=(int)(*(unsigned int *)(self+0x4a4)*3) && !*(int *)(self+0x4b0) && FUN_overlay_16__0211e778(*(void **)(self+0x448))) {
            FUN_overlay_16__0211e85c(*(void **)(self+0x448));
            *(int *)(self+0x4b0)=1;
        } else {
            FUN_overlay_16__02120934(self,*(void **)(self+0x448));
            *(int *)(self+0x4b0)=0;
        }
    }
    ++*(unsigned int *)(self+0x4a8);
}
