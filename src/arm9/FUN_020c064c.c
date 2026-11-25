// FUN_020c064c @ 0x020c064c (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// FUN_020c064c @ 0x020c064c
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Pack 7/4/5-bit inputs into halfword +4, preserving receiver as return.
 * Evidence: scratch/coverage-root/batch2/020c064c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
void *FUN_020c064c(char *self,unsigned int a,unsigned int b,unsigned int c) {
    *(unsigned short *)(self+4)=((a&127)<<9)|((b&15)<<5)|(c&31); return self;
}
