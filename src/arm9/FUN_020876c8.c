// flags: -O4,s
extern void *DAT_0211a550[];
extern void FUN_020876f4(void);
extern void *FUN_02020aa4(unsigned int, int, int);
void FUN_020876c8(void) {
    int i;
    FUN_020876f4();
    for (i = 0; i < 4; i++) *(void **)((char *)DAT_0211a550 + i * 4) = FUN_02020aa4(2048, 0, 0);
}
