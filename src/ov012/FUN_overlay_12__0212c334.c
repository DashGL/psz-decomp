// flags: -O4,s
extern int FUN_020bbf6c(int);
extern void FUN_020c193c(int, int, int, int, int);
typedef struct { int a, b, c, d, e, f; } Row;
extern const Row DAT_0213bf68[];
void FUN_overlay_12__0212c334(int *p) {
    const Row *table = DAT_0213bf68;
    if (p[9] && table[p[20]].b) {
        if (FUN_020bbf6c(128)) {
            if (p[16] == 0) {
                FUN_020c193c(0, 2, 0, 0, -1);
                p[16]++;
            }
        } else if (FUN_020bbf6c(64)) {
            if (p[16] != 0) {
                FUN_020c193c(0, 2, 0, 0, -1);
                p[16] = 0;
            }
        }
    }
}
