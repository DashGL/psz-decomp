// flags: -O4,s
extern void FUN_overlay_12__02128a28(void *);
extern int FUN_0203a1fc(void *);
extern int FUN_02084900(void *);
extern int FUN_overlay_12__02131ad0(int);
extern void *FUN_020ba918(unsigned);
extern void *FUN_overlay_12__02125ce4(void *, void *, int, unsigned short, unsigned short);
extern const char *FUN_overlay_12__02128b48(void *, const char *);
extern void FUN_overlay_12__02125f0c(void *, const char *);
extern int FUN_overlay_12__02125f28(void *, unsigned);
typedef const char *(*Lookup)(void *, int);
typedef struct { unsigned char b[4]; } Key;

void FUN_overlay_12__02128934(int *self) {
    int quantity;
    void *child;
    const char *text;
    FUN_overlay_12__02128a28(self);
    quantity = 0;
    if (!FUN_0203a1fc(self + 8)) {
        Key key = *(Key *)(self + 8);
        quantity = FUN_02084900(&key) ? 1 : 0;
    }
    if (!self[7] && self[6]) {
        child = FUN_020ba918(364);
        if (child) {
            child = FUN_overlay_12__02125ce4(child, (void *)self[6], FUN_overlay_12__02131ad0(2), 7, 14);
        }
        self[7] = (int)child;
        if (child) {
            if (!self[1]) {
                if (quantity) {
                    text = (*(Lookup **)self[6])[3]((void *)self[6], 13);
                    text = FUN_overlay_12__02128b48(self, text);
                    FUN_overlay_12__02125f0c((void *)self[7], text);
                } else {
                    text = (*(Lookup **)self[6])[3]((void *)self[6], 14);
                    FUN_overlay_12__02125f0c((void *)self[7], text);
                }
            } else {
                if (quantity) {
                    text = (*(Lookup **)self[6])[3]((void *)self[6], 15);
                    text = FUN_overlay_12__02128b48(self, text);
                    FUN_overlay_12__02125f0c((void *)self[7], text);
                } else {
                    text = (*(Lookup **)self[6])[3]((void *)self[6], 16);
                    FUN_overlay_12__02125f0c((void *)self[7], text);
                }
            }
            FUN_overlay_12__02125f28((void *)self[7], 17);
        }
    }
}
