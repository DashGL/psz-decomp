// FUN_overlay_14__02120a74 @ 0x02120a74 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120a74 @ 0x02120a74 (code 0x26, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Restore table and clear, reset and destroy embedded display.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
extern void FUN_020c3588(void *);
extern void *FUN_020c3578(void *);
void *FUN_overlay_14__02120a74(unsigned int *p) {p[0]=0x021220ec;FUN_020c38f0(p+5,0);FUN_020c3588(p+5);FUN_020c3578(p+5);return p;}
