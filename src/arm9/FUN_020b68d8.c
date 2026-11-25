// flags: -O4,p
struct S_020b68d8 {
    signed char f0;
    signed char f1;
    signed char f2[3];
    signed char arr[8];
};
extern unsigned int FUN_020b68bc(void *, int);
extern int FUN_020848e0(unsigned int, int);
int FUN_020b68d8(struct S_020b68d8 *self, int index) {
    int value;
    if (index == 2) {
        value = self->f1;
    } else {
        value = self->arr[index];
    }
    return FUN_020848e0(FUN_020b68bc(self, index), value);
}
