// flags: -O4,p
extern unsigned int FUN_02053840(void);
extern void FUN_overlay_15__02133d7c(int);
extern void FUN_overlay_15__02133d2c(int);
extern void FUN_overlay_15__021343e8(void *);
extern int FUN_overlay_15__02134478(void (*)(void *), unsigned short);
unsigned short FUN_overlay_15__02134378(unsigned short channel) {
    unsigned int mask = FUN_02053840();
    if (mask == 0x8000) {
        FUN_overlay_15__02133d7c(3);
        FUN_overlay_15__02133d2c(9);
        return 3;
    }
    if (mask == 0) {
        FUN_overlay_15__02133d7c(22);
        FUN_overlay_15__02133d2c(9);
        return 24;
    }
    while (!((1U << (channel - 1)) & mask)) {
        channel++;
        if (channel > 16) return 24;
    }
    return FUN_overlay_15__02134478(FUN_overlay_15__021343e8, channel);
}
