// FUN_overlay_12__02130468 @ 0x02130468 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_12__02130468 @ 0x02130468 (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Conditional action/state cleanup; field identities remain provisional.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch344.md.
 */
extern int FUN_0204fbb4(void *);
extern void *FUN_0204f3b8(void);
extern void FUN_0204f458(void *,void *);
void FUN_overlay_12__02130468(char *self) { if(*(void **)(self+0xc8) && FUN_0204fbb4(*(void **)(self+0xc8))){FUN_0204f458(FUN_0204f3b8(),*(void **)(self+0xc8));*(void **)(self+0xc8)=0;} }
