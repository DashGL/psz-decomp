// flags: -O4,s
extern void FUN_020db958(int);

struct BitHi {
    unsigned char lo : 4;
    unsigned char hi : 4;
};

int FUN_020dbf48(unsigned char *p) {
    p[0xd15] = 0;
    ((struct BitHi *)(p + 0xd0b))->hi++;
    FUN_020db958(0);
    p[0xd11] = 1;
    return 3;
}
