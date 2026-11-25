// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern int FUN_02030700(void *);

int FUN_020a2c80(char *s, int mode) {
    if (mode == 0) {
        if (FUN_02030700(s + 0x50)) return 1;
    } else if (mode == 1) {
        if (FUN_02030700(s + 0x58)) return 1;
    } else if (mode == 2) {
        if (((**(unsigned char **)(s + 0x4c) & 1) ? E1 : E0) != 0) return 1;
    } else if (mode == 3) {
        if (((**(unsigned char **)(s + 0x4c) & 2) ? E1 : E0) != 0) return 1;
    } else if (mode == 4) {
        if (((**(unsigned char **)(s + 0x4c) & 4) ? E1 : E0) != 0) return 1;
    } else if (mode == 5) {
        if (((**(unsigned char **)(s + 0x4c) & 8) ? E1 : E0) != 0) return 1;
    } else if (mode == 6) {
        if (*(int *)(s + 0x138) & 4) return 1;
    }
    return 0;
}
