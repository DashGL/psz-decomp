// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
//cpp
// flags: -O4,p
typedef struct { int x, y, z; } Vec3_020ae8c8;
#pragma thumb off
extern "C" void FUN_0200c938(void *, int);
#pragma thumb reset
extern "C" char *DAT_02108c84;

struct Obj_020ae8c8 {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0c();
    virtual void vf10();
    virtual void vf14(unsigned short);
    virtual void vf18();
    virtual void vf1c();
    virtual void vf20();
    virtual void vf24(int, int, int);
    virtual Vec3_020ae8c8 vf28();
    virtual void vf2c();
    virtual void vf30();
    virtual void vf34();
    virtual void vf38();
    virtual void vf3c();
    virtual void vf40();
    virtual void vf44();
    virtual void vf48();
    virtual void vf4c();
    virtual void vf50();
    virtual void vf54();
    virtual void vf58();
    virtual void vf5c();
    virtual void vf60();
    virtual void vf64();
    virtual void vf68();
    virtual void vf6c();
    virtual void vf70();
    virtual void vf74();
    virtual void vf78();
};

extern "C" void FUN_020ae8c8(char *param_1, int param_2) {
    if (param_2 >= 0 && param_2 < 0xb) {
        *(int *)(param_1 + 0xa8) = param_2;
        int r4 = 0;
        *(int *)(param_1 + 0xac) = 0;
        unsigned short r6 = 0;
        unsigned short r7 = 0;
        Vec3_020ae8c8 local_c;
        FUN_0200c938(&local_c, 0xc);
        char *g = DAT_02108c84;
        if (g != 0) {
            char *sub = *(char **)(g + (*(int *)(g + 0x64) << 2) + 0x40);
            if (sub != 0) {
                r6 = *(unsigned short *)(sub + 0x80);
                r7 = *(unsigned short *)(sub + 0x82);
                r4 = *(int *)(sub + 0x7c);
                local_c = ((Obj_020ae8c8 *)sub)->vf28();
            }
        }
        *(int *)(param_1 + 0xb0) = r4;
        *(unsigned short *)(param_1 + 0xb4) = r6;
        *(int *)(param_1 + 0x7c) = r4;
        *(unsigned short *)(param_1 + 0x80) = r6;
        ((Obj_020ae8c8 *)param_1)->vf14(r7);
        ((Obj_020ae8c8 *)param_1)->vf24(local_c.x, local_c.y, local_c.z);
        ((Obj_020ae8c8 *)param_1)->vf78();
    }
}
