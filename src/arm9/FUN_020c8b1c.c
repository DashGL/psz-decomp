// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x128, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020d1b74(void *, const char *);
extern void FUN_020d183c(char *, const char *, int);
extern void FUN_020cb184(void *, void *, const char *);
extern void FUN_020cb1a0(void *, void *, int);
extern const char DAT_020fcda4[];

int FUN_020c8b1c(void **connection, int profile, const char *reason) {
    char *iconn;
    char reasonFixed[1025];
    int i;

    if (connection == 0 || *connection == 0) {
        return 2;
    }
    iconn = (char *)*connection;
    if (*(int *)(iconn + 0x108) != 0) {
        return 0;
    }
    if (*(int *)(iconn + 0x1f4) == 4) {
        FUN_020d1b74(connection, DAT_020fcda4);
        return 2;
    }
    if (reason == 0) {
        FUN_020d1b74(connection, DAT_020fcda4 + 48);
        return 2;
    }
    FUN_020d183c(reasonFixed, reason, 0x401);
    for (i = 0; reasonFixed[i] != 0; i++) {
        if (reasonFixed[i] == 0x5c) {
            reasonFixed[i] = 0x2f;
        }
    }
    FUN_020cb184(connection, iconn + 0x210, DAT_020fcda4 + 64);
    FUN_020cb184(connection, iconn + 0x210, DAT_020fcda4 + 76);
    FUN_020cb1a0(connection, iconn + 0x210, *(int *)(iconn + 0x198));
    FUN_020cb184(connection, iconn + 0x210, DAT_020fcda4 + 88);
    FUN_020cb1a0(connection, iconn + 0x210, profile);
    FUN_020cb184(connection, iconn + 0x210, DAT_020fcda4 + 104);
    FUN_020cb184(connection, iconn + 0x210, reasonFixed);
    FUN_020cb184(connection, iconn + 0x210, DAT_020fcda4 + 116);
    return 0;
}
