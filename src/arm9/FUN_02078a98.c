// flags: -O4,s
extern int FUN_020855fc(int);
extern int FUN_020854f8(int);
extern signed char *FUN_020856f4(int);

enum { E0 = 0, E1 = 1 };

int FUN_02078a98(void) {
    int i;
    for (i = 0; i < 4; i++) {
        if ((unsigned int)(FUN_020855fc(i) - 1) <= 1) {
            signed char *p = FUN_020856f4(FUN_020854f8(i));
            if (p) {
                if ((p[0] == 1) ? E1 : E0) return 0;
            } else {
                return 0;
            }
        }
    }
    return 1;
}
