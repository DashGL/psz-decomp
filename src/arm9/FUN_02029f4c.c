// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xdc, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_0202be1c(void *, const void *, int);
extern void FUN_020656b8(void *, int, int);
extern void FUN_0202bed4(void *, void *);
extern void FUN_0202bdd4(void *);
extern const char DAT_020f6a24[];
extern const char DAT_020f6a2c[];

void FUN_02029f4c(void *a0, void *a1, int a2) {
    char sp00[0x30];
    if ((*(unsigned char *)((char *)a0 + 0x454) ^ a2) != 0) {
        FUN_0202be1c((char *)a0 + 0x3a4, DAT_020f6a24, 4);
    } else {
        FUN_0202be1c((char *)a0 + 0x3a4, DAT_020f6a2c, 4);
    }
    FUN_0202be1c((char *)a0 + 0x3a4, a0, 0x30);
    FUN_020656b8(sp00, 0x36, 0x30);
    FUN_0202be1c((char *)a0 + 0x3a4, sp00, 0x30);
    FUN_0202bed4((char *)a0 + 0x3a4, a1);
    FUN_0202bdd4((char *)a0 + 0x3a4);
    FUN_0202be1c((char *)a0 + 0x3a4, a0, 0x30);
    FUN_020656b8(sp00, 0x5c, 0x30);
    FUN_0202be1c((char *)a0 + 0x3a4, sp00, 0x30);
    FUN_0202be1c((char *)a0 + 0x3a4, a1, 0x10);
    FUN_0202bed4((char *)a0 + 0x3a4, a1);
}
