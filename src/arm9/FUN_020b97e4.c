//cpp
// flags: -O4,s
extern "C" {
extern int FUN_020b7134(void *);
int FUN_020b97e4(unsigned char *s) {
    if (((*(unsigned int *)(s + 0xf8) & (1u << 16)) ? 1 : 0) != 0) {
        return *(int *)(s + 0x1ec);
    }
    return FUN_020b7134(s + 0x20);
}
}
