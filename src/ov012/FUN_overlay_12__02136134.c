// FUN_overlay_12__02136134 @ 0x02136134 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02136134 @ 0x02136134 (thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
/* Slot+8 ABI resolved by base and all18 distinct derived tables:
 * banked02038ff0 consumes only receiver, marks its flags and returns. */
extern void FUN_overlay_12__021351e0(int *);
extern void *FUN_0203955c(void *);
extern void FUN_overlay_12__02132410(void),FUN_overlay_12__02135e7c(void *);
void FUN_overlay_12__02136134(void)
{
    char *self=*(char **)0x0213f324;
    if(self) {
        FUN_overlay_12__021351e0((int *)(self+12));
        FUN_0203955c(self+28);
        FUN_overlay_12__02132410();
        FUN_overlay_12__02135e7c(self);
    }
}
