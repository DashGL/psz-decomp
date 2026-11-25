// flags: -O4,p
extern int FUN_02037294(void *, void *);
extern void FUN_02037910(void *, int);
enum { E0 = 0, E1 = 1 };

void FUN_overlay_25__0219a2cc(int *p) {
    if ((p[2] == p[4] ? E1 : E0) != 0) {
        p[21] = FUN_02037294((void *)p[1], (char *)p[1] + 56);
        switch (p[20]) {
        case 0:
            FUN_02037910(p, p[13]);
            break;
        case 1:
            p[22] = 0;
            FUN_02037910(p, p[16]);
            break;
        case 2:
            FUN_02037910(p, p[17]);
            break;
        case 3:
            p[22] += 1;
            FUN_02037910(p, p[18]);
            break;
        case 4:
            p[22]++;
            FUN_02037910(p, p[19]);
            break;
        }
    }
}
