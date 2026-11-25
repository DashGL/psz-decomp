// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x96, exact bytes and relocation targets.
// flags: -O4,s
struct S10 {
    unsigned short f0;
    unsigned short f2;
    int f4;
    int f8;
    int fc;
};
extern int FUN_020b8118(void *, int *, int *);
extern void FUN_02071d0c(struct S10 *);
extern void FUN_02071be4(void *, short *, int);
extern unsigned short FUN_02071c64(void *, void *, short);
extern void FUN_020c32b4(struct S10 *, int);

void FUN_02071e18(char *param_1, char *param_2) {
    struct S10 local_10;
    int local_14 = 0;
    int local_18 = 0;
    short local_20[4];
    int local_24;
    int local_28;
    if (FUN_020b8118(param_2 + 4, &local_14, &local_18) == 0) {
        int r6;
        int r4;
        FUN_02071d0c(&local_10);
        FUN_02071be4(param_1, local_20, *(int *)(param_2 + 0x10));
        r6 = 0;
        for (r4 = 0; r4 < 4; r4++) {
            short v = local_20[r4];
            if (v != -1) {
                local_24 = (*(short *)(param_2 + 0x18) + (r6 << 3)) << 12;
                local_28 = (*(short *)(param_2 + 0x1a)) << 12;
                local_10.f0 = FUN_02071c64(param_1, param_2, v);
                local_10.f8 = ((local_14 - 10) << 12) + local_24;
                local_10.fc = (local_18 << 12) + local_28;
                if (local_10.fc >= 0x78000) {
                    local_10.fc = 0x78000;
                }
                FUN_020c32b4(&local_10, *(int *)(param_1 + 0x280));
                r6++;
            }
        }
    }
}
