// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S12_alloc {
    int pad[6];
    char *(*alloc)(int);
    void (*free)(char *);
};
extern struct S12_alloc *DAT_020f6968;
extern void FUN_020656b8(void *, int, int);
extern void FUN_02023f70(void *);
extern int FUN_02025a90(int);
extern void FUN_02023f84(void);

int FUN_02027c18(int param_1) {
    char *r4;
    int local[25];
    int res;
    if (param_1 == 0) {
        return 0;
    }
    r4 = DAT_020f6968->alloc(0xfd0);
    if (r4 == 0) {
        return 0;
    }
    FUN_020656b8(local, 0, 0x64);
    local[16] = (int)r4;
    local[15] = 0xb68;
    local[19] = (int)(r4 + 0xb68);
    local[18] = 0x466;
    FUN_02023f70(local);
    res = FUN_02025a90(param_1);
    FUN_02023f84();
    DAT_020f6968->free(r4);
    return res;
}
