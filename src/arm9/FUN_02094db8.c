// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int x, y; } Pair;
typedef struct { int words[8]; } Copy_02094db8;

extern Vec UNK_020f44c4;
extern int UNK_020f44a4[];
extern void FUN_0203c824(void *);
extern void FUN_02094a64(void *);
extern void FUN_020bf680(void *, void *, int);
extern void FUN_020c0484(void *, int);
extern void FUN_020be4f8(void *, int, int);
extern void *FUN_020526c8(void *, int, int, int, int, int);
extern void *FUN_020be450(void);
extern int FUN_020beccc(void *, void *, int, void *, void *);

void FUN_02094db8(char *s) {
    Pair point, info;
    Vec params;
    if (*(void **)(s + 592)) {
        FUN_0203c824(*(void **)(s + 592));
        *(int *)(s + 592) = 0;
    }
    *(void **)(s + 592) = FUN_020526c8(s + 156, 12288, *(unsigned short *)(s + 192), 12288, 1, 0);
    FUN_02094a64(s + 596);
    point.x = *(int *)(s + 156);
    point.y = *(int *)(s + 164);
    FUN_020bf680(s + 596, &point, 2048);
    *(int *)(s + 636) |= 1;
    *(int *)(s + 632) = 0;
    FUN_020c0484(s + 632, 1);
    *(int *)(s + 644) = *(int *)(s + 596);
    *(Copy_02094db8 *)(s + 648) = *(const Copy_02094db8 *)(s + 600);
    *(int *)(s + 640) = 2048;
    params = UNK_020f44c4;
    info = *(Pair *)(UNK_020f44a4 + 6);
    info.y = *(int *)(s + 252);
    *(int *)(s + 684) = FUN_020beccc(FUN_020be450(), s + 632, 1, &params, &info);
    FUN_020be4f8(FUN_020be450(), *(int *)(s + 684), 0);
}
