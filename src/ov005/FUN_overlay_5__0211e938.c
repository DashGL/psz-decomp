// flags: -O4,s
struct S {
    int pad[2];
    int a[2];
    long long b[2];
    int c[2];
    int d[2];
};
extern int DAT_0211e9b4[2][3];
extern int FUN_020c2d94(int, int, int);
void FUN_overlay_5__0211e938(struct S *p, int index) {
    p->c[index]++;
    p->a[index] = 0;
    p->b[index] = DAT_0211e9b4[index][p->c[index]];
    p->d[index] = 1;
    FUN_020c2d94(index == 0 ? 1 : 2, 2, 0);
}
