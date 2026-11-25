// flags: -O4,s
typedef unsigned char u8;
typedef struct { u8 b[4]; } Id_12;
extern char *DAT_0213f324;
extern int FUN_overlay_12__0213602c(Id_12 *, unsigned, int *, Id_12 *);
extern void *FUN_02045990(void *, const void *);
extern const char *FUN_overlay_12__021352a8(void *, int, int);
extern int FUN_0209ca50(void *, Id_12 *, int);
extern void FUN_overlay_12__021360f0(void);
extern void FUN_overlay_12__0213611c(void);
extern void FUN_overlay_12__02135168(int *, const char *, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);

int FUN_overlay_12__02135f78(Id_12 *input) {
    char name[24];
    int price;
    Id_12 result, header, nameHeader;
    char *self = DAT_0213f324;
    if (self) {
        unsigned unused;
        Id_12 *hp;
        price = 0;
        header = *input;
        hp = &header;
        if (FUN_overlay_12__0213602c(hp, unused, &price, &result)) {
            const char *format;
            FUN_02045990(self + 16, hp);
            FUN_02045990(self + 20, &result);
            *(int *)(self + 24) = price;
            format = FUN_overlay_12__021352a8(self + 8, 3, 0);
            nameHeader = *input;
            if (!FUN_0209ca50(name, &nameHeader, 1)) name[0] = 0;
            FUN_overlay_12__02135168((int *)(self + 12), format, (unsigned)name, 3,
                (unsigned)FUN_overlay_12__021360f0, (unsigned)FUN_overlay_12__0213611c, 0, 1);
            return 1;
        }
    }
    return 0;
}
