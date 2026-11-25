// FUN_overlay_4__02122010 @ 0x02122010 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__02122010 @ 0x02122010 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Draw resource and advance receiver when manager reports it ready.
 * Field identities remain provisional.
 */
extern void FUN_overlay_4__02122eec(void *);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2608(void *,int);
extern int FUN_020c2d94(int,int,int);
extern void FUN_overlay_4__0212306c(void *);
void FUN_overlay_4__02122010(int *p) {FUN_overlay_4__02122eec(p);if(FUN_020c2608(FUN_020c1fc8(),p[29])) {FUN_020c2d94(2,1,0);FUN_overlay_4__0212306c(p);}}
