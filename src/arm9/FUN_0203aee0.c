// flags: -O4,s
int FUN_0203aee0(char *self) {
    switch (*(unsigned int *)(self + 576)) {
    case 5:
    case 6:
    case 9:
        {
            unsigned int flag = (*(unsigned int *)(self + 248) & 128) != 0;
            if (flag) return 4;
            return 1;
        }
    case 10:
        {
            unsigned int flag = (*(unsigned int *)(self + 248) & 128) != 0;
            if (flag) return 5;
            return 2;
        }
    case 11:
        {
            unsigned int flag = (*(unsigned int *)(self + 248) & 128) != 0;
            if (flag) return 6;
            return 3;
        }
    case 12:
        return 7;
    default:
        return 0;
    }
}
