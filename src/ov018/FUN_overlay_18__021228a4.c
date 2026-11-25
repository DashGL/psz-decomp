// FUN_overlay_18__021228a4 @ 0x021228a4 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_overlay_18__021228a4 @ 0x021228a4 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Update shared descriptor and draw receiver against it, then return zero.
 * Field identities remain provisional.
 */
extern void FUN_overlay_18__02122a30(void *,void *);
extern void FUN_overlay_18__02122a70(void *,void *);
int FUN_overlay_18__021228a4(void *p) {FUN_overlay_18__02122a30(p,(void *)0x02124544);FUN_overlay_18__02122a70(p,(void *)0x02124544);return 0;}
