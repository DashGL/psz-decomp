// flags: -O4,s
typedef struct { unsigned char b[4]; int w[3]; } Record;
typedef struct { int x, y; } Pair;
extern const char UNK_020f3e04[];
extern void *FUN_02086e3c(void), *FUN_02079114(void), *FUN_02077f3c(void);
extern Record *FUN_020b07b0(void *), *FUN_020b0828(void *);
extern int FUN_02087138(void *), FUN_0208b09c(void *, void *), FUN_02078038(void *), FUN_020848e0(int, int);
extern void FUN_0203955c(Record *), FUN_020b5b64(void *, Record *, int), FUN_020b5e54(void *, Record *, int), FUN_020b5f5c(void *, Record *, int), FUN_020b5c64(void *, Record *, int), FUN_020b5d54(void *, Record *, int), FUN_020c331c(int, int, int, int), FUN_02079160(void *, Pair *, int, int, int, int, int, int, int);
#define W(n) (*(int *)(s+(n)))
#define P(n) (*(void **)(s+(n)))
void FUN_0208ab78(char *s, unsigned char *item) {
    Record first, second, current;
    Pair pos;
    void *manager;
    int index, icon, value;
    if (!P(92)) return;
    if (!FUN_02087138(FUN_02086e3c())) return;
    first = *FUN_020b07b0(FUN_02086e3c());
    second = *FUN_020b0828(FUN_02086e3c());
    manager = FUN_02079114();
    if (!manager) return;
    index = FUN_0208b09c(s, item);
    current = *(Record *)s;
    if (W(40)) FUN_0203955c(&current);
    switch ((index + item)[2]) {
    case 1: icon = 47; FUN_020b5b64(P(92), &first, -1); FUN_020b5b64(P(92), &current, W(44)); break;
    case 2: icon = 48; FUN_020b5e54(P(92), &second, -1); FUN_020b5e54(P(92), &current, W(44)); break;
    case 3: icon = 49; FUN_020b5f5c(P(92), &second, -1); FUN_020b5f5c(P(92), &current, W(44)); break;
    case 4: icon = 50; FUN_020b5c64(P(92), &first, -1); FUN_020b5c64(P(92), &current, W(44)); break;
    case 5: icon = 51; FUN_020b5d54(P(92), &first, -1); FUN_020b5d54(P(92), &current, W(44)); break;
    default: return;
    }
    FUN_020c331c(icon, 0xb0000, 0xfb000, W(32));
    FUN_020c331c(6, 0xd8000, 0x107000, FUN_02078038(FUN_02077f3c()));
    value = FUN_020848e0((index + item)[2], ((signed char *)(index + item))[5]);
    pos = *(const Pair *)(UNK_020f3e04 + 84);
    FUN_02079160(manager, &pos, 2, 3, value, -1, -1, 8, 0);
}