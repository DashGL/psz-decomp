// FUN_overlay_23__02199794 @ 0x02199794 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_23__02199794 @ 0x02199794 (code and checked extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23, 2026-11-04: invoke resident owner operation using fully
 * decoded constant arguments, then store state 0 at owner +0xc.
 * Exact decoded sequence admits no additional side effects or argument reads.
 * State/operation identities remain provisional.
 */
extern void FUN_02040c0c(void *,unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_23__02199794(char *self) {
    FUN_02040c0c(*(void **)(self+4),0x0,0x3,0x1000,0x0);
    *(unsigned int *)(self+0xc)=0;
}
