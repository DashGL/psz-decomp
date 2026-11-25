// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,s
extern char DAT_020ff99c[];
void FUN_0206bfa0(int a, const char *b, unsigned int *c, unsigned int *d);

void FUN_020d6a94(int a, int b) {
    unsigned int sp4;
    unsigned int sp0;
    FUN_0206bfa0(b, DAT_020ff99c, &sp4, &sp0);
    unsigned int r2 = sp4;
    unsigned short r1 = (unsigned short)sp0;
    unsigned int r0 = ((r2 >> 24) & 0x000000ff)
                    | ((r2 >> 8) & 0x0000ff00)
                    | ((r2 << 8) & 0x00ff0000)
                    | ((r2 << 24) & 0xff000000);
    sp4 = r0;
    if (r0 != 0 && r1 != 0) {
        if (*(unsigned int *)(a + 0x104) != r0 || *(unsigned short *)(a + 0x108) != r1) {
            *(unsigned int *)(a + 0x104) = r0;
            *(unsigned short *)(a + 0x108) = r1;
            (*(void (**)(unsigned int, unsigned short, int))(a + 0xa8))(sp4, r1, *(int *)(a + 0x10c));
        }
    }
}
