// FUN_020c4870 @ 0x020c4870 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c4870 @ 0x020c4870
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward three inputs after global manager when manager and second input are nonzero.
 * Evidence: scratch/coverage-root/batch5/020c4870.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int FUN_020c48e8(void *,unsigned int,void *,unsigned int);
unsigned int FUN_020c4870(unsigned int arg,void *buffer,unsigned int option) { void *manager=*(void **)0x0211ceec;if(manager && buffer)return FUN_020c48e8(manager,arg,buffer,option);return 0; }
