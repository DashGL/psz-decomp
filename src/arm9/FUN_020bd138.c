// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
typedef struct VSub_020bd138 VSub_020bd138;
typedef struct Obj_020bd138 Obj_020bd138;
typedef struct Global_020bd138 Global_020bd138;
// Explicit receiver-only deleting cleanup; concrete child table 020fca4c slot4.
// flags: -O4,s
struct VSub_020bd138 {
    void **vptr;
};
struct Obj_020bd138 {
    const void *vt;
    char pad[0xf34];
    VSub_020bd138 *ff38;
    char pad2[0x14];
    void *ff50;
};
struct Global_020bd138 {
    int f0, f4, f8;
};

extern const void *D_020fc9f4;
extern Global_020bd138 D_0211b3bc;
void FUN_020c0c40(void);
void FUN_020bd198(Obj_020bd138 *);
void FUN_020ba8b4(void *);
void FUN_020bce18(Obj_020bd138 *);
void FUN_020ba8ac(Obj_020bd138 *);
Obj_020bd138 *FUN_020bd138(Obj_020bd138 *a) {
    a->vt = &D_020fc9f4;
    FUN_020c0c40();
    FUN_020bd198(a);
    if (a->ff50 != 0) {
        FUN_020ba8b4(a->ff50);
        a->ff50 = 0;
    }
    if (a->ff38 != 0) {
        if (a->ff38) ((void (*)(void *))(*(void ***)(a->ff38))[1])(a->ff38);
        a->ff38 = 0;
    }
    D_0211b3bc.f8 = 0;
    FUN_020bce18(a);
    FUN_020ba8ac(a);
    return a;
}

