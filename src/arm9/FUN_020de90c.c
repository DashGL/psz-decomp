// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
extern void FUN_0206719c(char *);
extern void FUN_02067220(char *);
extern void FUN_02066998(char *);

void FUN_020de90c(char *p) {
    if (((unsigned char *)p)[0x1000] == 0xff) {
        FUN_0206719c(p + 0x1bf8);
        *(int *)(p + 0x1c10) = 1;
        FUN_02067220(p + 0x1bf8);
        if (*(int *)(p + 0x1ba4) != 0) {
            FUN_02066998(p + 0x1b38);
        }
    }
}
