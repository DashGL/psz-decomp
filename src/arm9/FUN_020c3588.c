// FUN_020c3588 @ 0x020c3588 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// FUN_020c3588 @ 0x020c3588
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear four trailing words in reverse order and zero two embedded byte ranges.
 * Evidence: scratch/coverage-root/batch4/020c3588.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020656b8(void *,int,unsigned int);
void FUN_020c3588(unsigned int *self) {
    self[14]=0;self[13]=0;self[12]=0;self[11]=0;
    FUN_020656b8(self+1,0,24);FUN_020656b8(self+7,0,16);
}
