// FUN_overlay_12__02131f88 @ 0x02131f88 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131f88 @ 0x02131f88 (0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Base and all18 derived CtWindowCore tables use banked02038ff0 at slot8.
 * This consumes only receiver and sets its flag bit0. See batch37 ABI audit. */
void FUN_overlay_12__02131f88(void *self)
{
    void (**table)(void *)=*(void (***)(void *))self;
    table[2](self);
}
