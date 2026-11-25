// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x104, exact bytes and relocation targets.
// FUN_0209885c: full 0x104 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,s
struct Obj_0209885c {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
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
    virtual void v7c();
    virtual void v80();
    virtual void v84();
    virtual void v88();
    virtual void v8c();
    virtual void v90();
    virtual void v94();
    virtual void v98();
    virtual int v9c();
};

typedef void (*Cb_0209885c)(Obj_0209885c *, int, int, int);

extern "C" {
extern Obj_0209885c *FUN_02098558(void *, int);
extern int FUN_0203ae60(Obj_0209885c *);
extern void FUN_02095880(Obj_0209885c *, signed char *);
extern Cb_0209885c *DAT_020fb1e4[];
extern int DAT_020f45c4[];

void FUN_0209885c(int *arg0, signed char *arg1, int arg2, int arg3) {
    if (arg1[0] >= 0 && arg1[0] < 7) {
        Obj_0209885c *obj = FUN_02098558(arg0, arg1[0]);
        if (obj != 0 && DAT_020fb1e4[arg1[0]] != 0 && FUN_0203ae60(obj) == 0 && obj->v9c() != 0 && arg1[1] < DAT_020f45c4[arg1[0]]) {
            Cb_0209885c cb;
            FUN_02095880(obj, arg1);
            *(unsigned int *)((char *)obj + 0xf8) &= ~0x80u;
            if ((unsigned char)(signed char)(arg1[0] - 1) <= 1 && (unsigned char)(signed char)(arg1[1] - 2) <= 1) {
                *(unsigned int *)((char *)obj + 0xf8) |= 0x400000u;
            }
            cb = DAT_020fb1e4[arg1[0]][arg1[1]];
            if (cb != 0) {
                cb(obj, 0, arg2, arg3);
                arg0[1] = 2;
            }
            if ((unsigned char)(signed char)(arg1[0] - 1) <= 1 && (unsigned char)(signed char)(arg1[1] - 2) <= 1) {
                *(unsigned int *)((char *)obj + 0xf8) &= ~0x400000u;
            }
        }
    }
}
}
