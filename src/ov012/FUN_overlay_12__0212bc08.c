// FUN_overlay_12__0212bc08 @ 0x0212bc08 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212bc08 @ 0x0212bc08 (code 0x1e, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Load shared resource and request mode when receiver is in state two.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212c694(const void *);
extern void FUN_overlay_12__02131ff8(void *,int);
void FUN_overlay_12__0212bc08(unsigned int *p) {if(p[16]==2){FUN_overlay_12__0212c694((void *)0x0213879c);FUN_overlay_12__02131ff8(p,1);p[27]=1;}}
