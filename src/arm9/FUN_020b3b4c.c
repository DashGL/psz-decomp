// flags: -O4,s
extern void FUN_02034720(void *, void *);
extern void FUN_020b3b88(void *, int);
extern void FUN_020b35a4(void *);
struct Desc020b3b4c {
    signed char a;
    signed char b;
    unsigned char c;
};
void FUN_020b3b4c(char *self, struct Desc020b3b4c *desc, int enabled) {
    self[8] = desc->a;
    self[9] = desc->b;
    self[10] = desc->c;
    *(int *)(self + 76) = enabled;
    if (*(void **)(self + 4)) {
        FUN_02034720(*(void **)(self + 4), self + 8);
    }
    FUN_020b3b88(self, 0);
    if (*(int *)(self + 76)) {
        FUN_020b35a4(self);
    }
}
