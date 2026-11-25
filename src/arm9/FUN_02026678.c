// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S26678 {
    int f0;
    void *f4;
    int f8;
    signed char fc;
    char pad[3];
    unsigned short f10;
    unsigned short f12;
    int f14;
};
extern void FUN_0206719c(void *);
extern void FUN_02023fc8(unsigned short, unsigned short, int);
extern int FUN_02024164(void);
extern void FUN_02067220(void *);

int FUN_02026678(struct S26678 *a) {
    char *v4 = (char *)a->f4;
    char *v5 = *(char **)(v4 + 0x64);
    int v6 = 0;
    FUN_0206719c(v5 + 0xe0);
    FUN_02023fc8(a->f10, a->f12, a->f14);
    *(int *)(v5 + 0xf8) = v6;
    if (a->fc == 0 || a->fc == 4) {
        v6 = FUN_02024164();
    }
    FUN_02067220(v5 + 0xe0);
    if (v6 != 0) {
        *(volatile short *)(v4 + 0x70) |= 0x40;
        return -0x4c;
    } else {
        *(volatile short *)(v4 + 0x70) |= 4;
        return 0;
    }
}
