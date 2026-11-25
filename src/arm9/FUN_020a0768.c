// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x110, exact bytes and relocation targets.
//cpp
// flags: -O4,s
struct Vec3_020a0768 {
    int x, y, z;
};
struct Obj_020a0768 {
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
};

extern "C" {
extern int FUN_0204243c(void *, int);
extern int FUN_0204260c(void *, int, void *, void *);
extern void FUN_0200c938(void *, int);
extern void FUN_0205b960(void *, void *, void *);
extern void FUN_020345f0(void *, void *);
extern void FUN_0205b0f0(void *, void *, void *);
extern void FUN_020bbfbc(void *, int);
extern void FUN_02034680(void *, void *);
extern void FUN_02035408(void *, int, int, int);
extern void FUN_02040744(void *);

void FUN_020a0768(Obj_020a0768 *this_ptr) {
    void *p9c = *(void **)((char *)this_ptr + 0x9c);

    if (p9c != 0) {
        if (FUN_0204243c(p9c, 0) == 0) {
            this_ptr->v64();
            return;
        }
        char m78[0x30];
        char m54[0x24];
        if (FUN_0204260c(*(void **)((char *)this_ptr + 0x9c), 0, m78, m54) != 0) {
            struct Vec3_020a0768 v48;
            FUN_0200c938(&v48, 0xc);
            FUN_0205b960(&v48, m78, &v48);
            struct Vec3_020a0768 v3c;
            FUN_020345f0(&v3c, &v48);
            struct Vec3_020a0768 v30 = { 0, -0x1000, 0 };
            FUN_0205b0f0(&v30, m54, &v30);
            struct Vec3_020a0768 v24;
            FUN_020345f0(&v24, &v30);
            struct Vec3_020a0768 v18 = { 0, 0, -0x1000 };
            FUN_0205b0f0(&v18, m54, &v18);
            struct Vec3_020a0768 v0c;
            FUN_020345f0(&v0c, &v18);
            FUN_020bbfbc(&v3c, *(unsigned short *)((char *)this_ptr + 0xac));
            FUN_020bbfbc(&v24, *(unsigned short *)((char *)this_ptr + 0xac));
            v3c.x += *(int *)((char *)this_ptr + 0xa0);
            v3c.y += *(int *)((char *)this_ptr + 0xa4);
            v3c.z += *(int *)((char *)this_ptr + 0xa8);
            FUN_02034680((char *)this_ptr + 0x18, &v3c);
            struct Vec3_020a0768 v00;
            FUN_02035408(&v00, v3c.x + v24.x, v3c.y + v24.y, v3c.z + v24.z);
            FUN_02034680((char *)this_ptr + 0x24, &v00);
            FUN_02034680((char *)this_ptr + 0x30, &v0c);
            FUN_02040744(this_ptr);
        }
    }
}
}
