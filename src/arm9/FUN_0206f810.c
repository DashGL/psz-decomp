// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12a, exact bytes and relocation targets.
// FUN_0206f810: full 0x12a bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,s
struct Vec3_0206f810 {
    union {
        struct {
            int x, y, z;
        };
        int v[3];
    };
};
struct VTable20_0206f810 {
    virtual void v0();
    virtual void v4();
    virtual int v8(void *);
};
extern "C" {
extern int FUN_02085880(int);
extern void FUN_020345f0(void *, void *);
extern void FUN_0203666c(void *);
extern void FUN_02046d94(void *, int, int);
extern void FUN_0206f558(void *);
extern void FUN_02034680(void *, void *);
extern void *FUN_020718e0(void);
extern void FUN_020719d8(void *, void *);
extern void FUN_020c193c(int, int, int, int, int);
extern int FUN_020467e8(void *, int, void *);
extern void *FUN_02090c20(void);
extern void FUN_02090f74(void *, void *, void *, int);

void FUN_0206f810(char *this_ptr) {
    if (FUN_02085880(*(int *)(this_ptr + 0xfc)) != 1) {
        return;
    }
    Vec3_0206f810 pos1;
    FUN_020345f0(&pos1, this_ptr + 0xb4);
    pos1.y = 0x1000;
    int s1[0x19];
    FUN_0203666c(s1);
    s1[0x15] = 0x35;
    s1[0x16] = *(int *)(this_ptr + 0xfc);
    *(Vec3_0206f810 *)&s1[8] = pos1;
    *(unsigned short *)((char *)s1 + 0x3a) = *(unsigned short *)(this_ptr + 0xc0);
    *(unsigned short *)((char *)s1 + 0x3a) = *(unsigned short *)(this_ptr + 0xc0);
    FUN_02046d94(s1, 0, 0);

    Vec3_0206f810 pos2;
    pos2.x = *(int *)(this_ptr + 0xb4);
    pos2.y = 0x1000;
    pos2.z = *(int *)(this_ptr + 0xbc);
    int s2[8];
    FUN_0206f558(s2);
    s2[0] = 7;
    s2[5] = 0xa;
    FUN_02034680(&s2[1], &pos2);
    FUN_020719d8(FUN_020718e0(), s2);

    if ((*(unsigned int *)(this_ptr + 0xf8) & 0x200000u) ? 1 : 0) {
        FUN_020c193c(1, 0x1f, 0, 0, -1);
    } else {
        int out_pair[3];
        int box[4];
        if (((VTable20_0206f810 *)(this_ptr + 0x20))->v8(box) != 0 &&
            FUN_020467e8(out_pair, *(int *)(this_ptr + 0xfc), box) != 0) {
            Vec3_0206f810 pos3;
            short scr[2];
            FUN_020345f0(&pos3, this_ptr + 0xb4);
            FUN_02090f74(scr, FUN_02090c20(), &pos3, 0);
            FUN_020c193c(out_pair[0], out_pair[1], scr[0], scr[1], *(int *)(this_ptr + 0xfc));
        } else {
            FUN_020c193c(1, 0x1f, 0, 0, -1);
        }
    }
}
}
