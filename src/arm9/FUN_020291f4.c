// flags: -O4,p -noThumb
typedef unsigned int u32; typedef unsigned short u16;
extern void *(*UNK_02107068)(u32); extern void (*UNK_02107094)(void *);
extern void FUN_0202d6c4(void *, void *, int, u32), FUN_0202d0b0(void *, void *, void *, u32, void *), FUN_02028b30(u32), FUN_0202d720(void *, void *, int, u32);
extern u32 FUN_02028ae4(void); extern int FUN_020015ac(void *, void *, u32);
int FUN_020291f4(char *self, u32 *key) {
    u16 *buffer, *signature, *exponent, *modulus; u32 old; int count, result, i; unsigned char *bytes;
    if (!*(void **)(self + 0x5a4) || !*(int *)(self + 0x5a8) || !key[4] || !key[3] || !key[2] || !key[1]) return 2;
    count = (int)(key[1] << 1) / 2; buffer = UNK_02107068((u32)count << 3); if (!buffer) return 2;
    signature = buffer + count; exponent = signature + count; modulus = exponent + count;
    FUN_0202d6c4(signature, *(void **)(self + 0x5a4), *(int *)(self + 0x5a8), count);
    FUN_0202d6c4(exponent, (void *)key[4], key[3], count); FUN_0202d6c4(modulus, (void *)key[2], key[1], count);
    old = FUN_02028ae4(); FUN_0202d0b0(buffer, signature, exponent, count, modulus); FUN_02028b30(old);
    FUN_0202d720(signature, buffer, key[1], count);
    bytes = (unsigned char *)signature;
    result = 0;
    if (bytes[0] != 0 || bytes[1] != 1) {
        result = 2;
    } else {
        for (i = 2; i < (int)key[1]; ++i) {
            if (bytes[i] != 0xff) break;
        }
        if (i + 1 >= (int)key[1] || bytes[i] != 0 || bytes[i + 1] != 0x30 ||
            FUN_020015ac(self + 0x468, bytes + key[1] - *(u32 *)(self + 0x47c), *(u32 *)(self + 0x47c)) != 0) {
            result = 2;
        }
    }
    UNK_02107094(buffer); return result;
}
