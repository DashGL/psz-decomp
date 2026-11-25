// flags: -O4,p -noThumb
extern unsigned int FUN_02069964(void);
extern unsigned int FUN_02069978(void);
unsigned int FUN_0206a6dc(char *self, unsigned int index) {
    unsigned int result;
    FUN_02069964();
    result = *(unsigned int *)(self + 0x3c + 4 * index);
    if (result != 0) {
        if (result < 0x02000000) {
            result = (unsigned int)(self + result);
        }
    } else {
        result = 0;
    }
    FUN_02069978();
    return result;
}
