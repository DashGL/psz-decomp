// flags: -O4,s
typedef unsigned char u8;

typedef struct ItemCode {
    u8 b[4];
} ItemCode;

typedef struct ExchangeEntry {
    u8 item[4];
    int price;
} ExchangeEntry;

extern ExchangeEntry DAT_0213bec0[];
extern void FUN_overlay_12__02135f68(ItemCode *, int);
extern unsigned FUN_02098d84(ItemCode *);
extern char *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);
extern void *FUN_0203955c(u8 *);
extern void *FUN_02045990(u8 *, const u8 *);
extern int FUN_020b025c(void *, void *);

int FUN_overlay_12__0213602c(ItemCode *input, unsigned unused, int *price, u8 *out) {
    ItemCode code = *input;
    ItemCode base;
    u8 item[16];
    int ok;
    int index;
    int value;
    char *profile;

    if ((int)code.b[2] >= 19 && (int)code.b[2] <= 35) {
        FUN_overlay_12__02135f68(&base, 0);
        code.b[2] = 19;
        if (FUN_02098d84(&base) == FUN_02098d84(&code)) {
            ok = 1;
        } else {
            ok = 0;
        }
    } else {
        ok = 0;
    }
    if (!ok) {
        return 0;
    }
    index = (int)input->b[2] - 19;
    if (index < 0 || index >= 17) {
        return 0;
    }
    value = DAT_0213bec0[index].price;
    *price = value;
    profile = FUN_020870c4(FUN_02086e3c()) + 44;
    if (value <= 0 || *(int *)(profile + 8) < value) {
        return 0;
    }
    FUN_0203955c(item);
    FUN_02045990(item, DAT_0213bec0[index].item);
    if (!FUN_020b025c(FUN_02086e3c() + 16, item)) {
        return 0;
    }
    FUN_02045990(out, item);
    return 1;
}
