// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    void *f0;
    short f4;
    unsigned short f6;
} Slot;
typedef struct {
    char pad[0xb0];
    Slot *fb0;
} Obj;
extern void FUN_020750c0(void);
extern void FUN_0204b3ac(void *, void *, Obj *, int);
int FUN_02074fc4(Obj *a, void *b, int c, int d) {
    if (b != 0 && c != -1) {
        Slot *s = &a->fb0[c];
        int res;
        s->f0 = b;
        s->f4 |= 1;
        if (d != 0) {
            s->f4 |= 2;
        }
        res = (s->f6 << 16) | c;
        FUN_0204b3ac(s->f0, (void *)FUN_020750c0, a, res);
        return res;
    }
    return -1;
}
