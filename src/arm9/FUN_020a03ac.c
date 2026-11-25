// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -O4,p
typedef struct { int x, y, z; } Vec3;
extern void FUN_0203020c(void *, int, int);
extern void FUN_020302e8(void *, void *);
extern void FUN_02044904(void *, void *, int);
extern void FUN_02044c08(void *, void *, int);
extern int FUN_0203068c(void *);
extern void FUN_020449cc(void *, int, void *);
extern void FUN_02044a98(void *, int);
extern void *DAT_020fb90c;

void *FUN_020a03ac(char *param_1, int param_2) {
    char local_c[12];
    int local_18[3];
    unsigned char local_1c[4];
    FUN_0203020c(param_1, param_2, 0x1a);
    *(void **)param_1 = &DAT_020fb90c;
    *(int *)(param_1 + 0x30) = **(int **)(param_1 + 4);
    *(int *)(param_1 + 0x34) = 0;
    FUN_020302e8(local_c, param_1);
    FUN_02044904(param_1 + 0x38, local_c, *(unsigned short *)(*(int *)(param_1 + 4) + 0x10));
    *(unsigned short *)(param_1 + 0x5c) = 0;
    *(Vec3 *)(param_1 + 0x60) = *(Vec3 *)(param_1 + 0x1c);
    local_18[0] = 0;
    local_18[1] = 0x3000;
    local_18[2] = 0;
    FUN_02044c08(param_1 + 0x38, local_18, 1);
    local_1c[0] = 2;
    local_1c[1] = 1;
    FUN_020449cc(param_1 + 0x38, FUN_0203068c(param_1), local_1c);
    FUN_02044a98(param_1 + 0x38, 0x14);
    *(int *)(param_1 + 0x64) += 0x1000;
    return param_1;
}
