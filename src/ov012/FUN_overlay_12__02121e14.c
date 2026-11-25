// flags: -O4,s
struct Obj {
    unsigned char pad1[0x60];
    int count;
    unsigned char pad2[0x2a0];
    int arr[16];
};
extern void *DAT_02108c68;
extern void FUN_02033448(void *, int, int, int, int);
extern void FUN_overlay_12__0212293c(void);
void FUN_overlay_12__02121e14(struct Obj *p, int a, int b) {
    FUN_02033448(DAT_02108c68, b, a, p->arr[p->count - 1], 0);
    FUN_overlay_12__0212293c();
}
