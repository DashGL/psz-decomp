// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    char pad[8];
    unsigned char f8;
} Obj;
extern void FUN_02066b00(void);
extern void FUN_02022da4(Obj *, int);
extern void FUN_02022d90(Obj *, int);
void FUN_020241a4(Obj *a) {
    unsigned char v;
    FUN_02066b00();
    v = a->f8;
    if ((unsigned char)(v + 0xfd) <= 1) {
        FUN_02022da4(a, 0x19);
        a->f8 = 7;
        return;
    }
    if (v != 0) {
        FUN_02022d90(a, 0x1a);
    }
}
