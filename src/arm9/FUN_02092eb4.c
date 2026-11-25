// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern int FUN_02030700(void *);

int FUN_02092eb4(char *s, int kind) {
    if (kind == 0) {
        if (FUN_02030700(s + 332)) return 1;
    } else if (kind == 3) {
        if (FUN_02030700(s + 356)) return 1;
    } else if (kind == 4) {
        if (!FUN_02030700(s + 356)) return 1;
    } else if (kind == 2) {
        if (((**(unsigned char **)(s + 76) & 2) ? E1 : E0) != 0) return 1;
    } else if (kind == 1) {
        if (FUN_02030700(s + 340)) return 1;
    } else if (kind == 5) {
        if (*(int *)(s + 108) & 2) return 1;
    } else if (kind == 6) {
        if (FUN_02030700(s + 364)) return 1;
    } else if (kind == 7) {
        if (!FUN_02030700(s + 364)) return 1;
    }
    return 0;
}
