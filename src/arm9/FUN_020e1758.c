// flags: -O4,p
unsigned int FUN_020e1758(unsigned char *arr, int count) {
    unsigned int mask = 0;
    int i;
    for (i = 0; i < count; i++) {
        mask |= 1 << arr[i];
    }
    return mask;
}
