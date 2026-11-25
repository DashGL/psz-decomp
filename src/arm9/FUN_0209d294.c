// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern int FUN_02030700(void *);
int FUN_0209d294(char *s, int mode) {
    if (mode == 0) {
        if (FUN_02030700(s + 296) != 0) {
            return 1;
        }
    } else if (mode == 1) {
        if (((**(unsigned char **)(s + 76) & 1) ? E1 : E0) != 0) {
            return 1;
        }
    } else if (mode == 2) {
        if ((*(int *)(s + 328) & 2) != 0) {
            return 1;
        }
    } else if (mode == 3) {
        if (FUN_02030700(s + 304) != 0) {
            return 1;
        }
    }
    return 0;
}
