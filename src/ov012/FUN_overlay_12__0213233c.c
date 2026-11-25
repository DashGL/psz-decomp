//cpp
// flags: -O4,p
extern "C" {
extern int FUN_0203a1a8(void *, int);
extern void *FUN_02086e3c();
extern unsigned char *FUN_020870c4(void *);
}
struct Sub {
    char pad[0x2b];
    unsigned char learned[11];
};
extern "C" int FUN_overlay_12__0213233c(unsigned char *key, int level) {
    int ok = (key[0] == 3) ? 1 : 0;
    if (ok) {
        if (FUN_0203a1a8(key, 1)) {
            Sub *sub = (Sub *)(FUN_020870c4(FUN_02086e3c()) + 0x2c);
            int index = key[2];
            if (index >= 0 && index <= 10) {
                int learned = sub->learned[index];
                if ((level <= 0 && learned > 0) || level <= learned) {
                    return 1;
                }
                return 0;
            }
        }
    }
    return 0;
}
