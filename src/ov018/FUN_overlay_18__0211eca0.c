// flags: -O4,s
extern void FUN_overlay_18__0211e6a4(void *, int, unsigned);
extern unsigned *FUN_overlay_18__0211e6f4(void *, int);
extern void FUN_overlay_18__0211e648(void *, unsigned, unsigned);
extern unsigned FUN_overlay_18__0211ef40(void *, unsigned);
void FUN_overlay_18__0211eca0(int *self, unsigned char *descriptor) {
    unsigned i, *entry;
    unsigned char tag;
    FUN_overlay_18__0211e6a4(self + 18, 7, 0);
    entry = FUN_overlay_18__0211e6f4(self + 18, 0);
    FUN_overlay_18__0211e648(entry, 3, descriptor[37]);
    entry = FUN_overlay_18__0211e6f4(self + 18, 1);
    FUN_overlay_18__0211e648(entry, 2, descriptor[38]);
    entry = FUN_overlay_18__0211e6f4(self + 18, 2);
    FUN_overlay_18__0211e648(entry, 4, descriptor[40]);
    entry = FUN_overlay_18__0211e6f4(self + 18, 3);
    FUN_overlay_18__0211e648(entry, 2, descriptor[39]);
    tag = descriptor[41];
    i = 0;
    if (tag != 254) {
        for (i = 0; i < 8; i++) {
            unsigned value = FUN_overlay_18__0211ef40(descriptor, i);
            if (descriptor[41] == value) break;
        }
    }
    entry = FUN_overlay_18__0211e6f4(self + 18, 4);
    FUN_overlay_18__0211e648(entry, 8, i);
    entry = FUN_overlay_18__0211e6f4(self + 18, 5);
    FUN_overlay_18__0211e648(entry, 4, 0);
    entry = FUN_overlay_18__0211e6f4(self + 18, 6);
    entry[0] = 0;
    entry[1] = 0;
}
