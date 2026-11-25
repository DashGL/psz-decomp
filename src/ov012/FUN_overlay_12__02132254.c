//cpp
// flags: -O4,p
extern "C" {
extern void *FUN_02086e3c(void);
extern unsigned char *FUN_020870c4(void *);
extern int FUN_0203a1a8(void *, int);
extern unsigned char *FUN_02084568(void *);
extern unsigned char *FUN_020845a8(void *);
extern signed char FUN_020848d0(int, int);
}

extern "C" int FUN_overlay_12__02132254(unsigned char *key) {
    unsigned char *player = FUN_020870c4(FUN_02086e3c());
    int category = *(signed char *)(player + 33);
    int type = *(signed char *)(player + 32);
    int job = *(signed char *)(player + 34);
    int level = player[86];
    switch (key[0]) {
    case 0: {
        unsigned char *meta;
        if (FUN_0203a1a8(key, 17)) break;
        meta = FUN_02084568(key);
        if (meta) {
            int ok = 0;
            if ((meta[7] <= level ? 1 : 0) != 0) {
                if ((((*(volatile unsigned int *)meta >> 18) & (1u << category)) ? 1 : 0) != 0) {
                    unsigned int bits = *(volatile unsigned int *)meta;
                    if ((((bits >> 20) & (1u << FUN_020848d0(type, job))) ? 1 : 0) != 0) {
                        ok = 1;
                    }
                }
            }
            return ok;
        }
        return 0;
    }
    case 1: {
        unsigned char *meta = FUN_020845a8(key);
        if (meta) {
            int ok = 0;
            if ((meta[13] <= level ? 1 : 0) != 0) {
                if (((*(volatile unsigned short *)(meta + 14) & (1u << category)) ? 1 : 0) != 0) {
                    unsigned int bits = *(volatile unsigned short *)(meta + 14);
                    if ((((bits >> 2) & (1u << FUN_020848d0(type, job))) ? 1 : 0) != 0) {
                        ok = 1;
                    }
                }
            }
            return ok;
        }
        return 0;
    }
    }
    return 1;
}
