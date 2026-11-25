// flags: -O4,s
extern void FUN_0203041c(void *);
extern int FUN_02033704(void);
extern void FUN_0209fce8(void *);
extern void FUN_0209fd04(void *);

enum { E0 = 0, E1 = 1 };

void FUN_0209fbe0(char *self) {
    FUN_0203041c(self);
    if ((unsigned int)((unsigned char)self[0x2e] - 1) <= 1 && !FUN_02033704()) {
        char *p = *(char **)(self + 0x10);
        if (p) {
            if ((*(unsigned short *)(p + 0x20) & 1) ? E1 : E0) {
                FUN_0209fce8(self);
            } else {
                FUN_0209fd04(self);
            }
        }
    }
}
