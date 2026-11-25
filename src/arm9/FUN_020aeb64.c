// flags: -O4,s
extern void FUN_02034720(void *, void *);
extern void FUN_020aeba8(void *, int);
struct Desc020aeb64 {
    signed char a;
    signed char b;
    unsigned char c;
};
void FUN_020aeb64(char *self, struct Desc020aeb64 *desc) {
    self[108] = desc->a;
    self[109] = desc->b;
    self[110] = desc->c;
    if (*(void **)(self + 104)) {
        FUN_02034720(*(void **)(self + 104), self + 108);
    }
    FUN_020aeba8(self, 0);
}
