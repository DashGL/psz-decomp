// FUN_020c1f70 @ 0x020c1f70 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch51-manifest.json; original draft retained for referenced provenance.
// FUN_020c1f70 @ 0x020c1f70
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance cursor word +14 by four times first input byte and forward receiver/input to base helper.
 * Evidence: scratch/coverage-root/batch3/020c1f70.txt.
 * Void packet dispatch contract: matching ARM9 batch51, concrete73C14 transport callback.
 */
extern void FUN_020bce24(void *,void *);
void FUN_020c1f70(unsigned int *self,unsigned char *input) { self[5]+=4*input[0];FUN_020bce24(self,input); }
