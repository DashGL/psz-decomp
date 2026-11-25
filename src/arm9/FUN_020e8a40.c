// flags: -O4,p
#pragma opt_propagation off
extern void FUN_020e4a2c(int, int);
int FUN_020e8a40(int a) {
    int err;
    if (a == 0) return 0;
    switch (a) {
    case 1: return 1;
    case 2: return 2;
    case 3: return 3;
    }
    err = 6;
    if (err != 0) {
        FUN_020e4a2c(err, -0x14ff9);
    }
    return a;
}
