// flags: -O4,s
extern char DAT_0211a51c[];
extern const int DAT_020ec2c0[2][3];
extern const int DAT_020ec2a8[2][3];
extern int FUN_02084bf8(void *);

int FUN_020321b8(void *unused, int a, int b) {
    if (b >= 0 && b < 2 && a >= 0 && a < 3) {
        if (FUN_02084bf8(DAT_0211a51c)) {
            return DAT_020ec2c0[b][a];
        }
        return DAT_020ec2a8[b][a];
    }
    return -1;
}
