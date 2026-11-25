// FUN_overlay_12__0212d288 @ 0x0212d288 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212d288 @ 0x0212d288 (code 0x1c, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve special selector63 from overlay table, otherwise from resident global owner.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_12__0212d268(unsigned int,unsigned int);
extern void *FUN_02040340(void *,unsigned int);
void *FUN_overlay_12__0212d288(unsigned int selector) {if(selector==63)return FUN_overlay_12__0212d268(0,22);return FUN_02040340(*(void **)0x02108d5c,selector);}
