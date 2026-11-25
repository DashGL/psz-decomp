// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
typedef union { unsigned int w[4]; unsigned char b[16]; } Item;
typedef struct {
    union {
        Key key;
        unsigned char b[16];
    } u;
    int slot;
    int selected;
} Row;
extern Row data_02192d68[];
extern void *FUN_02086e3c(void);
extern void *FUN_020b00ac(void *, int);
extern int FUN_02087138(void *);
extern int FUN_020b086c(void *);
extern void FUN_02039534(void *, const Item *);
extern void FUN_overlay_4__02122148(void *, const void *);
extern unsigned int FUN_02098d84(const unsigned char *);
void FUN_overlay_4__0212306c(int *self)
{
    Item item;
    Row saved;
    Key a, b;
    int i, count, gap, k, j;
    unsigned int left, right;
    if (!FUN_02087138(FUN_02086e3c())) return;
    self[8] = 0;
    for (i = 0; i < 80; i++) {
        item = *(Item *)FUN_020b00ac((char *)FUN_02086e3c() + 16, i);
        if (item.b[0] == 0 && item.b[1] == 17) {
            FUN_02039534(&data_02192d68[self[8]], &item);
            data_02192d68[self[8]].slot = i;
            if (i == FUN_020b086c(FUN_02086e3c()))
                data_02192d68[self[8]].selected = 1;
            else
                data_02192d68[self[8]].selected = 0;
            self[8]++;
        }
    }
    count = self[8];
    gap = 1;
    while (gap < count / 3) gap = 3 * gap + 1;
    while (gap > 0) {
        for (k = gap; k < count; k++) {
            for (j = k - gap; j >= 0; j -= gap) {
                a = data_02192d68[j].u.key;
                left = FUN_02098d84(a.b);
                b = data_02192d68[j + gap].u.key;
                right = FUN_02098d84(b.b);
                if (left > right || (left == right && data_02192d68[j].slot > data_02192d68[j + gap].slot)) {
                    saved = data_02192d68[j];
                    FUN_overlay_4__02122148(&data_02192d68[j], &data_02192d68[j + gap]);
                    FUN_overlay_4__02122148(&data_02192d68[j + gap], &saved);
                } else {
                    break;
                }
            }
        }
        gap /= 3;
    }
    self[7] = self[6];
    self[6] = 1;
}
