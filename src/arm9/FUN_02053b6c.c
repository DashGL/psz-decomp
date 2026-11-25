// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02068a60(void);
extern int FUN_02068be8(void *);
extern int DAT_020f93e8[];
unsigned short FUN_02053b6c(void) {
    int sp0[3];
    if (DAT_020f93e8[0] == 0x10000) {
        FUN_02068a60();
        if (FUN_02068be8(sp0) == 0) {
            DAT_020f93e8[0] = (unsigned short)(sp0[2] + (sp0[1] << 8));
        }
    }
    DAT_020f93e8[0] = (unsigned short)(DAT_020f93e8[0] + 1);
    return DAT_020f93e8[0];
}
