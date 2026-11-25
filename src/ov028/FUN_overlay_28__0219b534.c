// flags: -O4,s
extern int FUN_02037578(void *);
extern int FUN_02037208(void *, int);
int FUN_overlay_28__0219b534(int *p) {
    if (!p[21]) {
        switch (FUN_02037578((void *)p[1])) {
        case 0: p[21] = 1; break;
        case 1: p[21] = FUN_02037208((void *)p[1], 2) + 1; break;
        case 2: p[21] = FUN_02037208((void *)p[1], 2) + 2; break;
        default: p[21] = 10; break;
        }
    } else {
        p[21]--;
    }
    return p[21] != 0;
}
