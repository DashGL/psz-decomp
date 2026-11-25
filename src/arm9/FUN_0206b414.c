// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc8, exact bytes and relocation targets.
// flags: -O4,p -noThumb

struct Slot6B414 {
    unsigned short flag;
    unsigned short pad;
    unsigned short *ptr;
};

struct State6B414 {
    int f0;
    int f4;
    int f8;
    unsigned char padc[0x28 - 0xc];
    unsigned int *f28;
};

extern struct Slot6B414 DAT_0211a1c4[];
extern struct State6B414 DAT_0211a180;
extern void FUN_0206b330(unsigned int);

void FUN_0206b414(int a0, unsigned int data, int err) {
    unsigned short cmd;
    unsigned short val;

    if (err != 0) {
        FUN_0206b330(2);
        return;
    }
    cmd = (unsigned short)((data & 0x7f00) >> 8);
    val = data & 0xff;
    if (cmd >= 0x70 && cmd <= 0x74) {
        unsigned int idx = cmd - 0x70;
        unsigned short *p = DAT_0211a1c4[idx].ptr;
        unsigned short v = (unsigned char)val;
        if (p != 0) {
            *p = v;
        }
        DAT_0211a1c4[idx].flag = 1;
        val = 0;
    } else if (cmd == 0x60) {
        DAT_0211a180.f4 = 1;
    } else if (cmd == 0x62) {
        DAT_0211a180.f8 = 1;
    } else if (cmd == 0x67) {
        if (DAT_0211a180.f28 != 0) {
            *DAT_0211a180.f28 = val;
        }
        val = 0;
    }
    FUN_0206b330(val);
}
