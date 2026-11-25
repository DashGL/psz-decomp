// FUN_020c0488 @ 0x020c0488 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// FUN_020c0488 @ 0x020c0488
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear leading state, set fixed value 4096000, initialize embedded record with third argument zero, clear trailing state.
 * Evidence: scratch/coverage-root/batch2/020c0488.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020bf680(void *,void *,int);
void FUN_020c0488(unsigned int *self) {
    self[0]=0; self[1]=0; self[2]=4096000;
    FUN_020bf680(self+3,(void *)0x020f5bfc,0); self[12]=0;
}
