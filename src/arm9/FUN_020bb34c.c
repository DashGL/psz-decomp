// flags: -O4,s
struct P { void *f0; char *p; };
struct G { unsigned int pad[13]; int pending; };
extern struct P DAT_020fc950;
extern struct G DAT_0211b2c0;
extern int FUN_020bbc44(void *, unsigned int);
int FUN_020bb34c(void *arg, unsigned int size) {
    if (size > *(unsigned short *)(DAT_020fc950.p + 54)) return 0;
    if (DAT_0211b2c0.pending) {
        DAT_0211b2c0.pending = 0;
        return FUN_020bbc44(arg, size);
    }
    return 0;
}
