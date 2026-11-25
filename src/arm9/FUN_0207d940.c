// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa6, exact bytes and relocation targets.
// flags: -O4,s
struct S20_vec {
    int a, b, c;
};
struct S20_item {
    unsigned char b[6];
};
struct S20_buf {
    struct S20_item item;
    unsigned char f6;
    unsigned char f7;
    unsigned char f8;
    unsigned char pad[3];
};
extern void FUN_02047690(void *, void *, int);
extern void FUN_0207a3f4(void *, int, int, int);

void FUN_0207d940(char *param_1, char *param_2, int param_3, int param_4) {
    int r1;
    int f54;
    int v;
    struct S20_vec vec;
    struct S20_buf buf;
    FUN_02047690(param_1, param_2, param_4);
    r1 = -1;
    f54 = *(int *)(param_2 + 0x54);
    if (f54 == 0xc && param_4 == 0) {
        r1 = 7;
    } else if (f54 == 0xc && param_4 == 1) {
        r1 = 8;
    } else if (f54 == 0xd && param_4 == 0) {
        r1 = 9;
    } else if (f54 == 0xd && param_4 == 1) {
        r1 = 10;
    } else if (param_4 == 2) {
        r1 = 5;
    } else if (param_4 == 3) {
        r1 = 6;
    }
    v = 0x1000;
    if (r1 != -1) {
        FUN_0207a3f4(&buf, r1, param_3, 1);
        *(struct S20_item *)((char *)&buf + 6) = buf.item;
        v = ((int)buf.f8 << 12) / 5;
    }
    vec.a = v;
    vec.b = 0x1000;
    vec.c = v;
    *(struct S20_vec *)(param_1 + 0x50) = vec;
}
