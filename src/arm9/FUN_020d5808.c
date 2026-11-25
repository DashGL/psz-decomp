// flags: -O4,p
extern void *DAT_0211d744;
extern int FUN_020c6e0c(void *);
extern void *FUN_020c6e10(void *, int);
extern void FUN_020c6eb8(void *, int);
void FUN_020d5808(void *p) {
    int i;
    for (i = 0; i < FUN_020c6e0c(DAT_0211d744); i++) {
        if (p == FUN_020c6e10(DAT_0211d744, i)) {
            FUN_020c6eb8(DAT_0211d744, i);
            return;
        }
    }
}
