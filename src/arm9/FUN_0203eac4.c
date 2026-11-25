// flags: -O4,s
extern int FUN_0203eb00(void *);
int FUN_0203eac4(char *s) {
    int result = 0;
    if (*(unsigned char *)(s + 0x24) < 14) {
        result = *(unsigned char *)(s + 0x28) + (5 * *(unsigned char *)(s + 0x27) + 15 * *(unsigned char *)(s + 0x26));
    } else if (FUN_0203eb00(s) == 1) {
        result = 0;
    }
    if (result >= 45) {
        result = 0;
    }
    return result;
}
