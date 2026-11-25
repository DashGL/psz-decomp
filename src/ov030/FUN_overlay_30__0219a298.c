// FUN_overlay_30__0219a298 @ 0x0219a298 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_30__0219a298 @ 0x0219a298 (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Release owned resource handle, free associated allocation and clear member.
 * Field identities remain provisional.
 */
extern void FUN_02075068(void *,int);
extern void FUN_020ba8ac(void *);
void FUN_overlay_30__0219a298(unsigned int *p) {FUN_02075068(p,((unsigned int *)p[53])[12]);if(p[53]) {FUN_020ba8ac((void *)p[53]);p[53]=0;}}
