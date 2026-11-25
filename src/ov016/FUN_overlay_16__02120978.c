// flags: -O4,s
#pragma thumb off
extern void FUN_020673f0(void *,unsigned int),FUN_0206971c(int,int),FUN_02069650(int,int,int,int),FUN_02069c30(int);
extern void FUN_020697a4(unsigned int,unsigned int,void *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
extern void FUN_020696dc(int,unsigned int,unsigned int,void (*)(void),int);
#pragma thumb on
extern void FUN_overlay_16__021202d8(void);
void FUN_overlay_16__02120978(unsigned char *self,unsigned int rate,unsigned int samples) {
    unsigned int timer=0xffb0ffU/rate;
    unsigned int period=(samples>>6)*(timer<<1);
    switch(*(int *)(self+0x494)) {
    case 2:
        FUN_020673f0(*(void **)(self+20),(*(unsigned int *)(self+12)*samples)<<1);
        FUN_020673f0(*(void **)(self+24),(*(unsigned int *)(self+12)*samples)<<1);
        FUN_0206971c(3,0);
        FUN_020697a4(0,1,*(void **)(self+20),1,0,(*(unsigned int *)(self+12)*samples)>>1,127,0,timer,0);
        FUN_020697a4(1,1,*(void **)(self+24),1,0,(*(unsigned int *)(self+12)*samples)>>1,127,0,timer,127);
        FUN_020696dc(0,period,period,FUN_overlay_16__021202d8,0);
        FUN_02069650(3,0,1,0);
        FUN_02069c30(1);
        break;
    case 1:
        FUN_020673f0(*(void **)(self+16),(*(unsigned int *)(self+12)*samples)<<1);
        FUN_0206971c(1,0);
        FUN_020697a4(0,1,*(void **)(self+16),1,0,(*(unsigned int *)(self+12)*samples)>>1,127,0,timer,64);
        FUN_020696dc(0,period,period,FUN_overlay_16__021202d8,0);
        FUN_02069650(1,0,1,0);
        FUN_02069c30(1);
        break;
    }
}
