//cpp
// flags: -O4,p
struct Pair { int a; int b; };
struct Self {
    int state;
    int pad[5];
    int idx;
    int pad2[33];
    int obj;
};
extern "C" {
extern signed char DAT_0211a3c4[];
extern char *DAT_02108c64;
extern const char * const DAT_020fb408[];
extern const char DAT_020fb414[];
extern const char DAT_020fb428[];
int FUN_02084b14(int);
void FUN_020662b4(void *, int, const char *, ...);
int FUN_020ba894(int);
int FUN_020bc2dc(int, const char *, int);
void FUN_020bc418(int, void *, int);

void FUN_0209b030(Self * a) {
    char spc[24];
    int r4;
    int r0;
    a->state = 0;
    r4 = DAT_0211a3c4[0xd];
    Pair *p = (Pair *)(DAT_02108c64 + 0x38);
    volatile Pair q;
    int v = p->a;
    q.a = v;
    q.b = p->b;
    r0 = FUN_02084b14(v);
    if (r0 != -1) {
        a->idx = r0; FUN_020662b4(spc, 0x18, DAT_020fb414, DAT_020fb408[r4], r0 + 1);
        r0 = FUN_020ba894(0x84);
        if (r0 != 0) {
            r0 = FUN_020bc2dc(r0, DAT_020fb428, 0);
        }
        a->obj = r0; if (a->obj != 0) { FUN_020bc418(a->obj, spc, 0); a->state = 2; }
    }
}
}
