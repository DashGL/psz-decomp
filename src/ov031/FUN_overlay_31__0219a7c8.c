// FUN_overlay_31__0219a7c8 @ 0x0219a7c8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a7c8 @ 0x0219a7c8 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Change validated byte-indexed slot from state two to one.
 * Field identities remain provisional.
 */
extern int FUN_overlay_31__0219a798(void *,signed char *);
void FUN_overlay_31__0219a7c8(unsigned int *p,signed char *record) { if(FUN_overlay_31__0219a798(p,record)==1) { int index=record[0]; if(p[index]==2)p[index]=1; } }
