// flags: -O4,s
extern unsigned int FUN_02035b60(unsigned int);
void FUN_0206e1c8(char *self) {
    char *slots = *(char **)(self + 0x64);
    unsigned int count = 0, delay, values[8], tmp;
    int i, j;
    for (i = 0; i < 8; i++)
        if (*(void **)(slots + 4 + i * 4)) count++;
    delay = 0;
    for (i = 0; i < 8; i++) {
        values[i] = (unsigned short)delay;
        delay += FUN_02035b60(4) + 4;
    }
    for (i = 0; (unsigned int)i < count; i++) {
        j = FUN_02035b60(count);
        tmp = values[i];
        values[i] = values[j];
        values[j] = tmp;
    }
    j = 0;
    for (i = 0; i < 8; i++)
        if (*(void **)(slots + 4 + i * 4)) {
            *(unsigned short *)(slots + 0x24 + i * 2) = (unsigned short)values[j++];
        }
}
