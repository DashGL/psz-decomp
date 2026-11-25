// flags: -O4,p -noThumb
struct S5a7ac { int f00; int f04; };
extern struct S5a7ac DAT_020f96d8;
extern void FUN_020656b8(void *a, int b, int c);
extern void FUN_02065774(int a, void *b, int c);
extern void FUN_020580d0(void *a, int b, int c, void *d, int e);

int FUN_0205a7ac(unsigned char *param_1, int param_2, int param_3) {
    unsigned char buf[0x14];
    unsigned char ctx[64];
    unsigned int i;
    FUN_020656b8(buf, 0, 0x14);
    FUN_02065774(DAT_020f96d8.f00, ctx, DAT_020f96d8.f04);
    FUN_020580d0(buf, param_2, param_3, ctx, DAT_020f96d8.f04);
    for (i = 0; i < 0x14; i += 4) {
        if (*(unsigned int *)(buf + i) != *(unsigned int *)(param_1 + i)) {
            break;
        }
    }
    return i == 0x14;
}
