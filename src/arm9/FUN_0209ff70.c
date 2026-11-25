// flags: -O4,p
extern void *FUN_02077930(void);
extern void FUN_02077db0(void *, unsigned int, void (*)(void));
extern void FUN_0209ffbc(void);
extern void FUN_0209ffa0(void *);
void FUN_0209ff70(char *self, int selector) {
    switch (selector) {
    case 0:
        FUN_02077db0(FUN_02077930(), *(unsigned int *)(self + 104), FUN_0209ffbc);
        FUN_0209ffa0(self);
        break;
    case 1:
        *(unsigned int *)(self + 96) &= ~3u;
        break;
    }
}
