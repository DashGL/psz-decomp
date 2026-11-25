// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02068744(void);
extern int FUN_0206889c(int, int);
extern void FUN_02068850(int, void *);
extern void FUN_0206a718(void);
extern unsigned short DAT_0211a144[];
void FUN_0206a998(void) {
    int i;
    if (DAT_0211a144[0] != 0) {
        return;
    }
    DAT_0211a144[0] = 1;
    FUN_02068744();
    DAT_0211a144[8] = 0;
    *(int *)&DAT_0211a144[2] = 0;
    *(int *)&DAT_0211a144[10] = 0;
    DAT_0211a144[0x1b] = 0;
    DAT_0211a144[0x1a] = 0;
    DAT_0211a144[0x1d] = 0;
    DAT_0211a144[0x1c] = 0;
    for (i = 6; FUN_0206889c(i, 1) == 0; ) {}
    FUN_02068850(6, (void *)FUN_0206a718);
}
