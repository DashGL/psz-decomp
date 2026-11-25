// flags: -O4,s
extern unsigned int DAT_0211aa74[];
extern void FUN_020b42c0(void *);
void FUN_020b3e5c(void *self) {
    if (DAT_0211aa74[3]) {
        FUN_020b42c0(self);
        DAT_0211aa74[3] = 0;
    }
}
