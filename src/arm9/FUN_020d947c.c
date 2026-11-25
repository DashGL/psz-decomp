// flags: -O4,s
extern void FUN_020d9450(int, unsigned int, unsigned int *);

void FUN_020d947c(int a, unsigned int b, unsigned int *count) {
    unsigned int x = (((b >> 24) & 0x000000ffu) | ((b >> 8) & 0x0000ff00u) | ((b << 8) & 0x00ff0000u) | ((b << 24) & 0xff000000u));
    unsigned int y = 0;
    y |= (x & 0x000000ffu) << 24;
    y |= (x & 0x0000ff00u) << 8;
    y |= (x & 0x00ff0000u) >> 8;
    y |= (x & 0xff000000u) >> 24;
    FUN_020d9450(a, y, count);
}
