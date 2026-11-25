// FUN_overlay_4__02128f5c @ 0x02128f5c (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__02128f5c @ 0x02128f5c (code 0x42, pool extent 0x42, thumb)
// check: vers=2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Process a completed two-result UI request and refresh the panel state.
 * Field identities remain provisional.
 */
extern int FUN_020c1298(int *,int *);extern void FUN_overlay_4__021293a4(void *),FUN_overlay_4__02129368(void *);void FUN_overlay_4__02128f5c(int *self){int first=-1,second=-1;if(FUN_020c1298(&first,&second)==1){if(first!=0&&second!=0){FUN_overlay_4__021293a4(self);self[4]=6;}FUN_overlay_4__02129368(self);self[6]=0;self[4]=5;}}
