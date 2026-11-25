// FUN_020c2ca8 @ 0x020c2ca8 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020c2ca8 @ 0x020c2ca8
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear leading words, initialize embedded +c and clear six trailing words; return receiver.
 * Evidence: scratch/coverage-root/batch4/020c2ca8.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c2b30(void *);
void *FUN_020c2ca8(unsigned int *self) {
    self[0]=0;self[1]=0;self[2]=0;FUN_020c2b30(self+3);
    self[17]=0;self[18]=0;self[19]=0;self[20]=0;self[21]=0;self[22]=0;return self;
}
