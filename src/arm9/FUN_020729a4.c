// flags: -O4,s
extern int *FUN_020728d4(void *, int);
#pragma thumb off
extern void FUN_02065774(void *, void *, int);
#pragma thumb on

void FUN_020729a4(int *a, int b, int c, void *d, int e, int f) {
    int *r4 = 0;
    int r5 = 0;
    for (; r5 < *a; r5++) {
        int *p = FUN_020728d4(a, r5);
        if (p[0] == b && p[1] == c) {
            r4 = p;
            break;
        }
        if (r4 == 0) {
            unsigned int used = (((volatile int *)p)[0] != -1);
            if (!used) {
                r4 = p;
            }
        }
    }
    if (r4 != 0) {
        r4[0] = b;
        r4[1] = c;
        *((unsigned short *)r4 + 5) = e;
        *((unsigned short *)r4 + 4) = f;
        if (e != 0) {
            FUN_02065774(d, r4 + 3, e);
        }
    }
}
