enum { E0 = 0, E1 = 1 };
void *FUN_020aa4b4(char *self) {
    if (((*(unsigned int *)(self + 0xf8) & 0x8000) ? E1 : E0) != E0) {
        return self + 0x1e8;
    }
    return 0;
}
