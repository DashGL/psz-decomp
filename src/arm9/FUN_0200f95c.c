// FUN_0200f95c @ 0x0200f95c (0x6c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_0200efe0(unsigned int);
extern unsigned int FUN_0200eb78(void);
extern unsigned int FUN_0200f7e4(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_0200f008(unsigned int,unsigned int);
unsigned int FUN_0200f95c(unsigned int index,unsigned int owner,unsigned int cache){unsigned int result=FUN_0200efe0(index),context;if(!result){context=cache?FUN_0200eb78():0;result=FUN_0200f7e4(index,0x0200fbbc,context,index,owner);if(cache&&result)FUN_0200f008(index,result);}return result;}
