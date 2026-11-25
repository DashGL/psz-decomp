enum { E0 = 0, E1 = 1 };
extern void FUN_020b2234(void *, void *);
int FUN_020b2248(char *self, void *out) {
    if (((*(unsigned int *)(self + 0x68) & 2) == 2 ? E1 : E0) != E0) {
        if (*(unsigned int *)(self + 0x10) != 0) {
            FUN_020b2234(out, self + 0x60);
            return 1;
        }
    }
    return 0;
}
