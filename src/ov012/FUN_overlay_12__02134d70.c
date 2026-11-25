// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
typedef struct { unsigned w[3]; } Tail;
extern int *FUN_overlay_12__02135454(void);
extern int FUN_overlay_12__02134f0c(const void *, int, int *), FUN_overlay_12__02135270(unsigned), FUN_overlay_12__0213233c(const void *, int), FUN_overlay_12__02132254(const void *), FUN_overlay_12__02134020(const void *), FUN_overlay_12__021341fc(void);
extern const char *FUN_overlay_12__021352a8(void *, int, int);
extern void FUN_overlay_12__02134f8c(void), FUN_overlay_12__02134fc0(void);
extern void FUN_overlay_12__02135168(void *, const char *, const char *, unsigned, void (*)(void), void (*)(void), unsigned, unsigned);
enum { E0 = 0, E1 = 1 };
int FUN_overlay_12__02134d70(const unsigned *item, int index)
{
    int *self = FUN_overlay_12__02135454();
    int price, category, style, i, last, value, result;
    signed char reverse[8];
    char digits[9];
    const char *format;
    if (self) {
        price = 0;
        if (FUN_overlay_12__02134f0c(item, index, &price)) {
            *(Key *)(self + 5) = *(const Key *)item;
            *(Tail *)(self + 6) = *(const Tail *)(item + 1);
            self[9] = price;
            category = FUN_overlay_12__02135270(self[0]);
            style = 0;
            if (FUN_overlay_12__0213233c(item, (int)(item[1] & 0x3fc000) >> 14)) style = 3;
            else if (!FUN_overlay_12__02132254(item)) style = 1;
            else if (!FUN_overlay_12__02134020(item)) style = 2;
            format = FUN_overlay_12__021352a8(self + 3, category, style);
            value = price;
            last = 0;
            for (i = 0; value > 0 && i < 8; i++) {
                last = i;
                reverse[i] = (value % 10) + '0';
                value /= 10;
            }
            i = 0;
            while (last >= 0) digits[i++] = reverse[last--];
            digits[i] = 0;
            result = (((FUN_overlay_12__021341fc() == 4) ? E1 : E0) != 0) ? 0 : 1;
            FUN_overlay_12__02135168(self + 4, format, digits, 3, FUN_overlay_12__02134f8c, FUN_overlay_12__02134fc0, 0, result);
            return 1;
        }
    }
    return 0;
}
