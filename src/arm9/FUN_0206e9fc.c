// flags: -O4,s
extern char DAT_020f9860[];
extern void FUN_020c4434(void *);
void *FUN_0206e9fc(unsigned char *self) {
    unsigned char *p, *end;
    *(void **)self = DAT_020f9860;
    p = self + 4;
    end = self + 0x194;
    do {
        FUN_020c4434(p);
        FUN_020c4434(p + 16);
        p += 0x64;
    } while (p < end);
    *(unsigned int *)(self + 0x194) = 0;
    *(unsigned int *)(self + 0x198) = 0;
    return self;
}
