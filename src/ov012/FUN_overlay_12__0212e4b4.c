// FUN_overlay_12__0212e4b4 @ 0x0212e4b4 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212e4b4 @ 0x0212e4b4 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Transition from active state and request common mode, reporting acceptance.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02131fd0(void *,int);
int FUN_overlay_12__0212e4b4(unsigned int *p) {if(p[16]!=1)return 0;p[16]=2;FUN_overlay_12__02131fd0(p,1);return 1;}
