// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern void FUN_020c7488(int, int);
extern void FUN_020c7478(int);
extern void FUN_020d25c8(void);
extern void FUN_020c7bec(int);
extern struct { int f0; int f4; int f8; } D_020fe694;
extern struct { char pad[0xc]; int f0c; int f10; int f14; char pad2[0x10]; int f28; } D_0211d094;

void FUN_020d1fb0(void) {
    if (D_020fe694.f8 != -1) {
        FUN_020c7488(D_020fe694.f8, 2);
        FUN_020c7478(D_020fe694.f8);
    }
    D_020fe694.f8 = -1;
    FUN_020d25c8();
    if (D_0211d094.f28 != 0) {
        FUN_020c7bec(D_0211d094.f28);
        D_0211d094.f28 = 0;
        D_0211d094.f14 = 0;
        D_0211d094.f0c = 0;
    }
}
