// flags: -O4,p -noThumb
typedef struct { unsigned short a, b, c, d, e; } H5;
typedef struct { unsigned short a, b, c, d, e, f; } H6;
unsigned int FUN_0206a4f0(unsigned int self, unsigned int out, unsigned int *cursor) {
    unsigned int word, off, n, i; int type;
    while (cursor[0] < *(unsigned int *)(self + 56)) {
        word = *(unsigned int *)(self + 60 + 4 * cursor[0]);
        type = word & 255;
        *(unsigned char *)out = (unsigned char)word;
        off = word >> 8;
        switch (type) {
        case 1: case 2: case 3: case 4: case 5: {
            H5 *p = (H5 *)(self + off);
            *(H5 *)(out + 2) = *p;
            ++cursor[0];
            return 1;
        }
        case 16: {
            unsigned char *p = (unsigned char *)(self + off);
            while (cursor[1] < (unsigned int)p[1] - p[0] + 1) {
                *(H6 *)out = *(H6 *)(p + 2 + 12 * cursor[1]);
                ++cursor[1];
                return 1;
            }
            break;
        }
        case 17: {
            unsigned char *p = (unsigned char *)(self + off);
            while (cursor[1] < 8) {
                i = cursor[1];
                if (!p[i]) break;
                *(H6 *)out = *(H6 *)(p + 8 + 12 * i);
                ++cursor[1];
                return 1;
            }
            break;
        }
        }
        ++cursor[0];
        cursor[1] = 0;
    }
    return 0;
}
