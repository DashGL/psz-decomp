// flags: -O4,p -noThumb
extern void FUN_02064f78(unsigned int, const void *, void *, unsigned int, void *, void *);
extern void FUN_0206552c(const void *, void *, unsigned int);
extern unsigned int DAT_020f96e4;
extern struct { unsigned int pad[2]; unsigned int base; } DAT_021125d4;
void FUN_0205fa00(const void *source, unsigned int offset, unsigned int size) {
    unsigned int channel = DAT_020f96e4, base = DAT_021125d4.base;
    if (channel != ~0u) FUN_02064f78(channel, source, (void *)(base + offset), size, 0, 0);
    else FUN_0206552c(source, (void *)(base + offset), size);
}
