// flags: -O4,s
extern struct { unsigned int f0, req, flag, f3, f4; unsigned int *p; } DAT_0211a664;
int FUN_020a53c8(unsigned int request) {
    if (DAT_0211a664.p) {
        DAT_0211a664.flag = 1;
        DAT_0211a664.req = request;
        DAT_0211a664.p[17] = 0;
        DAT_0211a664.p[18] = 0;
        return 1;
    }
    return 0;
}
