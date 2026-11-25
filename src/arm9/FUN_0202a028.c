// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xdc, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_0202c6e8(void *, const void *, int);
extern void FUN_020656b8(void *, int, int);
extern void FUN_0202c7a0(void *, void *);
extern void FUN_0202c694(void *);
extern const char DAT_020f6a24[];
extern const char DAT_020f6a2c[];

void FUN_0202a028(void *a0, void *a1, int a2) {
    char sp00[0x28];
    if ((*(unsigned char *)((char *)a0 + 0x454) ^ a2) != 0) {
        FUN_0202c6e8((char *)a0 + 0x2ec, DAT_020f6a24, 4);
    } else {
        FUN_0202c6e8((char *)a0 + 0x2ec, DAT_020f6a2c, 4);
    }
    FUN_0202c6e8((char *)a0 + 0x2ec, a0, 0x30);
    FUN_020656b8(sp00, 0x36, 0x28);
    FUN_0202c6e8((char *)a0 + 0x2ec, sp00, 0x28);
    FUN_0202c7a0((char *)a0 + 0x2ec, a1);
    FUN_0202c694((char *)a0 + 0x2ec);
    FUN_0202c6e8((char *)a0 + 0x2ec, a0, 0x30);
    FUN_020656b8(sp00, 0x5c, 0x28);
    FUN_0202c6e8((char *)a0 + 0x2ec, sp00, 0x28);
    FUN_0202c6e8((char *)a0 + 0x2ec, a1, 0x14);
    FUN_0202c7a0((char *)a0 + 0x2ec, a1);
}
