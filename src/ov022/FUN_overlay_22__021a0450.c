// flags: -O4,s
struct Row {
    unsigned char pad[8];
    signed char a[6];
    signed char b[6];
};
extern signed char DAT_0211a3c4[];
extern struct Row DAT_021a0e84[];

void FUN_overlay_22__021a0450(unsigned char *self) {
    unsigned char *owner = *(unsigned char **)(self + 4);
    struct Row *row;
    signed char *a;
    signed char *b;
    int ratio;
    if (owner) {
        short *p1 = (short *)(owner + 0x18);
        int *p2 = (int *)(owner + 0x34);
        if (p1 && p2) {
            *(int *)(self + 0x60) = (*p2 << 12) / *p1;
        }
    }
    row = &DAT_021a0e84[DAT_0211a3c4[0xd]];
    a = row->a;
    b = row->b;
    ratio = *(int *)(self + 0x60);
    self[0x40] = b[0] + (a[0] - b[0]) * ratio / 4096;
    self[0x41] = b[1] + (a[1] - b[1]) * ratio / 4096;
    self[0x42] = b[2] + (a[2] - b[2]) * ratio / 4096;
    self[0x43] = b[3] + (a[3] - b[3]) * ratio / 4096;
    self[0x44] = b[4] + (a[4] - b[4]) * ratio / 4096;
    self[0x45] = b[5] + (a[5] - b[5]) * ratio / 4096;
}
