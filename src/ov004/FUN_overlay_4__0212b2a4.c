// FUN_overlay_4__0212b2a4 @ 0x0212b2a4 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212b2a4 @ 0x0212b2a4 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Apply eligible record identifier when its status mask is nonzero.
 * Field identities remain provisional.
 */
extern int FUN_020781b0(int);
extern void FUN_overlay_4__0212b71c(void *,int);
int FUN_overlay_4__0212b2a4(void *p,unsigned int *r) {if(r){unsigned int id=r[16];if(FUN_020781b0(id) && (r[13]&3)){FUN_overlay_4__0212b71c(p,id);return 1;}}return 0;}
