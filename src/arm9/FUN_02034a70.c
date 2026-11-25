// flags: -O4,s
struct Fallback02034a70 {
    unsigned int f0;
    signed char f4;
    unsigned char f5, f6, f7;
};
extern unsigned int DAT_02108cec;
extern struct Fallback02034a70 DAT_020f6d64;
extern void *DAT_020f6d6c[40];
void *FUN_02034a70(int index) {
    if (!(DAT_02108cec & 1)) {
        DAT_020f6d64.f0 = 0;
        DAT_020f6d64.f4 = -1;
        DAT_020f6d64.f5 = 0;
        DAT_020f6d64.f6 = 0;
        DAT_020f6d64.f7 = 0;
        DAT_02108cec |= 1;
    }
    if (index < 0 || index >= 40) return (void *)0x020f6d64;
    {
        void *record = DAT_020f6d6c[index];
        if (!record) record = (void *)0x020f6d64;
        return record;
    }
}
