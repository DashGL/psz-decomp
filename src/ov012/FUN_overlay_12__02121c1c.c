// FUN_overlay_12__02121c1c @ 0x02121c1c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__02121c1c @ 0x02121c1c (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy and free optional embedded child then clear receiver field.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_12__02122030(void *);
extern void FUN_020ba8ac(void *);
void FUN_overlay_12__02121c1c(char *p) {void *child=*(void **)(p+3016);if(child){if(child){FUN_overlay_12__02122030(child);FUN_020ba8ac(child);}*(void **)(p+3016)=0;}}
