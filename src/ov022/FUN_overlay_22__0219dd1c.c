// FUN_overlay_22__0219dd1c @ 0x0219dd1c (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219dd1c @ 0x0219dd1c (code 0x38, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Increment counter, restore position vector and configure child display state.
 * Field identities remain provisional.
 */
typedef struct {int v[3];} Vec;
extern void FUN_overlay_22__0219a05c(void *,int);
extern void FUN_overlay_22__0219a070(void *,int);
extern void FUN_overlay_22__0219a0f4(void *,int);
void FUN_overlay_22__0219dd1c(int *p) {p[47]++;*(Vec *)(p+7)=*(Vec *)0x020fc958;FUN_overlay_22__0219a05c(p,1);FUN_overlay_22__0219a070(p,0);FUN_overlay_22__0219a0f4(p,4);}
