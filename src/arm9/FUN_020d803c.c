// FUN_020d803c @ 0x020d803c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/container leaf.
void FUN_020d803c(unsigned int p,unsigned int value){int count=*(int *)(p+64);if(count<20){*(unsigned int *)(p+64)=(unsigned int)count+1;*(unsigned char *)(p+(unsigned int)count+44)=value;}}
