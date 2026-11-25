// flags: -O4,s
typedef struct { unsigned int a, b; } Pair;
extern unsigned int DAT_0211fc80[];
extern void FUN_overlay_7__0211e750(void *), FUN_overlay_7__0211e700(void *);
void *FUN_overlay_7__0211ee58(unsigned int *self) {
    const Pair *d = (const Pair *)(DAT_0211fc80 + 25);
    self[203] = 0;
    self[204] = 0;
    *(Pair *)(self + 205) = *d;
    self[207] = 0;
    FUN_overlay_7__0211e750(self + 203);
    FUN_overlay_7__0211e700(self);
    return self;
}
