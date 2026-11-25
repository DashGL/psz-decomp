// flags: -O4,p
#pragma thumb off
extern void FUN_02065510(int, void *, int);
extern void FUN_020654dc(void *, void *, int);
extern void FUN_0206552c(void *, void *, int);
#pragma thumb on
extern char *DAT_0213e8f4[];
void FUN_overlay_15__02135aac(int bank, int index, char *out) {
    char *base = DAT_0213e8f4[bank];
    char *src = base + *(int *)(base + index * 8 + 4);
    int n = *(unsigned short *)(base + index * 8);
    int local[2];
    int i;
    FUN_02065510(0, local, 8);
    for (i = 0; i < n; i++, src += 6, out += 8) {
        FUN_020654dc(src, local, 6);
        FUN_0206552c(local, out, 8);
    }
}
