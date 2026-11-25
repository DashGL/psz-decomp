// flags: -O4,s
extern int FUN_0203a1fc(void *), FUN_02087138(void *), FUN_0208b94c(void *, int), FUN_0208b99c(void *, void *), FUN_0208b7d0(void *, void *);
extern void *FUN_02086e3c(void);
int FUN_0208b768(void *s, void *item, int index) {
    if (index == -1 || FUN_0203a1fc(item)) return -1;
    if (!FUN_02087138(FUN_02086e3c())) return -1;
    if (FUN_0208b94c(s, index) == 1) return 45;
    if (!FUN_0208b99c(s, item)) return 46;
    if (FUN_0208b7d0(s, item) == 0) return 46;
    return -1;
}
