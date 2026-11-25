// flags: -O4,p
extern struct { char pad[36]; char *p; char pad2[12]; int pending; } DAT_0211b2c0;
extern int FUN_020bbc44(void *, unsigned int);
int FUN_020bb324(void *arg, unsigned int size) {
    if (size > *(unsigned short *)(DAT_0211b2c0.p + 52)) return 0;
    if (DAT_0211b2c0.pending) {
        DAT_0211b2c0.pending = 0;
        return FUN_020bbc44(arg, size);
    }
    return 0;
}
