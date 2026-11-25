// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void (*D_02107094)(int);

void FUN_0202b460(unsigned int a, char *b) {
    char *s = *(char **)(b + 0xc);
    unsigned int rem = *(unsigned int *)(s + 0x828) - *(unsigned int *)(s + 0x82c);
    if (a >= rem) {
        if (*(int *)(s + 0x824) != 0) {
            D_02107094(*(int *)(s + 0x824));
        }
        *(int *)(s + 0x824) = 0;
    } else {
        *(unsigned int *)(s + 0x82c) += a;
    }
}
