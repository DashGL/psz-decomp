// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x52, exact bytes and relocation targets.
extern int FUN_020a9328(void *);
extern int FUN_020a9348(void *);
extern int FUN_020a9384(void *);
extern int FUN_020a93a8(void *);
extern int FUN_020a9440(void *);
extern int FUN_020a9488(void *);

int FUN_020a92d4(void *a, unsigned int b) {
    int r = 0;
    switch (b) {
    case 0:
        r = FUN_020a9328(a);
        break;
    case 1:
        r = FUN_020a9348(a);
        break;
    case 2:
        r = FUN_020a9384(a);
        break;
    case 3:
        r = FUN_020a93a8(a);
        break;
    case 4:
        r = FUN_020a9440(a);
        break;
    case 5:
        r = FUN_020a9488(a);
        break;
    }
    return r;
}
