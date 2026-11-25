// flags: -O4,s
extern unsigned char *DAT_0211c85c;
extern void *FUN_020ba8a0(unsigned int);
#pragma thumb off
extern void *FUN_0200f048(void *, unsigned int);
#pragma thumb reset
void FUN_020c16e8(int count, const unsigned int *sizes) {
    int i;
    if (*(void **)(DAT_0211c85c + 16)) return;
    *(void **)(DAT_0211c85c + 0xb4) = FUN_020ba8a0(count * 0x94);
    *(int *)(DAT_0211c85c + 12) = count;
    *(void **)(DAT_0211c85c + 16) = FUN_020ba8a0(count * 4);
    *(void **)(DAT_0211c85c + 20) = FUN_020ba8a0(count * 4);
    *(void **)(DAT_0211c85c + 28) = FUN_020ba8a0(count * 4);
    for (i = 0; i < count; ++i) {
        (*(void ***)(DAT_0211c85c + 16))[i] = FUN_020ba8a0(sizes[i]);
        (*(void ***)(DAT_0211c85c + 20))[i] = FUN_0200f048((*(void ***)(DAT_0211c85c + 16))[i], sizes[i]);
    }
}
