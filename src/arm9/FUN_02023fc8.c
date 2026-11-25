// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    char pad[0xa];
    short fa;
    char pad2[0xc];
    unsigned short f18;
    unsigned short f1a;
    int f1c;
    int f20;
} Sub;
typedef struct {
    char pad[0xa4];
    Sub *fa4;
} Mid;
typedef struct {
    int f0;
    Mid *f4;
} Outer;
typedef struct {
    char pad[0x50];
    int f50;
} State2;
extern Outer D_021181a0;
extern State2 D_02107054;
extern short FUN_02023e84(void);
void FUN_02023fc8(short a, unsigned short b, int c) {
    Sub *r4 = D_021181a0.f4->fa4;
    if (r4 == 0) {
        return;
    }
    if (c == 0x7f000001) {
        c = D_02107054.f50;
    }
    r4->f18 = r4->f1a = b;
    r4->f1c = r4->f20 = c;
    if (a != 0) {
        r4->fa = a;
        return;
    }
    r4->fa = FUN_02023e84();
}
