// flags: -O4,p
int FUN_020dd1b8(unsigned int *dst, unsigned int val, unsigned int shift, unsigned int mask) {
    if (val & ~mask) {
        return 0;
    }
    *dst = (*dst & ~(mask << shift)) | (val << shift);
    return 1;
}
