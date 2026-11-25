// FUN_overlay_19__0219bbe4 @ 0x0219bbe4 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch61.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219bbe4 @ 0x0219bbe4 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay19 ROM reconstruction, 2026-11-05.
 * Game actor/controller allocation, transition or dispatch.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch349.md.
 * Field identities remain provisional.
 */
extern int FUN_overlay_19__02198418(void *);extern void *FUN_020ba894(unsigned int);extern void *FUN_overlay_19__021997b8(void *,int,int);extern int FUN_overlay_19__02198438(void *,void *);
void FUN_overlay_19__0219bbe4(int *self) { void *owner=(void *)self[1];void *p;if(FUN_overlay_19__02198418(owner)==1){p=FUN_020ba894(60);if(p)p=FUN_overlay_19__021997b8(p,0x24000,0);FUN_overlay_19__02198438(owner,p);} }
