// FUN_overlay_30__02199548 @ 0x02199548 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_30__02199548 @ 0x02199548 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Install dispatch and execute two cleanup stages.
 * Field identities remain provisional.
 */
extern void FUN_overlay_30__0219a298(void *),FUN_02035518(void *);
void *FUN_overlay_30__02199548(unsigned int *p) { p[0]=0x0219af94; FUN_overlay_30__0219a298(p); FUN_02035518(p); return p; }
