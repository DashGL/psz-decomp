// flags: -O4,s
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb reset
extern char *FUN_02086150(int);
extern int FUN_020c1ec4(int, int);
int FUN_02091694(void) {
    int counts[3], i, best;
    FUN_0200c938(counts, 12);
    for (i = 0; i < 4; i++) {
        char *p = FUN_02086150(i);
        if (p && *(unsigned char *)(p + 144) != 3) {
            switch (*(signed char *)(p + 32)) {
            case 0:
                counts[0]++;
                break;
            case 1:
                counts[1]++;
                break;
            case 2:
                counts[2]++;
                break;
            }
        }
    }
    best = 0;
    if (counts[0] < counts[1]) {
        best = 1;
    }
    if (counts[best] < counts[2]) {
        best = 2;
    }
    return FUN_020c1ec4(24, best);
}
