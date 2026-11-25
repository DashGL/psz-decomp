// FUN_overlay_24__02198994 @ 0x02198994 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_24__02198994 @ 0x02198994 (code and checked extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24, 2026-11-04: test owner word +4 with selector zero;
 * when true restore dependent object word +c from its +10 default through
 * resident 02037924 (tail-calls 02037910). The restore is suppressed when
 * dependent flag +2c bit zero is set. Object identities remain provisional.
 * Full ten-instruction wrapper matched against the ROM before drafting.
 */
extern int FUN_02040d2c(void *,unsigned int);
extern void FUN_02037924(void *);
void FUN_overlay_24__02198994(void **self) {
    if(FUN_02040d2c(self[1],0)) FUN_02037924(self[2]);
}
