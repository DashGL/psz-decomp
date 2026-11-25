// flags: -O4,s
extern void FUN_020832c4(void *);
void *FUN_02083320(char *self) {
    char *end = self + 1960, *p = self; do { FUN_020832c4(p); p += 28; } while (p < end); FUN_020832c4(end); ((unsigned char *)self)[1960] |= 1; return self;
}
