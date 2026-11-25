// flags: -O4,s
extern int FUN_020a76e8(int, int);
void FUN_020a76c0(char *self, int x, int y) {
    if (FUN_020a76e8(x, y)) {
        unsigned char v = ((unsigned char *)self)[0x1804]; char *cell = self + (x + (y << 7)); cell[4] = v;
    }
}
