// flags: -O4,s
#pragma opt_dead_assignments off
typedef struct {
    int w[4];
    signed char b[8];
} Desc;

void FUN_0209baac(char *s) {
    int state = 0x11;
    Desc d = **(Desc **)(s + 4);
    if (d.b[2] == 0) {
        state = 0x11;
    } else if (d.b[2] == 1) {
        state = 0x0e;
    } else if (d.b[2] == 2) {
        state = 0x10;
    } else if (d.b[2] == 3) {
        state = 0x0f;
    }
    *(short *)(s + 0x3c) = 0;
    *(short *)(s + 0x3e) = state;
}
