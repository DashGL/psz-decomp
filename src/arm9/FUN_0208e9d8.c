// flags: -O4,s
extern int FUN_02033704(void);
enum { E0 = 0, E1 = 1 };

int FUN_0208e9d8(char *s, int mode) {
    if (mode == 0) {
        unsigned char flags = **(unsigned char **)(s + 0x4c);
        if ((flags & 1) ? E1 : E0) {
            if ((flags & 2) ? E1 : E0) {
                if (FUN_02033704()) return 1;
                if (*(int *)(s + 0x54) >= 15) return 1;
            } else {
                return 1;
            }
        }
    }
    return 0;
}
