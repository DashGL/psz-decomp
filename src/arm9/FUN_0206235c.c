// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020644b4(void);
extern int FUN_020644c8(void);
extern void FUN_02055690(int, const void *, int, int, int, int);
extern void FUN_020622ac(void);
extern volatile int DAT_02112600[];
extern const char DAT_02112640[];

int FUN_0206235c(void) {
    if (DAT_02112600[6] == 0) {
        int r4 = FUN_020644b4();
        int r0 = FUN_020644c8();
        FUN_02055690(0, DAT_02112640, 0x70, r4, r0, 8);
        return 0;
    } else {
        int r0 = DAT_02112600[7];
        int r1;
        if (r0 != 0 && (r1 = *(int *)(r0 + 0x4bc)) != 0) {
        } else {
            r1 = DAT_02112600[6];
        }
        DAT_02112600[7] = r1;
        FUN_020622ac();
        *(unsigned char *)((char *)DAT_02112600 + 0x26) = *(unsigned char *)(DAT_02112600[7] + 0x4b4);
        *(unsigned char *)((char *)DAT_02112600 + 0x24) = 2;
        return 1;
    }
}
