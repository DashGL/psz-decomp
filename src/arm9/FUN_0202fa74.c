// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -noThumb
struct Ctx {
    char pad[0x226a];
    unsigned char f226a;
    char pad2[0xd];
    int f2278;
};

struct Req {
    int f0;
    int f4;
    char pad[0x34];
    unsigned short f3c;
};

extern struct Ctx *FUN_0202e424(void);
extern char *FUN_0202fbfc(int *);
extern char *FUN_0202fb00(void);
extern char *FUN_0202fbcc(void);
extern void FUN_020655d8(const void *, void *, int);
extern void FUN_0202fcb8(char *);

void FUN_0202fa74(struct Req *r5, unsigned short r4) {
    struct Ctx *r6 = FUN_0202e424();
    if (r6 == 0) {
        return;
    }
    if (r6->f226a != 0 || r5->f3c != 0) {
        return;
    }
    char *r7 = FUN_0202fbfc(&r5->f4);
    if (r7 == 0) {
        r7 = FUN_0202fb00();
    }
    if (r7 == 0 && r6->f2278 == 1) {
        r7 = FUN_0202fbcc();
    }
    if (r7 == 0) {
        return;
    }
    *(unsigned short *)(r7 + 2) = r4;
    FUN_020655d8(r5, r7 + 0x10, 0xc0);
    FUN_0202fcb8(r7);
}
