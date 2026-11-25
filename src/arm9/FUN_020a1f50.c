// flags: -O4,s
typedef struct { unsigned short id, angle, b, pad; int x, y; } Desc;
extern char *UNK_02108c64;
extern int UNK_020fbde4;
extern char UNK_020f4cd8[], UNK_020f4ce0[];
extern char *FUN_020b77e4(void), *FUN_020b7798(void *, int), *FUN_02032ca0(void *, int);
extern void *FUN_020c1fc8(void), *FUN_020c2680(void *, int);
extern void FUN_02071d0c(void *), FUN_02090b44(void *), FUN_0208971c(void *, void *), FUN_020c3388(void *, void *), FUN_020c324c(void *, int);
void FUN_020a1f50(char *s) {
    int count, i, j, row;
    char *record, *member;
    int n;
    Desc d;
    if (*(int *)(FUN_020b77e4() + 8)) return;
    count = *(signed char *)FUN_020b77e4();
    FUN_02071d0c(&d);
    for (i = 0; i < count; ++i) {
        record = FUN_020b7798(FUN_020b77e4(), i);
        member = FUN_02032ca0(UNK_02108c64, *(int *)record);
        if (member) {
            FUN_02090b44(&d);
            n = *(signed char *)(record + 16);
            for (j = 0; j < n; ++j) {
                d.angle = *(unsigned short *)(record + 4 + 2 * j);
                if (d.angle == 0) FUN_0208971c(&d.x, UNK_020f4cd8);
                else if (d.angle == 16384) { FUN_0208971c(&d.x, UNK_020f4ce0); d.x += 69632; }
                else if (d.angle == 32768) { FUN_0208971c(&d.x, UNK_020f4cd8); d.x -= 4096; d.y += 69632; }
                else { FUN_0208971c(&d.x, UNK_020f4ce0); d.y -= 4096; }
                d.id = 3;
                d.x += 73728 * *(signed char *)(member + 46);
                row = *(signed char *)(member + 47) - (UNK_020fbde4 - 1);
                if (row >= 0 && row < 5) {
                    d.y += 73728 * row;
                    if (d.angle) FUN_020c3388(&d, FUN_020c2680(FUN_020c1fc8(), *(int *)(s + 40)));
                    else FUN_020c324c(&d, *(int *)(s + 40));
                }
            }
        }
    }
}
