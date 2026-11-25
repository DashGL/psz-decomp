// FUN_overlay_31__0219a7ac @ 0x0219a7ac (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a7ac @ 0x0219a7ac (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Set indexed slot only when record validation returns one.
 * Field identities remain provisional.
 */
extern int FUN_overlay_31__0219a774(void *,signed char *);
void FUN_overlay_31__0219a7ac(unsigned int *p,signed char *record) { if(FUN_overlay_31__0219a774(p,record)==1)p[record[0]]=2; }
