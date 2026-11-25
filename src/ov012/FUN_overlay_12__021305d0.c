// FUN_overlay_12__021305d0 @ 0x021305d0 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch01.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// Child192 factory78dac(mode0) installsfa294, slot4=78ef0 receiver-only dtor.
extern void *FUN_0204f3b8(void), *FUN_020c1fc8(void);
extern void FUN_0204f458(void *, void *), FUN_020c2624(void *, int *), FUN_02033be0(void *);
extern void FUN_0204644c(void), FUN_02045a38(void), FUN_02045854(void), FUN_0204f2d4(void), FUN_0208447c(void), FUN_0203e70c(void), FUN_overlay_12__0212d844(void);
extern void *DAT_02108c84;
void FUN_overlay_12__021305d0(int *self)
{
    void *child;
    if (self[18] == 1) {
        FUN_0204f458(FUN_0204f3b8(), (void *)self[50]);
        self[50] = 0;
        child = (void *)self[48];
        if (child) {
            if (child) (*(void *(***)(void *))child)[1](child);
            self[48] = 0;
        }
        FUN_0204644c();
        FUN_02045a38();
        FUN_02045854();
        FUN_0204f2d4();
        FUN_0208447c();
        FUN_0203e70c();
        if (DAT_02108c84) FUN_02033be0(DAT_02108c84);
        FUN_020c2624(FUN_020c1fc8(), self + 46);
        FUN_overlay_12__0212d844();
    }
}
