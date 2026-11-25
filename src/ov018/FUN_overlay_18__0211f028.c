// FUN_overlay_18__0211f028 @ 0x0211f028 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211f028 @ 0x0211f028 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Restore receiver table, release global child, then release receiver storage.
 * Field identities remain provisional.
 */
extern void FUN_overlay_18__02120ff0(void);
extern void FUN_020ba8ac(void *);
void *FUN_overlay_18__0211f028(unsigned int *p) {p[0]=0x02123a6c;FUN_overlay_18__02120ff0();FUN_020ba8ac(p);return p;}
