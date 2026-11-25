// FUN_overlay_22__0219c91c @ 0x0219c91c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219c91c @ 0x0219c91c (code 0x1a, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize record flag, default handle and embedded three-word template.
 * Field identities remain provisional.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
void FUN_overlay_22__0219c91c(unsigned int *p) { p[0]=0; p[1]=*(unsigned int *)0x020ed09c; *(Triple *)(p+2)=*(Triple *)0x020fc958; }
