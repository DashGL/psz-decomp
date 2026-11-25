// FUN_overlay_22__0219901c @ 0x0219901c (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219901c @ 0x0219901c (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Saturate signed stage counter at three, clear timer and disable actor components.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219a05c(void *,int);
extern void FUN_overlay_22__0219a070(void *,int);
void FUN_overlay_22__0219901c(char *p) {if(*(signed char *)(p+312)<3)(*(signed char *)(p+312))++;*(int *)(p+320)=0;FUN_overlay_22__0219a05c(p,0);FUN_overlay_22__0219a070(p,0);}
