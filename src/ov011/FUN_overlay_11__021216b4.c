// FUN_overlay_11__021216b4 @ 0x021216b4 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_11__021216b4 @ 0x021216b4 (code 0x3a, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Reset dispatch table and destroy display, resource and embedded holder state.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
extern void FUN_020c3588(void *);
extern void FUN_020c3578(void *);
extern void FUN_020c2b68(void *);
extern void FUN_overlay_11__02121b68(void *);
extern void *FUN_overlay_11__02121404(void *);
char *FUN_overlay_11__021216b4(char *p) {*(int *)p=0x02124634;FUN_020c38f0(p+8,0);FUN_020c3588(p+8);FUN_overlay_11__02121b68(p);FUN_overlay_11__02121404(p+72);FUN_020c3578(p+8);FUN_020c2b68(p+4);return p;}
