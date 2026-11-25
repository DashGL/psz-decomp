// FUN_020c062c @ 0x020c062c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// FUN_020c062c @ 0x020c062c
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear selected byte, halfword and word fields then initialize embedded +24 record; interior bytes +0x12..+0x21 remain untouched.
 * Evidence: scratch/coverage-root/batch2/020c062c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c4560(void *);
void FUN_020c062c(char *self) {
    self[0]=0;self[1]=0;self[2]=0;self[3]=0;
    *(short *)(self+4)=0;*(short *)(self+6)=0;
    *(int *)(self+8)=0;*(int *)(self+12)=0;
    *(short *)(self+16)=0;*(short *)(self+34)=0;
    FUN_020c4560(self+36);
}
