// FUN_overlay_11__0212216c @ 0x0212216c (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch48.json; original draft retained for referenced provenance.
// FUN_overlay_11__0212216c @ 0x0212216c (code 0x2c, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Child provenance: global 02124b10+10 is owner 02124b1c+4.
 * Factory 02121324/table 021238b8 constructs four concrete child types;
 * their slot +14 destructors consume only self and return it in r0.
 * Evidence: scratch/coverage-root/abi-review3/evidence.txt.
 * USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Reset owner, destroy optional child through dispatch +14, copy default eight-byte record and clear word +10.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
extern void FUN_overlay_11__0212135c(void *);
extern void FUN_020b2234(void *,const void *);
void FUN_overlay_11__0212216c(void **self) {
    void *child;
    FUN_overlay_11__0212135c(self[0]);
    child=self[1];
    if(child) { if(child) { void *(**table)(void *)=*(void *(***)(void *))child; table[5](child); } self[1]=0; }
    FUN_020b2234(self+2,(void *)0x0212395c); self[4]=0;
}
