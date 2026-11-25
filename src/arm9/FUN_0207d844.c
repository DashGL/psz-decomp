// flags: -O4,s
extern int FUN_020476ac(void *);
extern void FUN_0207d884(void *);
extern void FUN_0206e728(void *, void (*)(void *));
extern void FUN_0206e738(void *, void *);
int FUN_0207d844(char *self) {
    int result = FUN_020476ac(self);
    if (result == 0 && *(int *)(self + 268) == 0) {
        void *p = *(void * volatile *)(self + 48);
        if (p != 0 && *(void * volatile *)(self + 48) != 0) {
            FUN_0206e728(p, FUN_0207d884);
            FUN_0206e738(*(void **)(self + 48), self);
            *(int *)(self + 268) = 1;
        }
    }
    return result;
}
