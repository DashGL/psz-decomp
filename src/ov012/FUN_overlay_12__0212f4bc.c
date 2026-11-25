// FUN_overlay_12__0212f4bc @ 0x0212f4bc (0xfc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch37.json; original draft retained for referenced provenance.
// check: vers=2.0/sp2p3 target=0xfc candidate=0xfc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_12__0212c9a0(void), FUN_overlay_12__0212f618(void *), FUN_overlay_12__02131ff8(void *, int), FUN_overlay_12__0212c694(const void *), FUN_overlay_12__0212f6e0(void *), FUN_overlay_12__0212ca04(void);
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *, void *), FUN_overlay_12__0212f698(void *), FUN_overlay_12__0212f5b8(void *), FUN_overlay_12__02131f88(void *);
extern const void *const data_0213e4d8[];

void FUN_overlay_12__0212f4bc(int *self)
{
    int state = self[16];

    if (state == 0) {
        FUN_overlay_12__0212c9a0();
        FUN_overlay_12__0212f618(self);
        FUN_overlay_12__02131ff8(self, 0);
        *(int *)0x0213e20c = self[2];
        self[16] = 4;
    } else if (state == 2) {
        FUN_overlay_12__0212c694(data_0213e4d8[self[0x43]]);
        self[0x40] = 1;
        FUN_overlay_12__02131ff8(self, 1);
        self[16] = 4;
    } else if (state == 3) {
        self[0x40] = 0;
        FUN_overlay_12__0212c694((const void *)0x0213884c);
        FUN_overlay_12__02131ff8(self, 1);
        FUN_overlay_12__0212f6e0(self);
        self[16] = 4;
    } else if (state == 5) {
        FUN_overlay_12__0212ca04();
        FUN_020c2624(FUN_020c1fc8(), (char *)self + 0xf4);
        FUN_overlay_12__0212f618(self);
        FUN_overlay_12__02131ff8(self, 0);
        self[16] = 4;
    } else if (state == 6) {
        FUN_overlay_12__0212f698(self);
        FUN_overlay_12__0212f5b8(self);
        FUN_overlay_12__02131ff8(self, 0);
        self[16] = 4;
    } else if (state == 7) {
        int sub = self[17];

        if (sub == 1) {
            FUN_overlay_12__0212f698(self);
        } else if (sub == 0) {
            FUN_overlay_12__0212ca04();
            FUN_020c2624(FUN_020c1fc8(), (char *)self + 0xf4);
        }
        self[17] = -1;
        *(int *)0x0213e20c = -1;
        FUN_overlay_12__02131f88(self);
    }
}
