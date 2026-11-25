// flags: -O4,s
extern char DAT_020fca6c[];
extern char *DAT_0211c85c;
extern void FUN_020c14e0(void *);
extern void *FUN_020ba8a0(unsigned int);
#pragma thumb off
extern void FUN_0200d460(void);
extern void *FUN_0200f048(void *, unsigned int);
extern void FUN_0200d7ac(void *);
extern void FUN_020103d0(void *);
#pragma thumb on

#define W(o) (*(unsigned int *)(self + (o)))
void *FUN_020c14f0(char *self, unsigned int size) {
    char *p;
    int i;
    *(void **)self = DAT_020fca6c;
    W(4) = 0; W(0xc) = 0; W(0x10) = 0; W(0x14) = 0; W(0x18) = 0; W(0x1c) = 0; W(0xb4) = 0;
    p = self + 0xc4;
    do { FUN_020c14e0(p); p += 12; } while (p < self + 0xe8);
    p = self + 0xe8;
    do { *(int *)p = -1; *(int *)(p + 4) = 0; p += 8; } while (p < self + 0x100);
    W(0x100) = 127; W(0x104) = 127; W(0x108) = 127; W(0x10c) = 0;
    DAT_0211c85c = self;
    *(void **)(self + 4) = FUN_020ba8a0(size);
    FUN_0200d460();
    *(void **)(self + 8) = FUN_0200f048(*(void **)(self + 4), size);
    FUN_0200d7ac(self + 0xb8);
    FUN_0200d7ac(self + 0xbc);
    FUN_020103d0(self + 0xc0);
    for (i = 0; i < 3; i++) FUN_0200d7ac(self + 0xcc + i * 12);
    return self;
}
