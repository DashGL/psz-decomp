// FUN_overlay_9__021205e0 @ 0x021205e0 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_9__021205e0 @ 0x021205e0 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Write default output for state zero or reset state one and report success.
 * Field identities remain provisional.
 */
extern void FUN_overlay_9__02120a38(void *,int);
int FUN_overlay_9__021205e0(int *p,short *out) {if(p[30]==0) {out[0]=5;out[1]=3;*(unsigned int *)(out+2)=1;return 1;}if(p[30]==1) {FUN_overlay_9__02120a38(p,0);return 1;}return 0;}
