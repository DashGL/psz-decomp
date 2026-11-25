// flags: -O4,p -noThumb
extern void FUN_02059194(void);
extern void FUN_020591b0(void);
int FUN_0205981c(char *s, unsigned int base, unsigned int length, unsigned int first, unsigned int second, unsigned int third, void *read, void *write) {
    *(unsigned int *)(s + 40) = base;
    *(unsigned int *)(s + 48) = first;
    *(unsigned int *)(s + 44) = *(unsigned int *)(s + 60) = length;
    *(unsigned int *)(s + 56) = third;
    *(unsigned int *)(s + 52) = *(unsigned int *)(s + 64) = second;
    *(void **)(s + 72) = read ? read : (void *)FUN_02059194;
    *(void **)(s + 76) = write ? write : (void *)FUN_020591b0;
    *(void **)(s + 80) = *(void **)(s + 72);
    *(unsigned int *)(s + 68) = 0;
    *(unsigned int *)(s + 28) |= 2;
    return 1;
}
