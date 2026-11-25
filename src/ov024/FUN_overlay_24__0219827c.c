// flags: -O4,s
extern int FUN_02037294(void *, void *);
extern void FUN_02037910(void *, int);
void FUN_overlay_24__0219827c(int *p) {
    int ok = !(p[2] != p[4]);
    if (ok != 0) {
        if (p[1]) p[22] = FUN_02037294((void *)p[1], (char *)p[1] + 56);
        switch (p[21]) {
            case 0: FUN_02037910(p, p[15]); break;
            case 1: FUN_02037910(p, p[16]); break;
            case 2: FUN_02037910(p, p[17]); break;
            case 3: FUN_02037910(p, p[18]); break;
            case 4: FUN_02037910(p, p[19]); break;
            case 5: FUN_02037910(p, p[20]); break;
        }
    }
}
