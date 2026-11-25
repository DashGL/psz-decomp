// flags: -O4,s
struct S {
    int pad0[17];
    int f44;
    int arr1[6];
    int f60;
    int pad1[100];
    int arr2[5];
    int f208;
    int pad2;
    int f210;
    int pad3[2];
    int f21c;
};
extern void FUN_overlay_12__0211f870(void *, int, int, int);
void FUN_overlay_12__0212e764(struct S *p) {
    int i = p->f210;
    p->f60 = i;
    FUN_overlay_12__0211f870(&p->f208, p->arr2[p->arr1[i]], 5, 0);
    p->f44 = 1;
    p->f21c = 1;
}
