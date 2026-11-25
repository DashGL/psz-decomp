// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern int FUN_02030700(void *);

int FUN_0209d96c(char *s, int mode) {
    if (mode == 0) {
        if (FUN_02030700(s + 300)) return 1;
    } else if (mode == 1) {
        if (*(int *)(s + 316) & 1) return 1;
    } else if (mode == 2) {
        if (((**(unsigned char **)(s + 76) & 1) ? E1 : E0) != 0) return 1;
    } else if (mode == 3) {
        if (*(int *)(s + 316) & 4) return 1;
    } else if (mode == 4) {
        if (((**(unsigned char **)(s + 76) & 1) ? E1 : E0) == 0) return 1;
    } else if (mode == 5) {
        if (FUN_02030700(s + 308)) return 1;
    }
    return 0;
}
