//cpp
// flags: -O4,s
extern "C" {
extern void FUN_02044c50(void *);
void FUN_02044c08(unsigned int *s, const unsigned int *src, int force) {
    if (force || ((s[1] == ~0u) ? 1 : 0)) {
        s[1] = src[0];
        *(unsigned long long *)(s + 2) = *(const unsigned long long *)(src + 1);
        FUN_02044c50(s);
    }
}
}
