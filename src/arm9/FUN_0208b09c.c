// FUN_0208b09c @ 0x0208b09c (0x16)
// flags: -O4,s
// Frameless 2-element byte scan at p[2..3] (the prologue-free leaf function
// called from 0x0208abca that required bypassing dsd init).
typedef unsigned char u8;

int FUN_0208b09c(void *self, const u8 *p) {
    int i;
    for (i = 0; i < 2; i++) {
        if (p[i + 2] != 0) {
            return i;
        }
    }
    return 0;
}
