// flags: -O4,s
extern void FUN_overlay_19__02198640(void *);
void FUN_overlay_19__02198188(int *self) {
    if (self[103] == 1) {
        int v;
        self[102] += 128;
        v = self[102];
        if (v >= 4096) v = 4096;
        self[102] = v;
    } else {
        int v;
        self[102] -= 128;
        v = self[102];
        if (v <= 0) v = 0;
        self[102] = v;
    }
    self[103] = 0;
    FUN_overlay_19__02198640(self);
}
