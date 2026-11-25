// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,s
extern int D_02108c64;
extern void FUN_02032dfc(void *, int);
extern int FUN_0206d3dc(void *, int);

int FUN_0207725c(void *a) {
    char buf[0x14];
    switch (((signed char *)(*(void **)((char *)a + 4)))[0x12]) {
    case 0:
    case 3:
    case 4:
        return 0;
    case 1:
        return 1;
    case 2:
        FUN_02032dfc(buf, D_02108c64);
        if (FUN_0206d3dc(buf, 0) != 0) {
            return 3;
        }
        return 2;
    }
    return 0;
}
