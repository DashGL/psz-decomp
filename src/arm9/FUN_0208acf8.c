// flags: -O4,s
struct Data8a { unsigned char pad[2]; unsigned char a[3]; signed char b[3]; };
extern int DAT_020f3e04[];
extern int FUN_0208b09c(void *, void *);
extern int FUN_020848e0(int, int);
extern void *FUN_0209e1a8(int, int);
extern void *FUN_02079114(void);
extern void *FUN_02077f3c(void);
extern void *FUN_02078038(void *);
extern void FUN_020c3788(void *, void *, int, int, int);
extern void FUN_02079160(void *, void *, int, int, int, int, int, int, int);
extern void FUN_020c331c(int, int, int, void *);

void FUN_0208acf8(char *s, struct Data8a *data) {
    int index, value, pair[2];
    void *label, *renderer;
    index = FUN_0208b09c(s, data);
    value = FUN_020848e0(data->a[index], data->b[index]);
    if (!*(int *)(s + 56)) {
        label = FUN_0209e1a8(data->a[index], 0);
        if (label) {
            FUN_020c3788(*(void **)(s + 48), label, 0, 0, 2);
            *(int *)(s + 56) = 1;
        }
    }
    pair[0] = DAT_020f3e04[29];
    pair[1] = DAT_020f3e04[30];
    renderer = FUN_02079114();
    if (renderer) FUN_02079160(renderer, pair, 2, 3, value, -1, -1, 8, 0);
    FUN_020c331c(2, 0xf0000, 0x107000, FUN_02078038(FUN_02077f3c()));
}
