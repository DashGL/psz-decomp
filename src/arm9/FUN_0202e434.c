// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x120, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char *DAT_02108c0c;
extern void FUN_020656b8(int, int, int);

void FUN_0202e434(unsigned int *arg0, int arg1) {
    if (arg0 == 0) {
        *(unsigned int *)(DAT_02108c0c + 0x226c) = 3;
        *(unsigned int *)(DAT_02108c0c + 0x2270) = 0;
        *(unsigned int *)(DAT_02108c0c + 0x2274) = 0;
        *(unsigned int *)(DAT_02108c0c + 0x2278) = 0;
    } else {
        *(unsigned int *)(DAT_02108c0c + 0x226c) = arg0[0] & 3;
        if (((4 - (arg0[1] & 3)) & 3) + 12 > arg0[2]) {
            *(unsigned int *)(DAT_02108c0c + 0x2270) = 0;
            *(unsigned int *)(DAT_02108c0c + 0x2274) = 0;
        } else {
            *(unsigned int *)(DAT_02108c0c + 0x2270) = (arg0[1] + 3) & ~3u;
            *(unsigned int *)(DAT_02108c0c + 0x2274) = arg0[2] - ((4 - (arg0[1] & 3)) & 3);
            FUN_020656b8(*(int *)(DAT_02108c0c + 0x2270), 0, *(int *)(DAT_02108c0c + 0x2274));
        }
        *(unsigned int *)(DAT_02108c0c + 0x2278) = arg0[3];
    }
    *(int *)(DAT_02108c0c + 0x227c) = arg1;
}
