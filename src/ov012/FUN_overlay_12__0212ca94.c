// FUN_overlay_12__0212ca94 @ 0x0212ca94 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212ca94 @ 0x0212ca94 (code 0x40, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize four embedded storage spans and clear final three words.
 * Field identities remain provisional.
 */
extern void FUN_0200c938(void *,unsigned int);
char *FUN_overlay_12__0212ca94(char *p) {FUN_0200c938(p,69);FUN_0200c938(p+69,12);FUN_0200c938(p+81,100);FUN_0200c938(p+184,12);*(int *)(p+184)=0;*(int *)(p+188)=0;*(int *)(p+192)=0;return p;}
