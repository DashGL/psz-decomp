// flags: -O4,p -noThumb
extern unsigned int DAT_021125b8[];
extern unsigned int DAT_020f96e4;
extern void FUN_02064f78(unsigned int, const void *, void *, unsigned int, void *, void *);
extern void FUN_0206552c(const void *, void *, unsigned int);
void FUN_0205f4bc(const void *source, unsigned int offset, unsigned int size) {
    unsigned int dst = (DAT_021125b8[4] + offset) - DAT_021125b8[3];
    unsigned int channel = DAT_020f96e4;
    if (channel != ~0u) FUN_02064f78(channel, source, (void *)dst, size, 0, 0);
    else FUN_0206552c(source, (void *)dst, size);
}