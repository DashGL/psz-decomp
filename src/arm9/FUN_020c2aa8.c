// FUN_020c2aa8 @ 0x020c2aa8 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c2aa8 @ 0x020c2aa8
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize dispatch table, constant 25 at +8 and zero state words.
 * Evidence: scratch/coverage-root/batch4/020c2aa8.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
void *FUN_020c2aa8(unsigned int *self) {
    self[0]=0x020fcb00;self[1]=0;self[2]=25;self[3]=0;self[4]=0;self[5]=0;return self;
}
