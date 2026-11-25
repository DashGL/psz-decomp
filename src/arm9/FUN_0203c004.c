// flags: -O4,s
#define W(n) (*(unsigned int *)(s + (n)))
enum { E0 = 0, E1 = 1 };

void FUN_0203c004(char *s) {
    if ((W(248) & 0x8000) ? E1 : E0) {
        s[488] = 10;
        s[489] = 10;
        s[490] = 10;
        s[491] = 10;
        W(248) &= 0xffff7fff;
    }
    if ((W(248) & 0x10000) ? E1 : E0) {
        W(492) = *(unsigned char *)(s + 108);
        W(248) &= 0xfffeffff;
    }
    if ((W(248) & 0x20000) ? E1 : E0) {
        W(212) = W(216);
        W(248) &= 0xfffdffff;
    }
    if ((W(248) & 0x2000000) ? E1 : E0) {
        W(248) &= 0xfdffffff;
    }
    if ((W(248) & 0x40000) ? E1 : E0) {
        W(496) = 100;
        W(248) &= 0xfffbffff;
    }
    if ((W(248) & 0x80000) ? E1 : E0) {
        W(248) &= 0xfff7ffff;
        W(248) &= 0xffdfffff;
    }
}
