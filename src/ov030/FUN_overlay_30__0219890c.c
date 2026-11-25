// FUN_overlay_30__0219890c @ 0x0219890c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_30__0219890c @ 0x0219890c (code and checked extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30, 2026-11-04: if fourth incoming argument is not the
 * all-ones sentinel, pass owner field +0x34 to the reviewed two-argument
 * resident setter. The middle two incoming arguments are not read.
 * Field and sentinel identities remain provisional.
 */
extern void FUN_02037910(void *,unsigned int);
void FUN_overlay_30__0219890c(unsigned int *self,unsigned int unused1,unsigned int unused2,unsigned int value) {
    if(value != ~0U) FUN_02037910(self,self[13]);
}
