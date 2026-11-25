// flags: -O4,p
#pragma thumb off
extern int FUN_02000ec4(void *);
#pragma thumb on
extern int DAT_020f2c90[][5];
int FUN_0207f8b0(void *unused, int row, void *arg) {
    int col;
    (void)unused;
    col = FUN_02000ec4(arg) - 1;
    if (col >= 0 && col < 5) {
        return DAT_020f2c90[row][col];
    }
    return 0;
}
