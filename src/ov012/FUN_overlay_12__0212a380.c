// FUN_overlay_12__0212a380 @ 0x0212a380 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212a380 @ 0x0212a380 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Return player record only for valid selector and eligible global state.
 * Field identities remain provisional.
 */
extern int FUN_02078188(int);
extern int FUN_02084bf8(void *);
extern void *FUN_02086150(int);
void *FUN_overlay_12__0212a380(int index) {if(FUN_02078188(index)&&FUN_02084bf8((void *)0x0211a51c)){void *p=FUN_02086150(index);if(p)return p;}return 0;}
