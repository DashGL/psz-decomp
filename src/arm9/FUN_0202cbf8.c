// FUN_0202cbf8 @ 0x0202cbf8 (0x34, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
unsigned int FUN_0202cbf8(unsigned int value,unsigned int carry,int index,int count){while(carry && index<count){carry+=*(unsigned short *)(value+2*(unsigned int)index);*(unsigned short *)(value+2*(unsigned int)index)=(unsigned short)carry;++index;carry>>=16;}return value;}
