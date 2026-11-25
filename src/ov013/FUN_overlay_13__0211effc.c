// FUN_overlay_13__0211effc @ 0x0211effc (0x20, thumb) - full bytes and relocation targets verified.
// ABI correction evidence: notes/sessions/matching-low-2026-11-07-effc-repair.json; existing banked function, no new coverage credit.
// FUN_overlay_13__0211effc @ 0x0211effc (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_13__0211f01c(void *);

void FUN_overlay_13__0211effc(int *self)
{
    self[0] = 0;
    self[1] = 0;
    self[2] = 0;
    self[3] = 0;
    self[4] = 0;
    self[5] = -1;
    self[6] = 0;
    self[7] = 0;
    FUN_overlay_13__0211f01c(self + 8);
}
