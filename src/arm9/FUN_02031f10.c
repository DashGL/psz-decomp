//cpp
// flags: -O4,s
extern "C" {
void FUN_0207f1e4(void *, void *);
void FUN_0209cf8c(void *);
void FUN_02030a80(void *, void *);
extern void *DAT_02108c54;
}
extern "C" void FUN_02031f10(char *s, signed char *arg) {
    int active = (arg[0] == 1) ? 1 : 0;
    if (active) {
        void *p = *(void **)(s + 0x24);
        if (p) FUN_0207f1e4(p, arg);
        FUN_0209cf8c(s + 0x2c);
        FUN_02030a80(DAT_02108c54, arg);
    }
}
