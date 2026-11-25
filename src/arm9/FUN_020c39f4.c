// FUN_020c39f4 @ 0x020c39f4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c39f4 @ 0x020c39f4
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve receiver subobject and report whether lookup result differs from ffff.
 * Evidence: scratch/coverage-root/batch5/020c39f4.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void *FUN_020c39b4(void *);
extern unsigned int FUN_02016cec(void *,unsigned int);
int FUN_020c39f4(void *self,unsigned int code) { void *object=FUN_020c39b4(self);if(object) { if(FUN_02016cec(object,code)!=0xffff)return 1;return 0; }return 0; }
