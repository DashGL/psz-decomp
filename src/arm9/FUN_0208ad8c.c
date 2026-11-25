// flags: -O4,s
typedef struct { int a, b; } Pair;
extern const int UNK_020f3e04[];
extern int FUN_0208b09c(void *, void *);
extern int FUN_020848e0(int, int);
extern void *FUN_0209e1a8(int, int);
extern void *FUN_02079114(void);
extern void *FUN_02077f3c(void);
extern void *FUN_02078038(void *);
extern void FUN_020c3788(void *, void *, int, int, int);
extern void FUN_02079160(void *, void *, int, int, int, int, int, int, int);
extern void FUN_020c331c(int, int, int, void *);

void FUN_0208ad8c(char *s, unsigned char *data) {
    void *renderer = FUN_02079114();
    void *label;
    int index, value;
    Pair pair;
    if (renderer) {
        index = FUN_0208b09c(s, data);
        if (!*(int *)(s + 56)) {
            label = FUN_0209e1a8((data + index)[2], 0);
            if (label) {
                FUN_020c3788(*(void **)(s + 48), label, 0, 0, 2);
                *(int *)(s + 56) = 1;
            }
        }
        FUN_020c331c(6, 0xd8000, 0x107000, FUN_02078038(FUN_02077f3c()));
        value = FUN_020848e0((data + index)[2], ((signed char *)(data + index))[5]);
        pair = *(const Pair *)&UNK_020f3e04[23];
        FUN_02079160(renderer, &pair, 2, 3, value, -1, -1, 8, 0);
    }
}
