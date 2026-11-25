// FUN_overlay_31__0219c304 @ 0x0219c304 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219c304 @ 0x0219c304 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Update actor and apply offset vector for subtype four when update result is zero.
 * Field identities remain provisional.
 */
extern int FUN_02047440(void *);
extern int FUN_0204770c(void *);
extern void FUN_02036848(void *,const void *);
int FUN_overlay_31__0219c304(char *p) {int result=FUN_02047440(p);if(!result&&FUN_0204770c(p))FUN_02036848(p+92,p+260);return result;}
