// FUN_overlay_29__021992d0 @ 0x021992d0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_29__021992d0 @ 0x021992d0 (code 0x18, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Release indexed slot when different from default and restore saved default.
 * Field identities remain provisional.
 */
extern void FUN_02072724(void *,unsigned int);
void FUN_overlay_29__021992d0(unsigned int *p) { unsigned int empty=*(unsigned int *)0x020ed0a0; if(p[3]!=empty) { FUN_02072724((void *)p[1],p[3]); p[3]=empty; } }
