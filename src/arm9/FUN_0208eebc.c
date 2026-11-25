// flags: -O4,s
extern int FUN_02033704(void);
extern void FUN_02033658(int, int, void *);
void FUN_0208eebc(char *self, int selector) {
    if (selector == 1 && !FUN_02033704()) {
        unsigned int *p = *(unsigned int **)(self + 4);
        unsigned int c = p[3], b = p[2], a = p[1];
        unsigned int values[3];
        values[0] = a;
        values[1] = b;
        values[2] = c;
        FUN_02033658(0, 8, values);
    }
}
