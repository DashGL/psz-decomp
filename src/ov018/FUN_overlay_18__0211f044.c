// FUN_overlay_18__0211f044 @ 0x0211f044 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211f044 @ 0x0211f044 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Forward third incoming value to singleton action when receiver is idle.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_18__021212f0(void);
extern void FUN_overlay_18__02121b58(void *,unsigned int);
int FUN_overlay_18__0211f044(unsigned int *p,unsigned int unused,unsigned int value) {if(!p[1]){FUN_overlay_18__02121b58(FUN_overlay_18__021212f0(),value);return 1;}return 0;}
