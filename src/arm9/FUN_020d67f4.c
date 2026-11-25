// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    unsigned char f0;
    unsigned char f1;
    unsigned short f2;
    int f4;
} Addr_d67f4;
typedef struct {
    int f0[3];
    int **fc;
} Host_d67f4;
extern char DAT_020ff98c[];
extern int FUN_020c7590(char *);
extern int FUN_02003e24(char *, char *);
extern Host_d67f4 *FUN_0202820c(char *);
int FUN_020d67f4(char *a, int b, Addr_d67f4 *c, Host_d67f4 **d) {
    unsigned short u = (unsigned short)b;
    c->f1 = 2;
    Host_d67f4 *r4 = 0;
    c->f2 = ((unsigned char)(u >> 8)) | ((u << 8) & 0xff00);
    if (a == 0) {
        c->f4 = 0;
    } else {
        c->f4 = FUN_020c7590(a);
    }
    if (c->f4 == -1) {
        if (FUN_02003e24(a, DAT_020ff98c) != 0) {
            r4 = FUN_0202820c(a);
            if (r4 == 0) {
                return 0;
            }
            c->f4 = **r4->fc;
        }
    }
    if (d != 0) {
        *d = r4;
    }
    return 1;
}
