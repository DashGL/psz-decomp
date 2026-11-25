// flags: -O4,s
extern signed char DAT_021099bc[12][6][5];
int FUN_0204579c(signed char *out, int a, int b) {
    int result = 0;
    if (a < 12 && b < 6) {
        out[0] = DAT_021099bc[a][b][0];
        out[1] = DAT_021099bc[a][b][1];
        out[2] = DAT_021099bc[a][b][2];
        out[3] = DAT_021099bc[a][b][3];
        out[4] = DAT_021099bc[a][b][4];
        result = 1;
    }
    return result;
}
