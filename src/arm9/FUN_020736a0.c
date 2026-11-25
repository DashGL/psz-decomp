// flags: -O4,s
extern unsigned int *FUN_0200d16c(void);
int FUN_020736a0(void) {
    switch (FUN_0200d16c()[3]) {
        case 4:
        case 5:
            return 1;
        default:
            return 0;
    }
}
