// flags: -O4,s
typedef struct { char pad0[8]; int f8; char pad1[0xc]; int f18; } G_a4be0;
extern G_a4be0 DAT_0211a664;
extern int FUN_020a5310(void *);
extern void FUN_020c2d94(int, int, int);
extern void FUN_020a4ce4(void *);
extern void FUN_020a4f28(void *);
void FUN_020a4be0(char *a) {
    if (*(int *)(a + 0x3c) == 0) {
        if (DAT_0211a664.f8 != 0 && FUN_020a5310(a) != 0) {
            FUN_020c2d94(2, 2, 0);
            *(int *)(a + 0x3c) = 4;
            DAT_0211a664.f18 = 3;
        } else {
            FUN_020a4ce4(a);
            if (*(int *)(a + 0xd0) > 0) {
                *(int *)(a + 0xd0) -= 1;
            }
        }
    }
    FUN_020a4f28(a);
}
