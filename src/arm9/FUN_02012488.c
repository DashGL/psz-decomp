// flags: -noThumb
extern void FUN_020123d0(void *);
extern void FUN_020123e4(void *);
void FUN_02012488(void *self, unsigned int flags) {
    if (flags & 1) FUN_020123d0(self);
    if (flags & 2) FUN_020123e4(self);
}
