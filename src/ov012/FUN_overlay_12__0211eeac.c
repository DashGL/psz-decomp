// FUN_overlay_12__0211eeac @ 0x0211eeac (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211eeac @ 0x0211eeac (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Release two manager handles and destroy embedded display receiver.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *,void *);
extern void FUN_020c3578(void *);
void *FUN_overlay_12__0211eeac(char *p) {FUN_020c2624(FUN_020c1fc8(),p);FUN_020c2624(FUN_020c1fc8(),p+4);FUN_020c3578(p+28);return p;}
