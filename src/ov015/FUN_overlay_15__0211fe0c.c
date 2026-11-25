// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x52, exact bytes and relocation targets.
void FUN_overlay_15__0211f528(int);
int FUN_overlay_15__0211fe60(void *, void *, int);
int FUN_overlay_15__0211ffa4(void *, void *, int);
int FUN_overlay_15__02120080(void *, void *, int);

int FUN_overlay_15__0211fe0c(int cmd, void *a, void *b, int c) {
    switch (cmd) {
    case 0:
        FUN_overlay_15__0211f528(2);
        return FUN_overlay_15__0211fe60(a, b, c);
    case 1:
        FUN_overlay_15__0211f528(3);
        return FUN_overlay_15__0211ffa4(a, b, c);
    case 2:
        FUN_overlay_15__0211f528(5);
        return FUN_overlay_15__02120080(a, b, c);
    }
    return -1;
}
