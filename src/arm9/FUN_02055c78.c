// flags: -O4,p -noThumb
typedef unsigned int u32;
extern u32 *UNK_021116a0;
extern void FUN_020656b8(void *, int, u32);
#define BYTE(p, n) (((unsigned char *)(p))[n])

void FUN_02055c78(int descriptor) {
    u32 *p = UNK_021116a0;
    u32 size;
    int type, variant;
    FUN_020656b8((unsigned char *)p + 24, 0, 72);
    p[1] = (u32)descriptor;
    p[22] = 0x203f;
    if (!descriptor) {
        return;
    }
    size = 1u << ((descriptor >> 8) & 255);
    type = descriptor & 255;
    variant = (descriptor >> 16) & 255;
    p[6] = size;
    BYTE(p, 84) = 255;
    if (type == 1) {
        switch (size) {
        case 512:
            p[9] = 16;
            p[10] = 1;
            p[11] = 5;
            BYTE(p, 84) = 240;
            break;
        case 8192:
            p[9] = 32;
            p[10] = 2;
            p[11] = 5;
            BYTE(p, 84) = 0;
            break;
        case 65536:
            p[9] = 128;
            p[10] = 2;
            p[11] = 10;
            BYTE(p, 84) = 0;
            break;
        default:
            goto invalid;
        }
        p[7] = p[9];
        p[22] |= 0x40; p[22] |= 0x4300;
        return;
    }
    if (type == 2) {
        switch (size) {
        case 0x40000:
        case 0x80000:
        case 0x100000:
            p[12] = 25;
            p[13] = 300;
            p[20] = 300;
            p[16] = 5000;
            p[22] |= 0x480;
            break;
        case 0x200000:
            p[12] = 23;
            p[13] = 300;
            p[16] = 500;
            p[17] = 5000;
            p[14] = 10000;
            p[15] = 60000;
            BYTE(p, 84) = 0;
            p[22] |= 0x80; p[22] |= 0x5400;
            break;
        case 0x400000:
            p[16] = 600;
            p[17] = 3000;
            p[18] = 70;
            p[19] = 150;
            p[14] = 23000;
            p[15] = 800000;
            BYTE(p, 84) = 0;
            p[8] = 4096;
            p[22] |= 0x1000; p[22] |= 0x4000; p[22] |= 0x8000;
            break;
        case 0x800000:
            if (variant == 0) {
                p[16] = 1000;
                p[17] = 3000;
                p[14] = 68000;
                p[15] = 160000;
                BYTE(p, 84) = 0;
                p[22] |= 0x1000; p[22] |= 0x4000;
            } else if (variant == 1) {
                p[16] = 1000;
                p[17] = 3000;
                p[14] = 68000;
                p[15] = 160000;
                BYTE(p, 84) = 132;
                p[22] |= 0x1000; p[22] |= 0x4000;
            }
            break;
        default:
            goto invalid;
        }
        p[7] = 65536;
        p[9] = 256;
        p[10] = 3;
        p[11] = 5;
        p[22] |= 0xb40;
        return;
    }
    if (type == 3 && (size == 8192 || size == 32768)) {
        p[9] = size;
        p[7] = size;
        p[10] = 2;
        BYTE(p, 84) = 0;
        p[22] |= 0x40; p[22] |= 0x4300;
        return;
    }
invalid:
    p[6] = p[1] = 0;
    UNK_021116a0[0] = 3;
}
