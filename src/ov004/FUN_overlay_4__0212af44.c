// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x26, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_4__0212af44 @ 0x0212af44 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212af44 @ 0x0212af44 (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Handle matching input mask, play event feedback and report handled.
 * Field identities remain provisional.
 */
extern int FUN_020bbf6c(unsigned int);
extern void FUN_020c193c(int,int,int,int,int);
int FUN_overlay_4__0212af44(void *unused_receiver) {if(FUN_020bbf6c(8)) {FUN_020c193c(0,4,0,0,-1);return 1;}return 0;}

// Caller/callee ABI evidence: Same-module caller explicitly prepares receiver or embedded receiver immediately before call; complete callee ignores that input. Retain prepared positional argument without inventing input consumption.
