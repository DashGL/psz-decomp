// FUN_overlay_14__02121414 @ 0x02121414 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch48.json; original draft retained for referenced provenance.
// FUN_overlay_14__02121414 @ 0x02121414 (code 0x2a, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Child provenance traced through concrete global owner, factory and constructors.
 * All slot +14 targets consume only self and return it in r0.
 * Evidence: scratch/coverage-root/abi-review4/evidence.txt.
 * USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Reset owner, destroy optional child through dispatch +14, copy default eight-byte record and clear word +10.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
extern void FUN_overlay_14__02120050(void *);
extern void FUN_020b2234(void *,const void *);
void FUN_overlay_14__02121414(void **self) {
    void *child;
    FUN_overlay_14__02120050(self);
    child=self[1];
    if(child) { if(child) { void *(**table)(void *)=*(void *(***)(void *))child; table[5](child); } self[1]=0; }
    FUN_020b2234(self+2,(void *)0x021219a0); self[4]=0;
}
