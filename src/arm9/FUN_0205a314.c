// flags: -O4,p -noThumb
extern unsigned short DAT_027ffc40[];
struct S_02112524 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
};
extern struct S_02112524 DAT_02112524;
extern unsigned char DAT_0211253c[];
extern unsigned char DAT_020f96d4[];
extern void FUN_0205a30c(void);
extern void FUN_0205a304(void);
extern void FUN_0205a290(void);
extern void FUN_0205a298(void);
extern void FUN_0205a248(void);
extern int FUN_020661c4(void);
extern void FUN_02056a88(void);
extern void FUN_02059678(void *a);
extern void FUN_020596e4(void *a, void *b, int c);
extern void FUN_02059c08(void *a, void (*b)(void), int c);
extern void FUN_0205981c(void *a, int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f, void (*g)(void), void (*h)(void));

void FUN_0205a314(int p0) {
    unsigned short *r4;
    unsigned int v200;
    unsigned int v208;

    DAT_02112524.f4 = p0;
    DAT_02112524.f0 = FUN_020661c4();
    DAT_02112524.f8 = 0;
    DAT_02112524.fc = 0;
    DAT_02112524.f10 = 0;
    DAT_02112524.f14 = 0;
    FUN_02056a88();
    FUN_02059678(DAT_0211253c);
    FUN_020596e4(DAT_0211253c, DAT_020f96d4, 3);
    r4 = DAT_027ffc40;
    if (*r4 == 2) {
        DAT_02112524.f8 = -1;
        DAT_02112524.fc = 0;
        DAT_02112524.f10 = -1;
        DAT_02112524.f14 = 0;
        FUN_02059c08(DAT_0211253c, FUN_0205a30c, -1);
        FUN_0205981c(DAT_0211253c, 0, 0, 0, 0, 0, FUN_0205a304, FUN_0205a290);
        return;
    }
    FUN_02059c08(DAT_0211253c, FUN_0205a298, 0x602);
    v200 = *(unsigned int *)((char *)r4 + 0x200);
    if (v200 != 0xffffffff && v200 != 0) {
        v208 = *(unsigned int *)((char *)r4 + 0x208);
        if (v208 != 0xffffffff && v208 != 0) {
            FUN_0205981c(DAT_0211253c, 0, v208, *(unsigned int *)((char *)r4 + 0x20c), v200, *(unsigned int *)((char *)r4 + 0x204), FUN_0205a248, FUN_0205a290);
        }
    }
}
