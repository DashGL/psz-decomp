// flags: -O4,s
typedef struct {
    unsigned int max_meseta;
    unsigned char pad4[0x20];
    unsigned char f24[0xc8];
    unsigned char fec[0x10];
} Sub;
extern char *FUN_02086e3c(void);
extern char *FUN_0208724c(char *);
extern char *FUN_020870c4(char *);
extern unsigned char *FUN_020b00ac(char *, int);
extern int FUN_0203a820(unsigned char *, int);
extern void FUN_020a12a4(void *, unsigned char *);
extern void FUN_020a145c(void *, int, int);
void FUN_020a0d10(void) {
    int count;
    char *save;
    char *inventory;
    int i;
    char *profile;
    char *stats;
    unsigned int total;

    save = FUN_02086e3c();
    inventory = save + 0x10;
    count = *(short *)(inventory + 8);
    for (i = 0; i < count; i++) {
        unsigned char *item = FUN_020b00ac(inventory, i);
        if (FUN_0203a820(item, 0)) {
            int field;
            Sub *sub = (Sub *)(FUN_0208724c(FUN_02086e3c()) + 0x644);
            FUN_020a12a4(sub->f24, item);
            if (item[1] != 17) {
                for (field = 1; field < 6; field++) {
                    int value = 0;
                    Sub *sub2;
                    switch (field) {
                    case 1: value = (*(int *)(item + 4) & 0x1fc0000) >> 18; break;
                    case 2: value = (*(int *)(item + 4) & 0x3f800) >> 11; break;
                    case 3: value = (*(int *)(item + 4) & 0x7f0) >> 4; break;
                    case 4: value = ((*(int *)(item + 8) & (int)0xfe000000) >> 25) & 0x7f; break;
                    case 5: value = (*(int *)(item + 8) & 0x1fc0000) >> 18; break;
                    }
                    sub2 = (Sub *)(FUN_0208724c(FUN_02086e3c()) + 0x644);
                    FUN_020a145c(sub2->fec, 8, value);
                }
            }
        }
    }
    save = FUN_02086e3c();
    profile = FUN_020870c4(save);
    stats = FUN_0208724c(save);
    total = *(unsigned int *)(stats + 0x640) + (*(unsigned int *)(profile + 0x34) + *(unsigned int *)(profile + 0xcf4));
    stats = FUN_0208724c(FUN_02086e3c());
    if (total > *(unsigned int *)(stats + 0x644)) {
        *(unsigned int *)(stats + 0x644) = total;
    }
}
