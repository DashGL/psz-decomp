// flags: -O4,s
typedef unsigned char u8;

typedef struct Rec24 {
    unsigned w[6];
} Rec24;

typedef struct ExchangeEntry {
    u8 item[4];
    unsigned price;
} ExchangeEntry;

extern const Rec24 DAT_0213be8c;
extern const ExchangeEntry DAT_0213bec0[];
extern char *FUN_02086e3c(void);
extern void FUN_overlay_12__02135f68(u8 *, int);
extern int FUN_020b04f4(void *, void *);
extern void *FUN_020b00ac(void *, int);
extern int FUN_020849d4(void *);
extern void FUN_overlay_12__021323b0(void *, void *);
extern int FUN_020b0494(void *);
extern const char *FUN_overlay_12__021352a8(void *, int, int);
extern void FUN_overlay_12__02136160(void);
extern void FUN_overlay_12__02135168(void *, const char *, unsigned, unsigned, void (*)(void), unsigned, unsigned, unsigned);
extern void FUN_020c193c(unsigned, unsigned, int, unsigned, int);

void FUN_overlay_12__02135e7c(char *self) {
    const char *message;
    int i;
    char *inventory = FUN_02086e3c() + 16;
    Rec24 record;
    Rec24 tmpl;
    u8 header[4];
    int count = 0;
    int capacity;

    i = 0;
    tmpl = DAT_0213be8c;
    for (; i < 17; i++) {
        int index;
        FUN_overlay_12__02135f68(header, i);
        index = FUN_020b04f4(inventory, header);
        if (index != -1) {
            void *item = FUN_020b00ac(inventory, index);
            if (FUN_020849d4(item) > 0) {
                record = tmpl;
                record.w[0] = (unsigned)index;
                record.w[5] = DAT_0213bec0[i].price;
                FUN_overlay_12__021323b0(item, &record);
                count++;
            }
        }
    }

    capacity = *(short *)(inventory + 8);
    message = 0;
    if (FUN_020b0494(inventory) >= capacity) {
        message = FUN_overlay_12__021352a8(self + 8, 3, 4);
    } else if (count == 0) {
        message = FUN_overlay_12__021352a8(self + 8, 3, 5);
    }

    if (message != 0) {
        FUN_overlay_12__02135168(self + 12, message, 0, 2, FUN_overlay_12__02136160, 0, 2, 0);
        FUN_020c193c(0, 5, 0, 0, -1);
    }
}
