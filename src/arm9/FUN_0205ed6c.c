// flags: -O4,s -noThumb
#pragma opt_propagation off
extern unsigned int DAT_020f96e4;
extern void FUN_02064dd8(unsigned int, const void *, void *, unsigned int);
extern void FUN_0206552c(const void *, void *, unsigned int);
void FUN_0205ed6c(const void *source, unsigned int offset, unsigned int size) {
    unsigned int base = 0x06400000;
    unsigned int channel = DAT_020f96e4;
    if (channel != ~0u && size > 48) {
        FUN_02064dd8(channel, source, (void *)(base + offset), size);
    } else {
        FUN_0206552c(source, (void *)(base + offset), size);
    }
}
