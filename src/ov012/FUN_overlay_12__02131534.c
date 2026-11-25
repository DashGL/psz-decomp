// FUN_overlay_12__02131534 @ 0x02131534 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131534 @ 0x02131534 (code 0x38, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize player operation once, then enter state three when player leaves active range.
 * Field identities remain provisional.
 */
extern void *FUN_02086e3c(void);
extern int FUN_02087254(void *);
extern int FUN_020872c4(void *);
extern void FUN_overlay_12__02131fd0(void *,int);
void FUN_overlay_12__02131534(int *p) {if(!p[125])p[125]=FUN_02087254(FUN_02086e3c());else if(!FUN_020872c4(FUN_02086e3c())){p[16]=3;FUN_overlay_12__02131fd0(p,1);}}
