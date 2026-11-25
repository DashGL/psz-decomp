// flags: -O4,s
extern unsigned int DAT_0211dc8c[2];
unsigned int FUN_020e04b8(unsigned int *detail, unsigned int *category) {
    if (detail != 0) {
        *detail = DAT_0211dc8c[1];
    }
    if (category != 0) {
        switch (DAT_0211dc8c[0]) {
        case 2: case 3: case 4: case 5: case 8:
            *category = 6;
            break;
        case 6:
            *category = 3;
            break;
        case 7:
            *category = 4;
            break;
        case 10: case 11: case 12: case 13:
            *category = 1;
            break;
        case 1: case 9:
            *category = 7;
            break;
        case 14:
            *category = 5;
            break;
        case 15: case 17: case 19:
            *category = 6;
            break;
        case 16: case 18: case 20:
            *category = 2;
            break;
        default:
            *category = 0;
            break;
        }
    }
    return DAT_0211dc8c[0];
}
