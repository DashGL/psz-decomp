// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5e, exact bytes and relocation targets.
// FUN_02098ae8: full 0x5e bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,s
struct Vec3_98ae8_02098ae8 {
    int x;
    int y;
    int z;
};
struct Obj_98ae8_02098ae8 {
    virtual int v00();
    virtual int v01();
    virtual int v02();
    virtual int v03();
    virtual int v04();
    virtual int v05();
    virtual int v06();
    virtual int v07();
    virtual int v08();
    virtual int v09();
    virtual int v10();
    virtual int v11();
    virtual int v12();
    virtual int v13();
    virtual int v14();
    virtual int v15();
    virtual int v16();
    virtual int v17();
    virtual int v18();
    virtual int v19();
    virtual int v20();
    virtual int v21();
    virtual int v22();
    virtual int v23();
    virtual int v24();
    virtual int v25();
    virtual int v26();
    virtual int v27();
    virtual int v28();
    virtual int v29();
    virtual int v30();
    virtual int v31();
    virtual int v32();
    virtual int v33();
    virtual int v34();
    virtual int v35();
    virtual int v36();
    virtual int v37();
    virtual int v38();
    virtual int v39();
    char pad[0x98];
    Vec3_98ae8_02098ae8 f9c;
    char pad2[0x18];
    unsigned short fc0;
    unsigned short fc2;
};
extern "C" {
Obj_98ae8_02098ae8 *FUN_0208555c(int);
int FUN_0203ae60(void *);
void FUN_020345f0(Vec3_98ae8_02098ae8 *, void *);
void FUN_02036348(Vec3_98ae8_02098ae8 *, void *, Vec3_98ae8_02098ae8 *);
unsigned short FUN_0205c9e4(int, int);
void FUN_020947a0(Obj_98ae8_02098ae8 *);
void FUN_02098ae8(int *a, void *b) {
    Vec3_98ae8_02098ae8 spc;
    Vec3_98ae8_02098ae8 sp0;
    Obj_98ae8_02098ae8 *r4 = FUN_0208555c(a[0]);
    if (r4 != 0 && FUN_0203ae60(r4) == 0 && r4->v39() != 0) {
        FUN_020345f0(&sp0, &r4->f9c);
        FUN_02036348(&spc, b, &sp0);
        unsigned short ang = FUN_0205c9e4(spc.x, spc.z);
        r4->fc0 = ang;
        r4->fc2 = ang;
        FUN_020947a0(r4);
        a[1] = 9;
    }
}
}
