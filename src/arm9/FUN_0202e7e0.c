// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    unsigned short f0;
    unsigned short f2;
    int f4;
    int f8;
    int fc;
} Msg;
extern char *D_02108c0c;
void FUN_0202e7e0(unsigned short a, unsigned short b, int c, int d, int e) {
    Msg m;
    char *p = D_02108c0c;
    void (*fn)(Msg *) = *(void (**)(Msg *))(p + 0x227c);
    if (fn == 0) {
        return;
    }
    m.f0 = a;
    m.f4 = c;
    m.f8 = d;
    m.fc = e;
    m.f2 = b;
    (*(void (**)(Msg *))(p + 0x227c))(&m);
}
