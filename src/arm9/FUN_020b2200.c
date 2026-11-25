//cpp
// flags: -O4,s
extern "C" void FUN_020b2234(void *, void *);
extern "C" int FUN_020b2200(char *self, void *out) {
    int ok = ((*(unsigned int *)(self + 104) & 1) == 1) ? 1 : 0;
    if (ok && (unsigned int)(*(int *)(self + 16) - 1) <= 1) {
        FUN_020b2234(out, self + 88 + 8 * (*(int *)(self + 4)));
        return 1;
    }
    return 0;
}
