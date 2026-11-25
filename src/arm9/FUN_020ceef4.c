// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
struct S8 {
    int a;
    int b;
};
unsigned int FUN_020c7824(void);
int *FUN_020c7bcc(int);
void FUN_020cb81c(void *, struct S8, int *, void *, int);
void FUN_020cf4f4(void *, void *);

void FUN_020ceef4(void *a, char *b) {
    int *r4 = *(int **)(b + 0x44);
    if (b == 0) {
        return;
    }
    for (; r4 != 0 && r4 != *(int **)(b + 0x48); r4 = (int *)r4[3]) {
        if (r4[0] != 2 && FUN_020c7824() > (unsigned int)r4[5] && r4[2] != 0) {
            if (r4[4] == 0x68) {
                int *r6 = FUN_020c7bcc(0x10);
                struct S8 s;
                s.a = r4[2];
                s.b = r4[1];
                r6[1] = 0;
                r6[3] = 0;
                r6[2] = 0;
                r6[0] = *(int *)(b + 0x10);
                FUN_020cb81c(a, s, r6, 0, 0);
            }
            FUN_020cf4f4(b, r4);
        }
    }
}
