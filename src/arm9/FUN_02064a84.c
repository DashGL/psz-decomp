// flags: -O4,p -noThumb
struct S_02064a84 {
    unsigned char entries[15][0x20];
    unsigned int flags[15];
};
struct G_02064a84 {
    unsigned int unk0;
    struct S_02064a84 *ptr;
};
extern struct G_02064a84 DAT_021180e4;
extern void FUN_020656b8(void *, int, int);

void FUN_02064a84(int index) {
    if (DAT_021180e4.ptr == 0) {
        return;
    }
    index--;
    FUN_020656b8(DAT_021180e4.ptr->entries[index], 0, 0x1e);
    DAT_021180e4.ptr->flags[index] = 0;
}
