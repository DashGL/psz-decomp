// flags: -O4,p -noThumb
int FUN_020082e4(double x, ...) {
    switch (((unsigned int *)&x)[1] & 0x7ff00000u) {
        case 0x7ff00000u:
            if ((((unsigned int *)&x)[1] & 0x000fffffu) || (((unsigned int *)&x)[0])) {
                return 1;
            } else {
                return 2;
            }
        case 0:
            if ((((unsigned int *)&x)[1] & 0x000fffffu) || (((unsigned int *)&x)[0])) {
                return 5;
            } else {
                return 3;
            }
    }
    return 4;
}
