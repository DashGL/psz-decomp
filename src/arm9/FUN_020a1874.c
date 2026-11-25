// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void FUN_02033658(int, int, void *);
extern void FUN_020aeb9c(void *);
void FUN_020a1874(char *s, int mode) {
    int i;
    switch (mode) {
    case 0:
        if ((*(int *)(s + 60) & 1) == 0) {
            Vec b = *(Vec *)(s + 28);
            FUN_02033658(13, 1, &b);
            {
                Vec a = *(Vec *)(s + 28);
                FUN_02033658(13, 0, &a);
            }
        }
        *(int *)(s + 60) |= 1;
        if (*(int *)(s + 56)) {
            for (i = 0; i < *(short *)(s + 66); i++) {
                FUN_020aeb9c(*(char **)(s + 52) + 116 * i);
            }
        }
        break;
    case 1:
        break;
    }
}
