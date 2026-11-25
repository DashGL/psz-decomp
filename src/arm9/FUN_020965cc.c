// flags: -O4,s
struct Prof965cc {
    int a[4];
    int b[5];
    int c[2];
    int d[14];
};
extern char UNK_0211a51c[];
extern int FUN_02084be8(void *), FUN_0209685c(void *, int), FUN_02084dac(void *, void *, void *, int, int);
extern void *FUN_02099444(void);
extern void FUN_020c4434(void *);
#pragma thumb off
extern void FUN_0206557c(int, void *, int);
#pragma thumb on
extern void FUN_02099978(void *, void *, int), FUN_0209999c(void *, void *, int), FUN_020999ec(void *, void *, int);
extern void FUN_0203955c(void *), FUN_02099a80(void *, void *, int, int), FUN_02099c90(void *, void *, int);
extern void FUN_0208652c(void *, int), FUN_02086500(void *, int);

int FUN_020965cc(char *s, int id) {
    struct Prof965cc profile;
    int equipment[4], extra[4], record[2], result, flag, value;
    if (!FUN_02084be8(UNK_0211a51c)) return -1;
    if (!*(int *)s) return -1;
    result = -1;
    if (*(int *)(s + 4) < 3 && FUN_0209685c(s, id) == -1) {
        FUN_020c4434(&profile.a);
        FUN_020c4434(&profile.b);
        FUN_0206557c(0, &profile, 100);
        FUN_02099978(FUN_02099444(), &profile.c, id);
        FUN_0209999c(FUN_02099444(), &profile, id);
        FUN_020999ec(FUN_02099444(), &profile.d, id);
        FUN_0203955c(equipment);
        FUN_02099a80(FUN_02099444(), equipment, id, 0);
        FUN_0203955c(extra);
        FUN_02099c90(FUN_02099444(), extra, id);
        flag = 1; if (((*(unsigned short *)(s + 38) & (1 << id)) ? 1 : 0) != 0) flag = 0;
        result = FUN_02084dac(&profile, equipment, extra, *(int *)(s + 4) + 1, flag);
        FUN_0208652c(record, result);
        if (*(int *)(s + 4) >= 0 && *(int *)(s + 4) < 3) value = *(short *)(s + 40 + 2 * *(int *)(s + 4));
        else value = 0;
        *(short *)((char *)record + 6) = value;
        FUN_02086500(record, result);
        *(int *)(s + 8 + 8 * *(int *)(s + 4)) = result;
        *(int *)(s + 12 + 8 * *(int *)(s + 4)) = id;
        ++*(int *)(s + 4);
    }
    return result;
}
