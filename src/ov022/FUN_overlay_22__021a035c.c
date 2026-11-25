// FUN_overlay_22__021a035c @ 0x021a035c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a035c @ 0x021a035c (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Update owner progress then forward signed record byte and progress to optional child.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__021a0450(void *),FUN_overlay_22__021983cc(void *,int,unsigned int);
void FUN_overlay_22__021a035c(unsigned int *p,signed char *record) { FUN_overlay_22__021a0450(p); if(p[12])FUN_overlay_22__021983cc((void *)p[12],record[20],p[24]); }
