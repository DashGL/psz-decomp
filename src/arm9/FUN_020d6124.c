// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6a, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020d6094(char *, int);
extern void FUN_020d59c8(char *, int, int, int);
extern void FUN_020d5bcc(char *);
void FUN_020d6124(char *a, char *b, int c) {
    if (*(unsigned char *)(b + 0x13) == 0) {
        FUN_020d6094(a, c);
    }
    if (*(int *)(a + 0x10) >= 2) {
        return;
    }
    unsigned char v = *(unsigned char *)(b + 0x13);
    if (v != 0) {
        int r1 = 4;
        if (v == 1) {
            r1 = 1;
        } else if (v == 2) {
            r1 = 2;
        }
        FUN_020d59c8(a, r1, -1, 0);
        return;
    }
    *(int *)(a + 0x30) = *(int *)(b + 0xc);
    unsigned short h = *(unsigned short *)(b + 0x10);
    *(unsigned short *)(a + 0x34) = ((unsigned char)(h >> 8)) | ((h << 8) & 0xff00);
    *(int *)(a + 0x24) = 0;
    *(int *)(a + 0x10) = 2;
    ((void (*)(int, int))(*(void **)(a + 0x38)))(2, *(int *)(a + 0x40));
    FUN_020d5bcc(a);
}
