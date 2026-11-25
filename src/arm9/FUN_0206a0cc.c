// flags: -O4,s -noThumb
typedef struct { int a, b; unsigned char c; char pad[3]; } Entry;
extern Entry DAT_0211a0e0[];
unsigned int FUN_0206a0cc(unsigned int i) {
    Entry *e = &DAT_0211a0e0[i];
    unsigned int n = e->c + 1;
    e->c = n;
    return n;
}
