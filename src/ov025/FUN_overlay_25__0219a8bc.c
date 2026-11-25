// FUN_overlay_25__0219a8bc @ 0x0219a8bc (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_25__0219a8bc @ 0x0219a8bc (code and checked extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25, 2026-11-04: invoke resident owner operation on word +4
 * with constants 0x0, 0x3, 0x1000, 0x0. Full body decoded: only constant construction,
 * one owner load, known stack argument, direct call, and return permitted.
 * Operation and mode identities remain provisional.
 */
extern void FUN_02040c0c(void *,unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_25__0219a8bc(void **self) {
    FUN_02040c0c(self[1],0x0,0x3,0x1000,0x0);
}
