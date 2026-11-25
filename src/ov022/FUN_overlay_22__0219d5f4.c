// FUN_overlay_22__0219d5f4 @ 0x0219d5f4 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219d5f4 @ 0x0219d5f4 (code 0x2e, pool extent 0x2e, thumb)
// check: vers=2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Reset two counters, set a 45-frame threshold, and enable the component and child flags.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219a05c(void *,int);extern void FUN_overlay_22__0219a070(void *,int);extern void FUN_overlay_22__0219a0c8(void *,int);void FUN_overlay_22__0219d5f4(unsigned char *p) {*(int *)(p+188)=0;*(int *)(p+192)=0;*(int *)(p+76)=45;FUN_overlay_22__0219a05c(p,1);FUN_overlay_22__0219a070(p,1);FUN_overlay_22__0219a0c8(p,1);}
