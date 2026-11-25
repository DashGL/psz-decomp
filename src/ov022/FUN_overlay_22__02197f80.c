// flags: -O4,s
extern unsigned DAT_021a1740[];
extern int DAT_021a1040[];
extern char DAT_021a0a64[];
extern char DAT_021a104c[];
extern void *FUN_020ba894(unsigned);
extern void *FUN_overlay_22__02198000(void *, void *, void *, void *);
void *FUN_overlay_22__02197f80(void *owner, void *data) {
    unsigned f = DAT_021a1740[1];
    void *p;
    if (!(f & 1)) {
        DAT_021a1040[3] = 2;
        DAT_021a1040[4] = 5;
        DAT_021a1040[5] = (int)DAT_021a0a64;
        DAT_021a1040[6] = 4;
        DAT_021a1740[1] = f | 1;
    }
    p = FUN_020ba894(340);
    if (p) p = FUN_overlay_22__02198000(p, owner, data, DAT_021a104c);
    return p;
}
