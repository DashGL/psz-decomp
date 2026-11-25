// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// Concrete actor resolver and callback ABI: notes/sessions/matching-continue-2026-11-12-resolver-abi.md
//cpp
// flags: -O4,s
extern "C" {
struct Vec3_020a3164 {
    int x, y, z;
};

struct ObjA3164_020a3164 {
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
    virtual void v9c();
    virtual void va0();
    virtual void va4();
    virtual void va8();
    virtual void vac();
    virtual void vb0();
    virtual void vb4();
    unsigned char pad[0xb0];
    Vec3_020a3164 pos;
    unsigned char pad2[0x180];
    int state240;
};

struct MgrA3164_020a3164 {
    unsigned char pad0[0x10];
    int f10;
    unsigned char pad1[0x128];
    int flags[4];
    int pad2;
    Vec3_020a3164 vecs[4];
};

extern int FUN_02044b60(int, int);
extern int FUN_020352a4(void *, int);
extern ObjA3164_020a3164 *FUN_02039200(int);
extern int FUN_0203bf48(ObjA3164_020a3164 *);
extern int FUN_02084cc0(void *);
extern void FUN_02033840(int);
extern void FUN_020946a0(ObjA3164_020a3164 *);
extern void FUN_02080ae0(int, int);
extern void *DAT_02108cf4;
extern int DAT_0211a51c;

void FUN_020a3164(MgrA3164_020a3164 *p0) {
    ObjA3164_020a3164 *obj;
    for (int i = 0; i <= 3; i++) {
        if (p0->flags[i] == 0 && FUN_02044b60(p0->f10, i) != 0) {
            obj = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
            if (obj != 0 && FUN_0203bf48(obj) != 0 && obj->state240 != 0xf) {
                if (i == FUN_02084cc0(&DAT_0211a51c)) {
                    FUN_02033840(1);
                }
                FUN_020946a0(obj);
                obj->vb4();
                FUN_02080ae0(i, 1);
                Vec3_020a3164 v = obj->pos;
                if (i < 4) {
                    p0->vecs[i].x = v.x;
                    p0->vecs[i].y = v.y;
                    p0->vecs[i].z = v.z;
                    p0->flags[i] = 1;
                }
            }
        }
    }
}
}
