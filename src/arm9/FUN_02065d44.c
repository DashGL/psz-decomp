// flags: -O4,p -noThumb
typedef struct {
    unsigned int cb;
    unsigned int mask;
    unsigned int arg;
} Entry_02065d44;
extern Entry_02065d44 DAT_02118118[];
extern unsigned int FUN_02065e00(unsigned int);

void FUN_02065d44(int index, unsigned int callback, unsigned int argument) {
    unsigned int old;
    DAT_02118118[index].cb = callback;
    DAT_02118118[index].arg = argument;
    old = FUN_02065e00(1u << (index + 8));
    DAT_02118118[index].mask = old & (1u << (index + 8));
}
