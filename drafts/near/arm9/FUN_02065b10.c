// near: 10w/14b (register coloring on table base and shift temporaries)
// flags: -O4,p -noThumb
struct Entry {
    void (*fn)(int);
    int flag;
    int arg;
};
extern struct Entry DAT_02118118[];
extern unsigned short DAT_020f9718[];
extern char DAT_027e0000[];
void FUN_02065e30(int);

void FUN_02065b10(int a) {
    void (*fn)(int) = DAT_02118118[a].fn;
    int mask = 1 << DAT_020f9718[a];
    DAT_02118118[a].fn = 0;
    if (fn != 0) {
        fn(DAT_02118118[a].arg);
    }
    *(volatile int *)((unsigned int)DAT_027e0000 + 0x3ff8) |= mask;
    if (DAT_02118118[a].flag == 0) {
        FUN_02065e30(mask);
    }
}
