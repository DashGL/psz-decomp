// flags: -O4,s
typedef unsigned char u8;
typedef struct { u8 b[4]; } Head4;
typedef struct { unsigned w[3]; } Tail12;
typedef struct { Head4 head; Tail12 tail; } Item16;

extern char *FUN_overlay_12__02135cac(void);
extern int FUN_overlay_12__02135b54(void *, int, int, int *), FUN_overlay_12__02135270(unsigned);
extern const char *FUN_overlay_12__021352a8(void *, int, int);
extern void FUN_overlay_12__02135bc4(void), FUN_overlay_12__02135bec(void);
extern void FUN_overlay_12__02135168(int *, const char *, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);

int FUN_overlay_12__02135a80(Item16 *item, int index, int blocked)
{
    char *self = FUN_overlay_12__02135cac();
    int amount, i, last, value, count;
    char digits[8], text[9];
    const char *format;
    if (self) {
        amount = 0;
        if (FUN_overlay_12__02135b54(item, index, blocked, &amount)) {
            *(Head4 *)(self + 20) = item->head;
            *(Tail12 *)(self + 24) = item->tail;
            *(int *)(self + 36) = index;
            *(int *)(self + 40) = amount;
            format = FUN_overlay_12__021352a8(self + 12, FUN_overlay_12__02135270(*(unsigned *)self), 0);
            value = amount;
            last = 0;
            count = 0;
            while (value > 0 && count < 8) {
                last = count;
                digits[count] = (char)(value % 10 + 48);
                value /= 10;
                count++;
            }
            i = 0;
            while (last >= 0) text[i++] = digits[last--];
            text[i] = 0;
            FUN_overlay_12__02135168((int *)(self + 16), format, (unsigned)text, 3,
                (unsigned)FUN_overlay_12__02135bc4, (unsigned)FUN_overlay_12__02135bec, 0, 1);
            return 1;
        }
    }
    return 0;
}
