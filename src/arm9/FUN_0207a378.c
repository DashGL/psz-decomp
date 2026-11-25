// flags: -O4,s
extern int DAT_0211a448[4][5];
extern int DAT_0211a498[4][5];
void FUN_0207a378(int idx, int *a, signed char *b) {
    int i;
    if (idx < 0 || idx > 3) return;
    for (i = 0; i < 5; i++) {
        DAT_0211a448[idx][i] = a[i];
        DAT_0211a498[idx][i] = b[i];
    }
}
