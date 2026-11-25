// flags: -O4,p -noThumb
void FUN_020015ec(unsigned int dest, unsigned int value, unsigned int count) {
    unsigned int v = value & 255;
    unsigned int align, n;
    if (count >= 32) {
        align = (0u - dest) & 3;
        if (align) {
            count -= align;
            do {
                *(unsigned char *)dest = v;
                dest++;
            } while (--align);
        }
        if (v) {
            v |= ((v << 24) | (v << 16)) | (v << 8);
        }
        n = count >> 5;
        if (n) {
            do {
                ((unsigned int *)dest)[0] = v;
                ((unsigned int *)dest)[1] = v;
                ((unsigned int *)dest)[2] = v;
                ((unsigned int *)dest)[3] = v;
                ((unsigned int *)dest)[4] = v;
                ((unsigned int *)dest)[5] = v;
                ((unsigned int *)dest)[6] = v;
                ((unsigned int *)dest)[7] = v;
                dest += 32;
            } while (--n);
        }
        n = (count & 31) >> 2;
        if (n) {
            do {
                *(unsigned int *)dest = v;
                dest += 4;
            } while (--n);
        }
        count &= 3;
    }
    if (count) {
        do {
            *(unsigned char *)dest = v;
            dest++;
        } while (--count);
    }
}
