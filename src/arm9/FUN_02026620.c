// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    char pad[0x10];
    unsigned short f10;
    unsigned short f12;
    int f14;
} Msg;
typedef struct {
    char pad[0x70];
    short f70;
    signed char f72;
    signed char f73;
    unsigned short f74;
    unsigned short f76;
    int f78;
} Obj;
extern void FUN_02026678(void);
extern Msg *FUN_02025f40(void *, Obj *, int);
extern int FUN_02026088(Obj *, Msg *);
int FUN_02026620(Obj *a) {
    Msg *m = FUN_02025f40((void *)FUN_02026678, a, a->f72);
    if (m == 0) {
        return -0x21;
    }
    m->f10 = a->f74;
    m->f12 = a->f76;
    m->f14 = a->f78;
    a->f70 |= 2;
    return FUN_02026088(a, m);
}
