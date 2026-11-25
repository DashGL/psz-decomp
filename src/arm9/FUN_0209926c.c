// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { signed char a, b; } Pair;
extern void *FUN_02099444(void);
extern int FUN_02099d78(void *, int);
extern unsigned char *FUN_02084778(int, int);
extern void FUN_0209882c(void *);
extern void FUN_02098ed0(void *, void *);
extern void FUN_02098ae8(void *, void *);

void FUN_0209926c(char *s, int mode, int packed) {
    Pair action, raw;
    int level;
    Vec position;
    int v = (unsigned short)packed;
    raw.a = v;
    raw.b = v >> 8;
    action = raw;
    s[4] = ((volatile Pair *)&action)->a;
    s[5] = ((volatile Pair *)&action)->b;
    *(short *)(s + 6) = 0;
    *(int *)(s + 8) = 0;
    level = FUN_02099d78(FUN_02099444(), **(int **)(s + 12));
    {
        int kind = action.a;
        if (kind == 1) {
            if (action.b == 4) {
                *(int *)(s + 8) = 22;
            }
        } else if (kind == 3) {
            if (action.b % 2 != 0) {
                *(int *)(s + 8) = 10 * FUN_02084778(action.b / 2, level)[13];
            }
        } else if (kind == 4) {
            if (action.b % 2 != 0) {
                *(int *)(s + 8) = 10 * FUN_02084778(action.b / 2 + 5, level)[13];
            }
        }
    }
    if (*(int *)(s + 8) > 0) {
        FUN_0209882c(*(void **)(*(char **)(s + 12) + 8));
        position = *(Vec *)(*(char **)(s + 12) + 64);
        FUN_02098ed0(s, &position);
        FUN_02098ae8(*(void **)(*(char **)(s + 12) + 8), &position);
    } else if (mode == 1) {
        FUN_0209882c(*(void **)(*(char **)(s + 12) + 8));
        *(int *)(s + 8) = 5;
    }
}
