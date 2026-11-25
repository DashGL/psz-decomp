// FUN_overlay_24__02199144 @ 0x02199144 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
// Exported span overlaps following functions; terminal bx and literal end at +12.
extern int FUN_overlay_24__021998bc(void *, int);
int FUN_overlay_24__02199144(unsigned char *self, unsigned char *arg)
{
    return FUN_overlay_24__021998bc(*(void **)(self + 0x10), *(int *)(arg + 0));
}
