// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x36, exact bytes and relocation targets.
extern int FUN_02028010(int, void *);
extern int FUN_020c7458(int, int);

struct S8 {
    unsigned char b[8];
};

int FUN_020c7498(int a, struct S8 *p, unsigned char c) {
    struct S8 local;
    if (*(unsigned short *)(p->b + 2) == 0) {
        return 0;
    }
    local = *p;
    local.b[0] = c;
    return FUN_020c7458(FUN_02028010(a, &local), -1);
}
