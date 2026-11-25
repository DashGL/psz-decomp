// flags: -O4,p -noThumb
extern int FUN_02066f34(void *, signed char *, int);
extern void FUN_02025f80(signed char *);
enum { E0 = 0, E1 = 1 };

int FUN_02025fb4(void *a, signed char *b) {
    int r = FUN_02066f34(a, b, (b == 0 || (b[0xd] & 1)) ? E1 : E0);
    if (r == 0) {
        FUN_02025f80(b);
    }
    return (r != 0) ? 0 : -0x2a;
}
