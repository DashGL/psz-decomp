// flags: -O4,s
extern int FUN_02078a3c(void);
extern int FUN_02030700(void *);

int FUN_020a1a10(char *s, int mode) {
    switch (mode) {
    case 0:
        if (*(int *)(s + 0x5c)) return 1;
        if (FUN_02078a3c()) return 1;
        break;
    case 1:
        if (*(unsigned int *)(s + 0x58) & 1) return 1;
        break;
    case 2:
        if (FUN_02030700(s + 0x48)) return 1;
        break;
    }
    return 0;
}
