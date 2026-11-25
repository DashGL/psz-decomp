// Overlay 15 channel-search initialization; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x90 candidate=0x90 words=5 exact_bytes=17 bad_relocs=0
// near: ndiff=5/36 size=0x90 vers=2.0/sp2p3 next="compare branch scheduling and register allocation against ROM"
extern struct { void *log; char *state; } data_0213e8e0;
extern void FUN_020684f4(void *);
extern void FUN_overlay_15__02133d2c(int);
extern void FUN_overlay_15__02133d7c(int);
extern unsigned short FUN_overlay_15__02134378(unsigned short);
int FUN_overlay_15__021342e8(void) {
    unsigned short mac[3];
    unsigned int result;
    FUN_020684f4(mac);
    { unsigned int seed = *(volatile unsigned int *)0x027ffc3c; *(unsigned int *)(data_0213e8e0.state + 0x58) = mac[2] + (mac[1] + (mac[0] + seed)); }
    *(unsigned int *)(data_0213e8e0.state + 0x58) =
        *(unsigned int *)(data_0213e8e0.state + 0x58) * 0x10dcdU + 0x3039U;
    *(unsigned short *)(data_0213e8e0.state + 0x5c) = 0;
    *(unsigned short *)(data_0213e8e0.state + 0x5e) = 101;
    FUN_overlay_15__02133d2c(3);
    result = FUN_overlay_15__02134378(1);
    if (result == 24) {
        FUN_overlay_15__02133d7c(24);
        FUN_overlay_15__02133d2c(9);
        return 0;
    }
    if (result != 2) {
        FUN_overlay_15__02133d7c(result);
        FUN_overlay_15__02133d2c(9);
        return 0;
    }
    return 1;
}
