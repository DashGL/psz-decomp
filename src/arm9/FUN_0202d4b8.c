// flags: -O4,p -noThumb
typedef unsigned short u16;
typedef unsigned int u32;
extern void *(*UNK_02107068)(u32);
extern void (*UNK_02107094)(void *);
extern void FUN_020656b8(void *, int, u32);
extern void FUN_0202d244(u16 *, u16 *, const u16 *, int, u16 *);
extern void FUN_0202cc2c(u16 *, const u16 *, const u16 *, int);
extern void FUN_0202ced0(u16 *, const u16 *, const u16 *, u16 *, int, u16 *);
extern void FUN_0202d390(u16 *, u16 *, const u16 *, int, int, const u16 *, u16 *, u16 *, u16 *);
extern u16 *FUN_0202cb58(u16 *, const u16 *, u32, int);
extern int FUN_0202c918(const u16 *, int);

void FUN_0202d4b8(u16 *out, const u16 *base, const u16 *exponent, int count, const u16 *modulus) {
    int significant;
    u32 index;
    u16 *block, *baseValue, *saved, *work, *inverse, *temporary, *product;
    block = (u16 *)UNK_02107068((u32)count * 22);
    if (!block) return;
    FUN_020656b8(block, 0, (u32)count * 22);
    inverse = block + count;
    baseValue = inverse + count;
    temporary = baseValue + count;
    product = temporary + count;
    saved = product + count;
    work = saved + count;
    significant = FUN_0202c918(modulus, count);
    block[significant] = 1;
    FUN_0202d244(inverse, block, modulus, count, baseValue);
    FUN_0202cc2c(temporary, block, inverse, count);
    FUN_0202cb58(inverse, temporary, 1, count);
    FUN_0202ced0(inverse, inverse, modulus, 0, count, work);
    FUN_0202cc2c(baseValue, base, block, count);
    FUN_0202ced0(0, baseValue, modulus, baseValue, count, work);
    FUN_0202ced0(0, block, modulus, out, count, work);
    for (index = 0; index < ((u32)significant << 4); index++) {
        FUN_0202d390(out, saved, (const u16 *)1, count, significant, modulus, inverse, temporary, product);
        if (exponent[significant - ((int)index >> 4) - 1] & (0x8000u >> (index & 15)))
            FUN_0202d390(out, saved, baseValue, count, significant, modulus, inverse, temporary, product);
    }
    FUN_0202d390(out, saved, 0, count, significant, modulus, inverse, temporary, product);
    UNK_02107094(block);
}
