// flags: -O4,s
int FUN_02050114(char *self) {
    int result = 0;
    unsigned int *count = (unsigned int *)(self + 0x100);
    --*count;
    if ((int)*count < 0) result = 1;
    return result;
}
