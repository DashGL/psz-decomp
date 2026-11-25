// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_31__02198d08(int **p) {
    int *c = p[1];
    int index = c[56];
    switch (c[54]) {
    case 0:
        if (((c[53] & 1) ? E1 : E0) == 1) {
            FUN_02040c0c(c, index, 8, 4096, 0);
        } else {
            FUN_02040c0c(c, index, 7, 4096, 0);
        }
        break;
    case 1:
        FUN_02040c0c(c, index, 9, 4096, 0);
        break;
    case 2:
        FUN_02040c0c(c, index, 10, 4096, 0);
        break;
    }
}
