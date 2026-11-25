// flags: -O4,s
extern void *FUN_020ba8a0(unsigned int);
extern void FUN_02044570(void *, int, int);
extern void FUN_02044630(void *, int, int);

void FUN_0204411c(char *s) {
    char *owner = *(char **)(s + 20);
    int i;
    *(int *)(s + 164) = *(int *)(owner + 20);
    *(void **)(s + 160) = FUN_020ba8a0(52u * *(unsigned int *)(s + 164));
    for (i = 0; i < *(int *)(s + 164); i++) {
        char *r = *(char **)(owner + 16) + 24 * i;
        char *p = *(char **)(s + 160) + 52 * i;
        *(int *)p = -1;
        *(int *)(p + 4) = 0;
        *(int *)(p + 36) = 2;
        *(int *)(p + 40) = 4096;
        *(int *)(p + 8) = 1;
        *(int *)(p + 12) = 0;
        *(int *)(p + 16) = 0;
        *(int *)(p + 20) = 0;
        *(int *)(p + 24) = 0;
        *(short *)(p + 32) = 0;
        *(short *)(p + 34) = 0;
        *(int *)(p + 4) = i;
        switch (*(signed char *)(r + 3)) {
        case 0:
            *(int *)(p + 8) = 0;
            break;
        case 1:
            *(int *)(p + 8) = 1;
            break;
        case 2:
            *(int *)(p + 8) = 2;
            *(int *)(p + 12) = *(signed char *)(r + 4);
            *(int *)(p + 16) = *(signed char *)(r + 5);
            break;
        }
        *(unsigned int *)(p + 20) = *(unsigned int *)(r + 8);
        *(unsigned int *)(p + 24) = *(unsigned int *)(r + 12);
        *(unsigned int *)(p + 28) = *(unsigned int *)(r + 16);
        switch (*(signed char *)r) {
        case 0: {
            unsigned int *q = *(unsigned int **)(r + 20);
            *(int *)(p + 36) = 0;
            *(unsigned int *)(p + 40) = *q;
            break;
        }
        case 1: {
            char *q = *(char **)(r + 20);
            *(int *)(p + 36) = 1;
            *(unsigned int *)(p + 40) = *(unsigned int *)(q + 4);
            *(unsigned int *)(p + 44) = *(unsigned int *)(q + 8);
            *(unsigned short *)(p + 48) = *(unsigned short *)q;
            break;
        }
        }
        FUN_02044570(s, i, (*(signed char *)(r + 2) & 1) ? 1 : 0);
        if (((*(signed char *)(r + 2) & 2) ? 1 : 0) != 0) {
            *(short *)(p + 32) |= 2;
        } else {
            *(short *)(p + 32) &= ~2;
        }
        FUN_02044630(s, i, (*(signed char *)(r + 2) & 4) ? 1 : 0);
    }
}
