// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -noThumb
struct Entry {
    unsigned char f0;
    unsigned char f1;
    unsigned short f2;
    void (*cb)(void *, const unsigned char *, int);
};
extern unsigned int DAT_020f66f8;
extern struct Entry DAT_020f671c[];

void FUN_020189e4(void *param_1, const unsigned char *param_2, int param_3, int param_4) {
    unsigned int i;
    *(int *)param_1 = 0;
    *(const unsigned char **)((char *)param_1 + 8) = param_2;
    *(int *)((char *)param_1 + 0x10) = 0;
    *(unsigned char *)((char *)param_1 + 0x18) = 0x7f;
    *(int *)((char *)param_1 + 4) = 0x1000;
    *(int *)((char *)param_1 + 0x14) = param_4;
    *(unsigned char *)((char *)param_1 + 0x19) = 0;
    *(int *)((char *)param_1 + 0xc) = 0;
    for (i = 0; i < DAT_020f66f8; i++) {
        if (param_2[0] == DAT_020f671c[i].f0 &&
            *(const unsigned short *)(param_2 + 2) == DAT_020f671c[i].f2) {
            if (DAT_020f671c[i].cb != 0) {
                DAT_020f671c[i].cb(param_1, param_2, param_3);
            }
            return;
        }
    }
}
