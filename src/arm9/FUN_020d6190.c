// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char pad[0x12];
    unsigned char f12;
    unsigned char f13;
} Sub1_d6190;
typedef struct {
    unsigned short f0;
    unsigned short f2;
    int f4;
} Sub2_d6190;
typedef struct {
    int f0[4];
    int f10;
    int f14[6];
    int f2c;
    int f30;
    unsigned short f34;
    unsigned char f36;
    unsigned char f37;
} S_d6190;
extern void FUN_020d5bcc(S_d6190 *);
extern int FUN_020c7824(void);
void FUN_020d6190(S_d6190 *a, Sub1_d6190 *b, Sub2_d6190 *c) {
    if (a->f10 < 2) {
        return;
    }
    a->f30 = c->f4;
    unsigned short v = c->f2;
    a->f34 = ((unsigned char)(v >> 8)) | ((v << 8) & 0xff00);
    a->f36 = 1;
    if (b->f12 == 0) {
        FUN_020d5bcc(a);
        return;
    }
    if (a->f10 == 2) {
        if (a->f37 == 0) {
            FUN_020d5bcc(a);
        }
        a->f10 = 3;
        a->f2c = FUN_020c7824() + 5000;
        return;
    }
    if (b->f13 == 0) {
        FUN_020d5bcc(a);
    }
}
