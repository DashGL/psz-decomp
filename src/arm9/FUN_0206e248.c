// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// Exact92-byte native activation; evidence: notes/reference/entity-family-20261113/closure-proof.json
//cpp
// flags: -O4,s
struct Entity_0206e248 {
    virtual ~Entity_0206e248();
    virtual void slot2(); virtual void slot3(); virtual void slot4(); virtual void activate();
    int f4;
    int f8;
    int fc;
    char tail[196];
};
struct Group_0206e248 {
    int f0;
    Entity_0206e248 *f4[8];
    unsigned short f24[8];
    unsigned int f34;
};
struct Owner_0206e248 {
    char pad0[0x64];
    Group_0206e248 *f64;
};
extern "C" {
void FUN_02036af0(void *);
void FUN_020357e8(void *);
void *FUN_02096488(void);
void FUN_02096af8(void *, int, int);
void FUN_0206e248(Owner_0206e248 *a) {
    Group_0206e248 *r4 = a->f64;
    unsigned int r7 = r4->f34;
    for (int i = 0; i < 8; i++) {
        Entity_0206e248 *r5 = r4->f4[i];
        unsigned short r0 = r4->f24[i];
        if (r5 != 0 && ((r5->f8 & 1) ? true : false) != false && r7 >= r0) {
            FUN_02036af0(r5);
            FUN_020357e8(r5);
            r5->activate();
            FUN_02096af8(FUN_02096488(), r5->fc, 1);
        }
    }
    r4->f34++;
}
}
