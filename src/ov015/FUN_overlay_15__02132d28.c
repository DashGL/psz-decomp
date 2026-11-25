// flags: -O4,p
extern unsigned char *DAT_0213e8d4;
extern const unsigned char DAT_0213a6e4[];
extern unsigned long long FUN_02067e0c(void);
extern int FUN_020015ac(const void *, const void *, int);
extern void FUN_overlay_15__02137440(int, void *);

void FUN_overlay_15__02132d28(void *arg)
{
    unsigned long long now = FUN_02067e0c();
    unsigned char *cfg = DAT_0213e8d4;
    int has_zero;
    int has_one;
    int i;
    unsigned char *slot;
    unsigned char *cur;

    if (now < *(unsigned long long *)(cfg + 0x1b88) + 0x17f898ULL) {
        return;
    }

    has_zero = 0;
    has_one = 0;
    i = 0;
    slot = cfg + 0x1300;
    cur = cfg;
    for (; i < 16; i++, slot += 7, cur += 7) {
        if (FUN_020015ac(slot, DAT_0213a6e4, 6) != 0) {
            if (cur[0x1306] != 0) {
                has_one = 1;
            } else {
                has_zero = 1;
            }
        }
    }

    if (has_one != 0 && has_zero != 0) {
        void (*cb)(int) = *(void (**)(int))(cfg + 0x1370);
        if (cb != 0) cb(2);
    } else if (has_one != 0) {
        void (*cb)(int) = *(void (**)(int))(cfg + 0x1370);
        if (cb != 0) cb(1);
    } else if (has_zero == 0) {
        void (*cb)(int) = *(void (**)(int))(cfg + 0x1370);
        if (cb != 0) cb(0);
    }

    *(void **)(DAT_0213e8d4 + 0x1b90) = 0;
    DAT_0213e8d4[0x1b96] = 1;
    FUN_overlay_15__02137440(0, arg);
}
