// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p
extern int DAT_0211dbf8;
extern void FUN_020deab0(void);
extern void FUN_02067184(char *);
extern int FUN_020669c8(char *);
extern void FUN_020666f8(char *, void *, char *, char *, int, int);
extern void FUN_02066a94(char *);
void FUN_020de888(char *a, int b) {
    *(int *)(a + 0x1c10) = 0;
    FUN_02067184(a + 0x1bf8);
    FUN_02067184(a + 0x1a18);
    if (*(int *)(a + 0x1018) == 1) {
        DAT_0211dbf8 = 1;
    } else {
        DAT_0211dbf8 = 0;
    }
    if (*(int *)(a + 0x1ba4) == 0 || FUN_020669c8(a + 0x1b38) != 0) {
        FUN_020666f8(a + 0x1b38, (void *)FUN_020deab0, a, a + 0x1000, 0x1000, b);
        FUN_02066a94(a + 0x1b38);
    }
}
