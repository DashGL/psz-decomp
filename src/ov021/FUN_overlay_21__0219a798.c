// FUN_overlay_21__0219a798 @ 0x0219a798 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219a798 @ 0x0219a798 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Require nonzero receiver slot for each active player index.
 * Field identities remain provisional.
 */
extern int FUN_02085880(int);
int FUN_overlay_21__0219a798(unsigned int *p) {int i;int ready=1;for(i=0;i<=3;i++)if(FUN_02085880(i)&&!p[57+i])ready=0;return ready;}
