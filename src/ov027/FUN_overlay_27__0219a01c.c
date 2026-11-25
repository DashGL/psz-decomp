// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern int FUN_02037294(void *, void *);
extern void FUN_02037910(void *, int);

void FUN_overlay_27__0219a01c(int *p) {
    if (((p[13] == p[2]) ? E1 : E0) || ((p[14] == p[2]) ? E1 : E0)) {
        p[22] = FUN_02037294((void *)p[1], (char *)p[1] + 56);
        return;
    }
    if ((p[2] == p[4]) ? E1 : E0) {
        switch (p[21]) {
        case 0: FUN_02037910(p, p[12]); break;
        case 1: FUN_02037910(p, p[14]); break;
        case 2: FUN_02037910(p, p[15]); break;
        case 3: FUN_02037910(p, p[16]); break;
        case 4: FUN_02037910(p, p[17]); break;
        case 5: FUN_02037910(p, p[18]); break;
        }
    }
}
