// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p
void FUN_020d8854(int a, int b, int c, int d) {
    switch (b) {
    case 1:
        (*(void (**)(int, int, int, int))(d + 0x838))(d, 2, c, *(int *)(d + 0x83c));
        break;
    case 0:
        (*(void (**)(int, int, int, int))(d + 0x838))(d, 1, c, *(int *)(d + 0x83c));
        break;
    case 2:
        (*(void (**)(int, int, int, int))(d + 0x838))(d, 4, c, *(int *)(d + 0x83c));
        break;
    case 3:
        (*(void (**)(int, int, int, int))(d + 0x838))(d, 6, c, *(int *)(d + 0x83c));
        return;
    }
    if (c != 0 && *(int *)c == *(int *)(d + 0x830) && *(unsigned short *)(c + 4) == *(unsigned short *)(d + 0x834)) {
        *(int *)(d + 0x830) = 0;
    }
}
