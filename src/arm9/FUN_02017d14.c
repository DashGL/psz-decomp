// FUN_02017d14 @ 0x02017d14 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02017bc8(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
unsigned int FUN_02017d14(unsigned int self,unsigned int data,unsigned int width,unsigned int height,unsigned int bits){return FUN_02017bc8(self,data,width,height,bits,0x020ebfac,width);}
