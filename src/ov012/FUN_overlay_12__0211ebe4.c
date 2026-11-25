// flags: -O2 -lang c++
extern "C" {
extern void FUN_02001540(void *, int, unsigned);
extern void FUN_020014d4(void *, const void *, unsigned);
extern unsigned FUN_overlay_12__0211ee38(void *, const void *, unsigned);
extern void *FUN_020ba894(unsigned);
extern void *FUN_overlay_12__0211eb70(void *, const void *, int);
extern void FUN_overlay_12__0211eb48(void *, void *, int);
extern char *FUN_overlay_12__0211ece8(void *, const void *, int);
extern const unsigned char data_02137b38[];
}
struct Cipher {
    virtual ~Cipher();
};
extern "C" char *FUN_overlay_12__0211ebe4(void *self, const unsigned char *input, int length)
{
    unsigned char buffer[33];
    unsigned char key[8];
    unsigned crc;
    if (length > 33) return 0;
    FUN_02001540(buffer, 0, 33);
    FUN_02001540(key, 0, 8);
    FUN_020014d4(buffer, input, length);
    unsigned char *buf = buffer;
    crc = FUN_overlay_12__0211ee38(self, input, length);
    {
        int i;
        unsigned char *dst = buf + length;
        i = 0;
        length = 33 - length;
        for (; i < length; i++)
            dst[i] = ((unsigned char *)&crc)[i % 4];
    }
    {
        unsigned char mask = 0;
        for (int i = 0; i < 6; i++)
            mask |= 1 << i;
        buffer[32] &= ~mask;
    }
    unsigned value = FUN_overlay_12__0211ee38(self, buf + 4, 29);
    *(unsigned *)buffer = value;
    {
        unsigned tmp = value;
        int i = 0;
        do {
            key[i] = data_02137b38[tmp & 0xf];
            tmp >>= 4;
            i++;
        } while (i < 8);
    }
    Cipher *cipher = (Cipher *)FUN_020ba894(0x104c);
    if (cipher)
        cipher = (Cipher *)FUN_overlay_12__0211eb70(cipher, key, 8);
    if (cipher) {
        unsigned *p = (unsigned *)(buf + 4);
        for (int i = 0; i < 7; i++) {
            *p ^= value;
            p++;
        }
        FUN_overlay_12__0211eb48(cipher, buf + 4, 29);
    }
    if (cipher) {
        delete cipher;
    }
    return FUN_overlay_12__0211ece8(self, buffer, 33);
}
