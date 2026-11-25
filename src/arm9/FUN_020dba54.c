// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
typedef struct {
    unsigned char f0 : 4;
} Nib;
extern unsigned char FUN_020dbaf4(void *);
extern void FUN_02065774(const void *, void *, int);
extern const char DAT_02100140[];
extern const char DAT_020f5f3c[];
extern const char DAT_020f5f4c[];

unsigned char FUN_020dba54(void *param_1) {
    unsigned char count;
    unsigned char *p = (unsigned char *)param_1 + 0x300;
    count = FUN_020dbaf4(param_1);
    p += count * 0x24;
    if (((Nib *)((char *)param_1 + 0xd0c))->f0 == 0 || ((Nib *)((char *)param_1 + 0xd0c))->f0 == 4) {
        FUN_02065774(DAT_02100140, p + 4, 8);
        p[3] = 8;
        p[1] = 6;
        count++;
        p += 0x24;
    }
    if (((Nib *)((char *)param_1 + 0xd0c))->f0 == 0 || ((Nib *)((char *)param_1 + 0xd0c))->f0 == 7) {
        FUN_02065774(DAT_020f5f3c, p + 4, 8);
        p[3] = 8;
        p[1] = 9;
        count++;
        p += 0x24;
    }
    if (((Nib *)((char *)param_1 + 0xd0c))->f0 == 0 || ((Nib *)((char *)param_1 + 0xd0c))->f0 == 8) {
        FUN_02065774(DAT_020f5f4c, p + 4, 0xb);
        p[3] = 0xb;
        p[1] = 0xa;
        count++;
    }
    return count;
}
