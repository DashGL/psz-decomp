// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets.
// flags: -O4,s
struct Bytes4_B3D54 {
    unsigned char b[4];
};

struct EntryB3D54 {
    int f0;
    struct Bytes4_B3D54 b4;
    unsigned char pad8[12];
    unsigned char b14[12];
    unsigned char b20[4];
    unsigned char b24;
    unsigned char pad25[3];
};

extern unsigned char *DAT_02108c64;
extern struct EntryB3D54 DAT_0211aaa4[];
extern void FUN_020316e8(int *, void *);
extern int FUN_0207f45c(void *, int *);
extern int FUN_020b4414(void *, void *, int);
extern void FUN_0203666c(int *);
extern void *FUN_02046ca4(int *, int, int);
extern void FUN_02048578(void *, int);

void FUN_020b3d54(unsigned char *self) {
    int sp8[25];
    int sp4;
    struct Bytes4_B3D54 sp0;

    FUN_020316e8(&sp4, DAT_02108c64 + 0x14);
    for (int i = 0; i < 50; i++) {
        sp0 = DAT_0211aaa4[i].b4;
        int is_ff = (((sp0.b[0] << 24) | (sp0.b[1] << 16) | (sp0.b[2] << 8) | sp0.b[3]) == -1) ? 1 : 0;
        int flag = 0;
        if (!is_ff && DAT_0211aaa4[i].f0 == 0 && FUN_0207f45c(DAT_0211aaa4[i].b20, &sp4) != 0) {
            flag = 1;
        }
        if (flag) {
            DAT_0211aaa4[i].f0 = FUN_020b4414(&DAT_0211aaa4[i].b4, DAT_0211aaa4[i].b14, DAT_0211aaa4[i].b24);
        }
    }
    FUN_0203666c(sp8);
    sp8[21] = 7;
    void *p = FUN_02046ca4(sp8, 5, 0);
    *(void **)(self + 4) = p;
    if (p != 0) {
        FUN_02048578(p, 0);
    }
}
