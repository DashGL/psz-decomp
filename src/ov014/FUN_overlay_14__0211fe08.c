// FUN_overlay_14__0211fe08 @ 0x0211fe08 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__0211fe08 @ 0x0211fe08 (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Read indexed halfword only within unsigned bound.
 * Field identities remain provisional.
 */
extern unsigned int FUN_overlay_14__0211fdec(void *,int);
unsigned int FUN_overlay_14__0211fe08(void *p,unsigned int index) {if(index<=49)return FUN_overlay_14__0211fdec(p,index);return 0;}
