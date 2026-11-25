// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf4, exact bytes and relocation targets.
//cpp
// flags: -O4,p
struct Table_020ae7d4 {
    int f0;
    unsigned short f4;
    unsigned short f6;
    int f8;
    int fc;
};

struct Obj_020ae7d4 {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14(unsigned short);
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24(int, int, int);
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void v6c();
    virtual void v70();
    virtual void v74();
    virtual void v78();
    unsigned char pad[0x78];
    int f7c;
    unsigned short f80;
    unsigned char pad2[0x26];
    int fa8;
    int fac;
    int fb0;
    unsigned short fb4;
    unsigned short fb6;
    int fb8;
    int fbc;
    int fc0;
    unsigned short fc4;
};

extern "C" {
extern Table_020ae7d4 DAT_020f54d4[];
extern unsigned short FUN_020ae960(Obj_020ae7d4 *, unsigned short, unsigned short, int);
extern void FUN_0207137c(Obj_020ae7d4 *);

void FUN_020ae7d4(Obj_020ae7d4 *this_ptr) {
    Table_020ae7d4 *entry = &DAT_020f54d4[this_ptr->fa8];
    int dur = entry->f8;
    if (dur > 0 && this_ptr->fac / 30 < dur) {
        this_ptr->fac += 0x1000;
        int t = ((this_ptr->fac / 30) << 12) / entry->f8;
        if (t >= 0x1000) {
            t = 0x1000;
        }
        int v = (entry->f0 * t + this_ptr->fb0 * (0x1000 - t)) >> 12;
        unsigned short r = FUN_020ae960(this_ptr, this_ptr->fb4, entry->f4, t);
        this_ptr->f7c = v;
        this_ptr->f80 = r;
    } else {
        this_ptr->f7c = entry->f0;
        this_ptr->f80 = entry->f4;
    }
    int mode = entry->fc;
    if (mode == 2) {
        this_ptr->v14(this_ptr->fc4);
        this_ptr->v78();
        return;
    } else if (mode == 1) {
        this_ptr->v24(this_ptr->fb8, this_ptr->fbc, this_ptr->fc0);
        this_ptr->v14(this_ptr->fc4);
        this_ptr->v78();
        return;
    }
    FUN_0207137c(this_ptr);
}
}
