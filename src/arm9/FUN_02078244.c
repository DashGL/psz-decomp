// flags: -O4,s
extern char DAT_0211a3fc[];
extern char DAT_0211a3b8[];
extern void FUN_02078268(void *, void *);
void FUN_02078244(char *self) {
    FUN_02078268(DAT_0211a3fc, self); *(unsigned int *)(DAT_0211a3b8 + 92) = *(unsigned int *)(self + 24); { unsigned short f = *(unsigned short *)(DAT_0211a3b8 + 2); *(unsigned short *)(DAT_0211a3b8 + 2) = f | 1; }
}
