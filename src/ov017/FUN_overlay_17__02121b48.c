// FUN_overlay_17__02121b48 @ 0x02121b48 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__02121b48 @ 0x02121b48 (code 0x38, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Optionally reset display state and clear three display words unless locked.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
void FUN_overlay_17__02121b48(int *p,int reset) {if(reset==1)p[75]=0;if(p[75]!=1){FUN_020c38f0(p+15,0);FUN_020c38f0(p,0);FUN_020c38f0(p+45,0);}}
