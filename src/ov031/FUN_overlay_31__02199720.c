// flags: -O4,s
extern int DAT_0219c5b4[];
extern void FUN_overlay_31__02199dd8(void *, int);
extern void FUN_overlay_31__02199f50(void *);
extern void FUN_overlay_31__0219a06c(void *);
extern int FUN_02037214(void *, int, int, void *, int);

void FUN_overlay_31__02199720(unsigned char *self, int event) {
    switch (event) {
    case 3:
        FUN_overlay_31__02199dd8(self, 0);
        if (((*(unsigned int *)(self + 0xd4) & 1) ? 1 : 0) == 1) {
            FUN_overlay_31__02199dd8(self, 0x2000);
            FUN_overlay_31__02199dd8(self, 0xc000);
        }
        break;
    case 4:
        FUN_overlay_31__02199f50(self);
        break;
    case 1:
        FUN_02037214(self, 0x1c, DAT_0219c5b4[*(int *)(self + 0xd8)], self + 0x38, 1);
        break;
    case 0:
        FUN_overlay_31__0219a06c(self);
        break;
    }
}
