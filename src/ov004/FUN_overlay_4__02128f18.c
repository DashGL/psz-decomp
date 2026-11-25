// FUN_overlay_4__02128f18 @ 0x02128f18 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__02128f18 @ 0x02128f18 (code 0x40, pool extent 0x44, thumb)
// check: vers=2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Select display state according to player activity, item eligibility and shared readiness.
 * Field identities remain provisional.
 */
extern void *FUN_02086e3c(void);
extern int FUN_020872c4(void *);
extern int FUN_02084bf8(void *);
extern int FUN_020c1234(void);
extern void FUN_overlay_4__021293a4(void *);
extern void FUN_overlay_4__02129368(void *);
void FUN_overlay_4__02128f18(int *p) {if(!FUN_020872c4(FUN_02086e3c())){if(FUN_02084bf8((void *)0x0211a51c)){if(FUN_020c1234()==1)p[4]=4;else{FUN_overlay_4__021293a4(p);p[4]=6;}}else{FUN_overlay_4__02129368(p);p[4]=5;}}}
