// FUN_overlay_18__021224f4 @ 0x021224f4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch60.json; original draft retained for referenced provenance.
// FUN_overlay_18__021224f4 @ 0x021224f4 (code 0x1c, full extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete preview singleton cleanup and callback dispatch.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch541.md.
 */
typedef void *(*Destroy)(void *);
void FUN_overlay_18__021224f4(void) { void **global=(void **)0x02156644;void *object=*global;if(object){if(object){if(object)((Destroy)(*(unsigned **)object)[2])(object);*global=0;}} }
