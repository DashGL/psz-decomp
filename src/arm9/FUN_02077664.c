// flags: -O4,s
int FUN_02077664(char *self) {
    signed char *child = *(signed char **)(self + 4);
    switch (child[18]) {
        case 8:
        case 9:
        case 10:
            return 1;
        default:
            return 0;
    }
}
