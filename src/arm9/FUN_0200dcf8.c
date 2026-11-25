// FUN_0200dcf8 @ 0x0200dcf8 (0x54, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02011b20(unsigned int,unsigned int);
extern void FUN_02011ac0(unsigned int,unsigned int);
extern void FUN_0200f0d0(unsigned int);
unsigned int FUN_0200dcf8(unsigned int index,unsigned int owner){unsigned int list=0x02102288+36*index,p=FUN_02011b20(list+12,0);if(!p)return 0;FUN_02011ac0(list+12,p);*(unsigned int *)(p+12)=owner;*(unsigned int *)(owner+8)=p;FUN_0200f0d0(*(unsigned int *)(p+8));return *(unsigned int *)(p+8);}
