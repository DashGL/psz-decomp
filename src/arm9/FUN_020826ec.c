// flags: -O4,s
extern int FUN_020832b4(int);
int FUN_020826ec(void *unused, int *kind, int *rotation, unsigned char *cell)
{
    signed char *links;
    int i;
    *kind = -1;
    *rotation = -1;
    links = (signed char *)cell + 16;
    if (cell[2] == 4) {
        *kind = 3;
        *rotation = FUN_020832b4(4);
    } else if (cell[2] == 3) {
        *kind = 2;
        for (i = 0; i < 4; ++i) {
            if (links[i] < 0) {
                *rotation = i;
                break;
            }
        }
    } else if (cell[2] == 2) {
        if ((links[0] >= 0 && links[2] >= 0) ||
            (links[0] < 0 && links[2] < 0)) {
            *kind = 0;
            if (links[0] >= 0)
                *rotation = 2 * FUN_020832b4(2);
            else
                *rotation = 2 * FUN_020832b4(2) + 1;
        } else {
            *kind = 1;
            for (i = 0; i < 4; ++i) {
                if (links[i] >= 0 && links[(i + 1) % 4] >= 0) {
                    *rotation = i;
                    break;
                }
            }
        }
    } else if (cell[2] == 1) {
        if (((cell[0] & 4) ? 1 : 0) != 0)
            *kind = 5;
        else if (((cell[0] & 8) ? 1 : 0) != 0)
            *kind = 6;
        else
            *kind = 4;
        for (i = 0; i < 4; ++i) {
            if (links[i] >= 0) {
                *rotation = (i + 2) % 4;
                break;
            }
        }
    }
    return *rotation != -1 && *kind != -1;
}
