// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_overlay_12__0212c9a0(void), FUN_overlay_12__0212faa0(void *), FUN_overlay_12__02131ff8(void *, int), FUN_overlay_12__02131b10(int), FUN_overlay_12__0212c694(const void *);
extern void FUN_overlay_12__0212fb0c(void *), FUN_overlay_12__02130644(void *), FUN_overlay_12__02130494(void *);
extern int FUN_overlay_12__02130314(void *);
extern void FUN_overlay_12__02133aa4(void), FUN_overlay_12__021305d0(void *), FUN_overlay_12__02131abc(void), FUN_overlay_12__02131f88(void *);

void FUN_overlay_12__02130388(int *self)
{
    int state = self[16];

    if (state == 0) {
        FUN_overlay_12__0212c9a0();
        FUN_overlay_12__0212faa0(self);
        FUN_overlay_12__02131ff8(self, 1);
        FUN_overlay_12__02131b10(0);
        FUN_overlay_12__02131b10(1);
        FUN_overlay_12__02131b10(4);
        FUN_overlay_12__0212c694((const void *)0x021387ec);
        *(int *)0x0213e20c = self[2];
        self[16] = 1;
        self[18] = 1;
    } else if (state == 1) {
        int sub = self[17];

        if (sub == 0) {
            int mode;

            FUN_overlay_12__0212fb0c(self);
            mode = self[18];
            if (mode == 0) {
                FUN_overlay_12__02130644(self);
            } else if (mode == 1) {
                FUN_overlay_12__02130494(self);
            }
        } else if (sub == 1) {
            FUN_overlay_12__0212faa0(self);
        }
        FUN_overlay_12__02131ff8(self, FUN_overlay_12__02130314(self));
    } else if (state == 2) {
        if (self[18] == 0) {
            FUN_overlay_12__02133aa4();
        }
        FUN_overlay_12__02130494(self);
        FUN_overlay_12__02131ff8(self, 0);
        self[16] = 1;
    } else if (state == 3) {
        FUN_overlay_12__021305d0(self);
        FUN_overlay_12__02130644(self);
        FUN_overlay_12__02131ff8(self, 0);
        self[16] = 1;
    } else if (state == 4) {
        FUN_overlay_12__02131abc();
        *(int *)0x0213e20c = -1;
        FUN_overlay_12__02131f88(self);
    }
}
