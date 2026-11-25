// FUN_overlay_12__02124f4c @ 0x02124f4c (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_12__02124f4c @ 0x02124f4c (code 0x2c, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Conditional action/state cleanup; field identities remain provisional.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch344.md.
 */
extern int FUN_overlay_12__02125214(void *);
extern int FUN_02033400(void *,unsigned int);
void FUN_overlay_12__02124f4c(int *self) { int ready;if(self[1])ready=FUN_overlay_12__02125214((void *)self[1]);else ready=1;if(ready && !self[2]){self[2]=1;FUN_02033400(*(void **)0x02108c68,14);} }
