// FUN_020c1f94 @ 0x020c1f94 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020c1f94 @ 0x020c1f94
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear manager state and three slots; initialize three embedded 20-byte records; return receiver.
 * Evidence: scratch/coverage-root/batch8/020c1f94.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0201347c(void *);
void *FUN_020c1f94(unsigned int *self) {
    int i;self[0]=0;self[19]=0;self[20]=0;for(i=0;i<3;i++)self[i+1]=0;
    for(i=0;i<3;i++)FUN_0201347c((char *)self+16+20*i);
    return self;
}
