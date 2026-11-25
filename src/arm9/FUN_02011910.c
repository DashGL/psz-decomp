// FUN_02011910 @ 0x02011910 (0x34, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern int FUN_0200a3a0(int,int);
unsigned int FUN_02011910(unsigned int self){int duration=*(int *)(self+12),elapsed=*(int *)(self+8);unsigned int start,end;if(elapsed>=duration)return *(unsigned int *)(self+4);start=*(unsigned int *)self;end=*(unsigned int *)(self+4);return start+(unsigned int)FUN_0200a3a0((int)((end-start)*(unsigned int)elapsed),duration);}
