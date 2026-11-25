// flags: -O4,s
extern char *FUN_0208555c(int);
extern int FUN_020b7030(void *, int);
int FUN_0204dd54(int actor, unsigned int kind) {
    int result = 1;
    int category = -1;
    char *p;
    switch (kind) {
    case 1: case 2: category = 0; break;
    case 3: case 4: category = 1; break;
    case 5: case 6: category = 2; break;
    case 7: case 8: category = 3; break;
    case 9: case 10: category = 4; break;
    case 11: case 12: category = 5; break;
    case 13: case 14: category = 6; break;
    case 15: case 16: category = 7; break;
    case 17: case 18: category = 8; break;
    case 19: case 20: category = 9; break;
    case 21: case 22: category = 10; break;
    }
    p = FUN_0208555c(actor);
    if (p != 0) {
        result = FUN_020b7030(p + 32, category);
    }
    return result;
}
