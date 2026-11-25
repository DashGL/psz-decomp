// FUN_overlay_31__0219a774 @ 0x0219a774 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a774 @ 0x0219a774 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Report whether validated byte-indexed slot is empty.
 * Field identities remain provisional.
 */
extern int FUN_overlay_31__0219a798(void *,signed char *);
int FUN_overlay_31__0219a774(unsigned int *p,signed char *record) {if(FUN_overlay_31__0219a798(p,record)==1) {if(!p[record[0]])return 1;}return 0;}
