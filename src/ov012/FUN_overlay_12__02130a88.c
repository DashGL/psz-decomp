// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_12__02130a88 @ 0x02130a88 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__02130a88 @ 0x02130a88 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize render descriptor and submit shared handle four.
 * Field identities remain provisional.
 */
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern int FUN_overlay_12__02131ad0(int);
extern void FUN_020c32b4(void *,int);
void FUN_overlay_12__02130a88(void *unused_receiver) {int d[4];FUN_02071d0c(d);FUN_02090b44(d);d[2]=0;d[3]=20480;*(short *)d=4;FUN_020c32b4(d,FUN_overlay_12__02131ad0(4));}

// Caller/callee ABI evidence: Same-module caller explicitly prepares receiver or embedded receiver immediately before call; complete callee ignores that input. Retain prepared positional argument without inventing input consumption.
