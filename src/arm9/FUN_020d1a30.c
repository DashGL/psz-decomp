// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x128, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020d1b58(void *, int, const char *);
extern void FUN_020cb778(void *, int, int);
extern const char DAT_020fe554[];

int FUN_020d1a30(void *connection, const char *buffer, int *index, char *key, char *value) {
    int c;
    int i;
    const char *start;

    if (buffer == 0) {
        FUN_02000edc(DAT_020fe554 + 208, DAT_020fe554 + 36, DAT_020fe554, 0xfc);
    }
    if (key == 0) {
        FUN_02000edc(DAT_020fe554 + 116, DAT_020fe554 + 36, DAT_020fe554, 0xfd);
    }
    if (value == 0) {
        FUN_02000edc(DAT_020fe554 + 128, DAT_020fe554 + 36, DAT_020fe554, 0xfe);
    }
    buffer += *index;
    start = buffer;
    if (*buffer++ != 0x5c) {
        FUN_020d1b58(connection, 1, DAT_020fe554 + 224);
        FUN_020cb778(connection, 3, 1);
        return 3;
    }
    for (i = 0; (c = *buffer++) != 0x5c; i++) {
        if (c == 0) {
            FUN_020d1b58(connection, 1, DAT_020fe554 + 224);
            FUN_020cb778(connection, 3, 1);
            return 3;
        }
        if (i == 0x1ff) {
            FUN_020d1b58(connection, 1, DAT_020fe554 + 224);
            FUN_020cb778(connection, 3, 1);
            return 3;
        }
        *key++ = (char)c;
    }
    *key = 0;
    for (i = 0; (c = *buffer++) != 0x5c && c != 0; i++) {
        if (i == 0x1ff) {
            FUN_020d1b58(connection, 1, DAT_020fe554 + 224);
            FUN_020cb778(connection, 3, 1);
            return 3;
        }
        *value++ = (char)c;
    }
    *value = 0;
    *index += (buffer - start) - 1;
    return 0;
}
