// flags: -O4,p
extern unsigned int *DAT_0211c85c;
extern void FUN_020c1e64(void *), FUN_0200d75c(unsigned int);
void FUN_020c1b6c(unsigned int value) {
    DAT_0211c85c[67] = value;
    FUN_020c1e64(DAT_0211c85c);
    FUN_0200d75c(value);
}
