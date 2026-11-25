// flags: -O4,s
typedef struct {
    unsigned int a : 7;
    unsigned int b : 4;
    unsigned int c : 5;
    unsigned int d : 8;
    unsigned int e : 8;
} Bits;

extern void *FUN_02079114(void);
extern void *FUN_02077f3c(void);
extern int FUN_02078038(void *);
extern void FUN_0207920c(void *, int, int, int, unsigned short, int, int);
extern void FUN_020c331c(int, int, int, int);

void FUN_overlay_4__02129280(char *self) {
    void *font;
    int handle;
    font = FUN_02079114();
    if (font) {
        int m;
        handle = FUN_02078038(FUN_02077f3c());
        m = ((volatile Bits *)(self + 36))->b;
        FUN_0207920c(font, 0x69000, 0xf8000, 2, 2, m, 1);
        FUN_020c331c(5, 0x77000, 0xf8000, handle);
        FUN_0207920c(font, 0x7e000, 0xf8000, 2, 2, ((Bits *)(self + 36))->c, 1);
        FUN_020c331c(5, 0x8c000, 0xf8000, handle);
        FUN_0207920c(font, 0x93000, 0xf8000, 2, 4, ((Bits *)(self + 36))->a + 2000, 1);
        FUN_0207920c(font, 0xc1000, 0xf8000, 2, 2, ((Bits *)(self + 36))->d, 1);
        FUN_020c331c(49, 0xd0000, 0xf8000, handle);
        FUN_0207920c(font, 0xd7000, 0xf8000, 2, 2, ((Bits *)(self + 36))->e, 1);
    }
}
