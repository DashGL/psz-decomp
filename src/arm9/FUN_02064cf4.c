// flags: -O4,p -noThumb
struct S_021180e4 {
    unsigned int f0;
    unsigned char *ptr;
    unsigned int f8;
    int count;
};
extern struct S_021180e4 DAT_021180e4;

int FUN_02064cf4(unsigned int index) {
    unsigned short i;
    for (i = 0; i < DAT_021180e4.count; i++) {
        if (!(*(unsigned int *)(DAT_021180e4.ptr + (index - 1) * 4 + 0x1e0) & (1 << i))) {
            return 0;
        }
    }
    return 1;
}
