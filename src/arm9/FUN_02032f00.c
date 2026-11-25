//cpp
// flags: -O4,s
extern "C" {
char *FUN_02032ca0(void *, int);
void *FUN_02031a74(void);
unsigned int FUN_02032420(void *, int);
}
extern "C" unsigned int FUN_02032f00(char *s, int index) {
    int active = (*(signed char *)(s + 0x14) == 1) ? 1 : 0;
    if (active) {
        char *p = FUN_02032ca0(s, index);
        if (p) {
            unsigned int count = *(unsigned char *)(p + 0x2c);
            unsigned int used = FUN_02032420(FUN_02031a74(), index);
            if (count >= used) return count - used;
        }
    }
    return 0;
}
