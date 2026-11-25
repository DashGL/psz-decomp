// flags: -O4,s
extern struct { void *release; void *(*allocate)(int, unsigned int, int); } DAT_0211dc94;
extern void *FUN_020e0584(void *, unsigned int);
void *FUN_020e05b8(int kind, unsigned int size, int alignment) {
    void *p = DAT_0211dc94.allocate(kind, size + 32, alignment);
    if (p == 0) return 0;
    return FUN_020e0584(p, size);
}
