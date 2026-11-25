// flags: -O4,s
#pragma opt_propagation off
extern void *FUN_02086e3c(void);
extern char *FUN_0208724c(void *);
typedef struct {
    unsigned char pad[0xc2];
    unsigned char vals[3];
} Sub;
void FUN_020a1234(int value, int index) {
    char *p = FUN_0208724c(FUN_02086e3c()) + 0x644;
    Sub *s = (Sub *)(p + 0x194);
    if (index >= 0 && index < 3) {
        if (value > s->vals[index]) {
            s->vals[index] = value;
        }
    }
}
