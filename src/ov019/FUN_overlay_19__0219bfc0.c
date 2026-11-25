// FUN_overlay_19__0219bfc0 @ 0x0219bfc0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch61.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219bfc0 @ 0x0219bfc0 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay19 ROM reconstruction, 2026-11-05.
 * Game actor/controller allocation, transition or dispatch.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch349.md.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,unsigned int);extern void FUN_overlay_19__02198a80(void *,int);
void FUN_overlay_19__0219bfc0(int *self) { int *owner=(int *)self[1];self[3]=0;FUN_02040c0c(owner,0,17,4096,0);FUN_overlay_19__02198a80(owner,0);owner[96]=1; }
