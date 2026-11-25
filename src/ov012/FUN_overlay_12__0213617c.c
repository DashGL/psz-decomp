// flags: -O2,s
typedef unsigned char u8;
typedef struct { u8 b[4]; } Head4;
typedef struct { unsigned w[3]; } Tail12;
typedef struct { Head4 head; Tail12 tail; } Item16;

extern char *FUN_02086e3c(void), *FUN_020870c4(void *);
extern int FUN_020b04f4(void *, void *), FUN_020b0450(void *, int, int), FUN_020b028c(void *, void *, int);
extern void FUN_020c193c(unsigned, unsigned, int, unsigned, int);
extern void *FUN_0203955c(void *), *FUN_02045990(void *, const void *);
extern void FUN_overlay_12__021341d4(int, int), FUN_0209bf08(void *, int), FUN_overlay_12__021341f0(void);
extern const char *FUN_overlay_12__021352a8(void *, int, int);
extern int FUN_0209ca8c(void *, void *, int);
extern void FUN_overlay_12__02136134(void);
extern void FUN_overlay_12__02135168(int *, const char *, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);

int FUN_overlay_12__0213617c(char *self)
{
    char *inventory = FUN_02086e3c() + 16, *profile;
    int index = FUN_020b04f4(inventory, self + 16);
    Item16 item;
    char name[28];
    const char *format;
    if (index == -1) return 0;
    if (!FUN_020b0450(inventory, index, 1)) return 0;
    profile = FUN_020870c4(FUN_02086e3c()) + 44;
    *(unsigned *)(profile + 8) -= *(unsigned *)(self + 24);
    FUN_020c193c(5, 3, 0, 0, -1);
    FUN_0203955c(&item);
    FUN_02045990(&item, self + 20);
    FUN_overlay_12__021341d4(8, 1);
    FUN_0209bf08(&item, 0);
    FUN_overlay_12__021341f0();
    if (FUN_020b028c(inventory, &item, 0) == -1) return 0;
    format = FUN_overlay_12__021352a8(self + 8, 3, 6);
    if (!FUN_0209ca8c(name, &item, 1)) name[0] = 0;
    FUN_overlay_12__02135168((int *)(self + 12), format, (unsigned)name, 1, (unsigned)FUN_overlay_12__02136134, 0, 0, 0);
    *(Head4 *)(self + 28) = item.head;
    *(Tail12 *)(self + 32) = item.tail;
    return 1;
}
