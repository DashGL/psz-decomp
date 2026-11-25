// Overlay 16 video frame conversion and ring advance; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x184 candidate=0x180 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/97 size=0x184 vers=2.0/sp2p3 next="recover ARM conversion local record scheduling"
// flags: -noThumb
#pragma thumb on
extern void *FUN_overlay_16__021202f8(unsigned int);
#pragma thumb off
extern void *FUN_overlay_16__0211fe94(void);
extern void FUN_overlay_16__0212d224(void *), FUN_overlay_16__0211f71c(void *);
int FUN_overlay_16__0211f288(unsigned int *self,unsigned int output,unsigned int stride,int mode) {
    unsigned int p[9];
    if(self[39]>=self[40]) return 0;
    if(mode) {
        if(!self[26]) {
            self[26]=(unsigned int)FUN_overlay_16__021202f8(self[5]<<8);
            if(!self[26]) return 0;
        }
        if(!self[27]) {
            self[27]=(unsigned int)FUN_overlay_16__021202f8((self[5]>>1)<<8);
            if(!self[27]) return 0;
        }
        p[0]=((unsigned int *)self[23])[self[48]];
        p[1]=((unsigned int *)self[24])[self[48]];
        p[2]=self[26];p[3]=self[27];p[4]=self[4];p[5]=self[5];
        p[6]=((unsigned int *)self[25])[self[48]];
        p[7]=(unsigned int)FUN_overlay_16__0211fe94();
        if (mode == 2) p[8] = 0;
        else p[8] = 1;
        FUN_overlay_16__0212d224(p);
        self[15]=self[26];self[16]=self[27];
    } else {
        self[15]=((unsigned int *)self[23])[self[48]];
        self[16]=((unsigned int *)self[24])[self[48]];
    }
    self[17]=output;self[18]=stride<<1;
    FUN_overlay_16__0211f71c(self+15);
    ++self[39];
    ++self[48];
    if(self[48]==self[41]) self[48]=0;
    return 1;
}
