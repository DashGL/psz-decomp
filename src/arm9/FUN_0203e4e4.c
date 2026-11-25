// flags: -O4,s
#pragma thumb off
extern unsigned long long FUN_0200a5ac(int, int);
#pragma thumb reset
int FUN_0203e4e4(char *self) {
    int value = *(int *)(self + 0xe20);
    int result = 0;
    if (!value) goto done;
    if ((unsigned int)(FUN_0200a5ac(value, 10) >> 32) != 0) goto done;
    result = 1;
done:
    return result;
}
