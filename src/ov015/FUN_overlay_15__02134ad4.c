// flags: -O4,s
// Overlay 15 wireless connection state tick; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x294 candidate=0x290 words=999 exact_bytes=999 bad_relocs=2
// near: ndiff=999/165 size=0x294 vers=2.0/sp2p3 next="recover switch layout and unsigned remainder helper shape"
extern unsigned char *data_0213e8e8;
extern void FUN_overlay_15__02134a78(void), FUN_overlay_15__02134dac(void), FUN_overlay_15__02134e28(void), FUN_overlay_15__02134e48(void), FUN_overlay_15__02134f7c(void), FUN_overlay_15__02134fa0(void), FUN_overlay_15__02135100(void), FUN_overlay_15__02135114(void), FUN_overlay_15__02134878(void), FUN_overlay_15__021347c4(void);
#pragma thumb off
extern void FUN_020641b0(void);
#pragma thumb on
extern int FUN_overlay_15__021342dc(void);
void FUN_overlay_15__02134ad4(void) {
    unsigned int prior, tick;
    switch(data_0213e8e8[0xa90]) {
    case 1:
        if(data_0213e8e8[0xaac]==1) {
            data_0213e8e8[0xaac]=0;
            FUN_overlay_15__02134a78();
        } else if(data_0213e8e8[0xaac]==2) {
            data_0213e8e8[0xaac]=0;
            data_0213e8e8[0xa90]=34;
        }
        break;
    case 2: FUN_overlay_15__02134dac(); break;
    case 3: FUN_overlay_15__02134e28(); data_0213e8e8[0xa90]=4; break;
    case 4: ++*(unsigned int *)(data_0213e8e8+0xa98); FUN_overlay_15__02134e48(); break;
    case 5: case 6: FUN_overlay_15__02134e48(); break;
    case 7: FUN_overlay_15__02134f7c(); break;
    case 8: case 9: case 10: FUN_overlay_15__02134fa0(); break;
    case 11: FUN_overlay_15__02135100(); break;
    case 16: *(unsigned int *)(data_0213e8e8+0xa9c)=0; data_0213e8e8[0xa90]=17; break;
    case 17:
        prior=(*(unsigned int *)(data_0213e8e8+0xa9c))++;
        if(prior>30) FUN_overlay_15__02135114();
        break;
    case 18:
        FUN_020641b0();
        *(unsigned int *)(data_0213e8e8+0xa9c)=0;
        data_0213e8e8[0xa90]=22;
        break;
    case 19:
        prior=(*(unsigned int *)(data_0213e8e8+0xa9c))++;
        if(prior>30 && FUN_overlay_15__021342dc()==1) {
            FUN_overlay_15__02134878(); data_0213e8e8[0xa90]=20;
        }
        break;
    case 21:
        FUN_overlay_15__021347c4();
        *(unsigned int *)(data_0213e8e8+0xa9c)=0;
        data_0213e8e8[0xa90]=22;
        break;
    case 22:
        prior=(*(unsigned int *)(data_0213e8e8+0xa9c))++;
        if(prior>30 && FUN_overlay_15__021342dc()==1) {
            FUN_overlay_15__02134878(); data_0213e8e8[0xa90]=23;
        }
        break;
    case 24:
        FUN_overlay_15__021347c4();
        *(unsigned int *)(data_0213e8e8+0xa9c)=0;
        data_0213e8e8[0xa90]=25;
        break;
    case 25:
        prior=(*(unsigned int *)(data_0213e8e8+0xa9c))++;
        if(prior>30 && FUN_overlay_15__021342dc()==1) {
            FUN_overlay_15__02134878(); data_0213e8e8[0xa90]=26;
        }
        break;
    case 27:
        FUN_overlay_15__021347c4();
        *(unsigned int *)(data_0213e8e8+0xa9c)=0;
        data_0213e8e8[0xa90]=28;
        break;
    case 28:
        prior=(*(unsigned int *)(data_0213e8e8+0xa9c))++;
        if(prior>30) {
            if(FUN_overlay_15__021342dc()==1) {
                FUN_overlay_15__02134878(); data_0213e8e8[0xa90]=29;
            } else {
                tick=*(unsigned int *)(data_0213e8e8+0xa9c);
                if(tick%30==1 && tick>55) FUN_overlay_15__021347c4();
            }
        }
        break;
    case 32:
        FUN_overlay_15__021347c4();
        *(unsigned int *)(data_0213e8e8+0xa9c)=0;
        data_0213e8e8[0xa90]=33;
        break;
    case 33:
        prior=(*(unsigned int *)(data_0213e8e8+0xa9c))++;
        if(prior>30 && FUN_overlay_15__021342dc()==1) {
            FUN_overlay_15__02134878(); data_0213e8e8[0xa90]=34;
        }
        break;
    case 30: FUN_overlay_15__021347c4(); break;
    case 34: break;
    }
}
