// FUN_020118e8 @ 0x020118e8 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02011910(unsigned int);
void FUN_020118e8(unsigned int self,unsigned int end,unsigned int duration){unsigned int start=FUN_02011910(self);*(unsigned int *)self=start;*(unsigned int *)(self+4)=end;*(unsigned int *)(self+12)=duration;*(unsigned int *)(self+8)=0;}
