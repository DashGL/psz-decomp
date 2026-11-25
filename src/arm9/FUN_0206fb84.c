//cpp
// flags: -O4,s 

extern "C" {
enum { E0 = 0, E1 = 1 };
typedef struct {
    int x;
    int y;
    int z;
} Vec3_0206fb84;

struct Sub50_0206fb84 {
    unsigned char pad[0xc];
    unsigned short max_hp;
};

struct Obj_0206fb84 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7c();
    virtual void v80(); virtual void v84(); virtual void v88(); virtual void v8c();
    virtual void v90(); virtual void v94(); virtual void v98(); virtual void v9c();
    virtual void va0(); virtual void va4(); virtual void va8(); virtual void vac();
    virtual void vb0(); virtual void vb4(); virtual void vb8(); virtual void vbc();
    virtual void vc0(); virtual void vc4(); virtual void vc8();
    virtual void vcc();
    virtual void vd0();
    virtual void vd4(int, int, int);
    unsigned char pad04[0x4c];
    struct Sub50_0206fb84 sub50;
};

extern int FUN_0203bf3c(void *);
extern int FUN_020390f4(void *);
extern int FUN_0203ae60(void *);
extern int FUN_0203b41c(void *);
extern void FUN_02034680(void *, const void *);
extern void FUN_0203807c(int, int, int, int);
extern void FUN_02050018(int, void *, void *, int);
extern int FUN_02039108(void *, int, int, int);
extern void FUN_020391cc(void *, int);
extern void FUN_02080ae0(int, int);
extern void FUN_020c193c(int, int, int, int, int);
extern int FUN_02085880(int);
extern void FUN_0206f558(void *);
extern void *FUN_020718e0(void);
extern void FUN_020719d8(void *, void *);
extern void FUN_0206f5e4(void);

void FUN_0206fb84(struct Obj_0206fb84 *obj, int r4) {
    unsigned char *r5 = (unsigned char *)obj;
    Vec3_0206fb84 sp24;
    unsigned char sp04[0x20];
    struct Sub50_0206fb84 *sub = &obj->sub50;
    int val = *(unsigned short *)(r5 + 0x14e) + r4;
    if (val < 0) {
        val = 0;
    } else if (val > sub->max_hp) {
        val = sub->max_hp;
    }
    *(unsigned short *)(r5 + 0x14e) = (unsigned short)val;
    if (!FUN_0203bf3c(r5) ||
        ((*(unsigned int *)(r5 + 0xf8) & 0x100) ? E1 : E0) ||
        FUN_020390f4(r5) != 0 || FUN_0203ae60(r5) != 0 ||
        FUN_0203b41c(r5) != 0) return;
    if (*(int *)(r5 + 0x240) == 0xf || *(int *)(r5 + 0x240) == 0xc) {
        FUN_02034680(r5 + 0x9c, r5 + 0xb4);
        if (*(int *)(r5 + 0x8c) != 0) {
            FUN_0203807c(*(int *)(r5 + 0x8c), *(int *)(r5 + 0x9c), *(int *)(r5 + 0xa0), *(int *)(r5 + 0xa4));
        }
    }
    obj->vcc();
    FUN_02050018(1, (void *)FUN_0206f5e4, r5, 0);
    if (FUN_02039108(r5, 8, *(int *)(r5 + 0xd8), 0) != 0) {
        obj->vcc();
        FUN_020391cc(r5, 0);
        FUN_02080ae0(*(int *)(r5 + 0xfc), 1);
        *(int *)(r5 + 0xf8) |= 1;
        *(int *)(r5 + 0xf8) |= 0x100;
        obj->vd4(0x3c, 0, 0);
        FUN_020c193c(1, 0x17, 0, 0, -1);
        if (FUN_02085880(*(int *)(r5 + 0xfc)) == 1 && r4 != 0) {
            struct _V12 { int a[3]; }; *(_V12 *)&sp24 = *(const _V12 *)(r5 + 0x9c);
            sp24.y = 0x1000;
            FUN_0206f558(sp04);
            *(int *)(sp04 + 0) = 0;
            *(int *)(sp04 + 0x14) = 0xa;
            *(int *)(sp04 + 0x10) = -r4;
            FUN_02034680(sp04 + 4, &sp24);
            FUN_020719d8(FUN_020718e0(), sp04);
        }
        *(int *)(r5 + 0x240) = 0x10;
    }
}
}
