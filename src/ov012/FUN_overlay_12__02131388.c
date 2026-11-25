// flags: -O4,s
enum { E0 = 0, E1 = 1 };

extern void *FUN_overlay_12__0212cbfc(int *);
extern void *FUN_02086e3c(void);
extern signed char *FUN_020870c4(void *);
extern signed char *FUN_overlay_12__0212d2a8(void *, int, int, int);
extern char *FUN_020a0ce8(void);
extern int FUN_020a1580(int, void *);
extern void FUN_overlay_12__0211f880(void *);

void FUN_overlay_12__02131388(char *s)
{
    int count = 0, i;
    void *table = FUN_overlay_12__0212cbfc(&count);
    signed char *player = FUN_020870c4(FUN_02086e3c());
    char *flags;

    *(int *)(s + 68) = 0;
    flags = FUN_020a0ce8();
    for (i = 0; i < 100 && i < count; i++) {
        signed char *entry = FUN_overlay_12__0212d2a8(table, player[33], player[32], player[34]);
        if (entry && ((entry[4] >= 0) ? E1 : E0) != 0 && FUN_020a1580(i, flags + 10) && !FUN_020a1580(i, flags + 23)) {
            *(int *)(s + 72 + 4 * (*(int *)(s + 68))) = i;
            ++*(int *)(s + 68);
        }
    }
    {
        int n = *(int *)(s + 68);
        *(volatile int *)(s + 484) = *(int *)(s + 484);
        *(int *)(s + 476) = n;
    }
    *(int *)(s + 480) = 3;
    FUN_overlay_12__0211f880(s + 476);
    *(int *)(s + 492) = 1;
}
