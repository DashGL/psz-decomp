// FUN_overlay_26__021994e4 @ 0x021994e4 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_26__021994e4 @ 0x021994e4 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Apply velocity, advance position when enabled and transition after animation completes.
 * Field identities remain provisional.
 */
extern void FUN_overlay_26__02198d88(void *,void *);
extern int FUN_overlay_26__02198dbc(void *);
extern void FUN_overlay_26__02198d48(void *,void *);
extern int FUN_02040d44(void *,int);
extern void FUN_02037924(void *);
void FUN_overlay_26__021994e4(int *p) {void *child=(void *)p[1],*parent=(void *)p[2];FUN_overlay_26__02198d88(child,p+6);if(FUN_overlay_26__02198dbc(child)==1)FUN_overlay_26__02198d48(child,p+3);if(FUN_02040d44(child,0))FUN_02037924(parent);}
