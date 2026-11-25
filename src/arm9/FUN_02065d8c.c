// flags: -O4,p -noThumb
typedef struct {
    unsigned int callback;
    unsigned int flag;
    unsigned int arg;
} Entry_02118148;
extern Entry_02118148 DAT_02118148[];
extern void FUN_02065e00(unsigned int);

void FUN_02065d8c(unsigned int index, unsigned int callback, unsigned int arg) {
    DAT_02118148[index].callback = callback;
    DAT_02118148[index].arg = arg;
    FUN_02065e00(1u << (index + 3));
    DAT_02118148[index].flag = 1;
}
