// flags: -O4,p
int FUN_020a1580(unsigned int bit, unsigned char *arr) {
    int ret;
    if (bit < 0x64) {
        unsigned char b = arr[bit >> 3];
        unsigned char m = (unsigned char)(1 << (bit & 7));
        ret = (b & m) ? 1 : 0;
    } else {
        ret = 0;
    }
    return ret;
}
