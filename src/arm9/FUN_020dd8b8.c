// flags: -O4,s
#pragma thumb off
extern void FUN_020656b8(void *, int, unsigned int);
#pragma thumb on
extern int FUN_020dd6b8(void *);
extern void FUN_020dd230(void *, unsigned int);
extern void FUN_020dd2e0(void *, int);
struct S12_020dd8b8 {
    unsigned int a, b, c;
};
void FUN_020dd8b8(char *self, struct S12_020dd8b8 *out) {
    FUN_020656b8(out, 0, 12);
    if (FUN_020dd6b8(self)) {
        FUN_020dd230(out, *(unsigned int *)(self + 28));
        FUN_020dd2e0(out, 3);
        return;
    }
    *out = *(struct S12_020dd8b8 *)(self + 4);
}
