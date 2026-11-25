// flags: -O4,p
#pragma thumb off
extern void FUN_020654b4(int val, void *dst, unsigned int size);
#pragma thumb on
struct Entry_020eaa24 {
    unsigned char pad[0xe7];
    unsigned char f_e7;
    unsigned char pad2[0x18];
};
void FUN_020eaa24(struct Entry_020eaa24 *arr, int idx) {
    FUN_020654b4(0, &arr[idx], 0x100);
    arr[idx].f_e7 = 0xff;
}
