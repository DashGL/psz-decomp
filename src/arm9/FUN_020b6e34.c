// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    char pad[0x10];
    unsigned char f10[8];
} S_b6e34;
int FUN_020b6e34(void *a, int b, S_b6e34 *c, int d) {
    if (c != 0 && d >= 0 && d < 8) {
        if ((unsigned int)(b - 1) <= 2) {
            switch (c->f10[d]) {
            case 0: case 5: case 10: case 15: case 20:
                return 0;
            case 1: case 6: case 11: case 16: case 21:
                return 1;
            case 2: case 7: case 12: case 17: case 22:
                return 2;
            case 3: case 8: case 13: case 18: case 23:
                return 3;
            case 4: case 9: case 14: case 19: case 24:
                return 3;
            }
        } else {
            switch (c->f10[d]) {
            case 0: case 1: case 2: case 3: case 4:
                return 0;
            case 5: case 6: case 7: case 8: case 9:
                return 1;
            case 10: case 11: case 12: case 13: case 14:
                return 2;
            case 15: case 16: case 17: case 18: case 19:
                return 3;
            case 20: case 21: case 22: case 23: case 24:
                return 3;
            }
        }
    }
    return -1;
}
