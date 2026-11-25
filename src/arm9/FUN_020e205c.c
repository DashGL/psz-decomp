// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0;
    int f4;
    char pad[0x28];
    int f30;
    long long f34;
    char pad2[0xc];
    char f48[0x100];
    char f148[0x40];
} Sub_e205c;
typedef struct {
    int f0;
    Sub_e205c *f4;
} G_e205c;
extern G_e205c DAT_0211de44;
extern void FUN_02003c8c(char *, void *);
extern long long FUN_02067e0c(void);
extern int FUN_020c890c(int, char *, char *, int, int, int, int);
extern int FUN_020e1f3c(int);
void FUN_020e205c(void *a, void *b, int c, int d) {
    FUN_02003c8c(DAT_0211de44.f4->f48, a);
    FUN_02003c8c(DAT_0211de44.f4->f148, b);
    Sub_e205c *s = DAT_0211de44.f4;
    s->f34 = FUN_02067e0c();
    s->f30 = 1;
    if (FUN_020e1f3c(FUN_020c890c(DAT_0211de44.f4->f0, DAT_0211de44.f4->f48, DAT_0211de44.f4->f148, 1, 0, c, 0)) == 0) {
        DAT_0211de44.f4->f4 = d;
    }
}
