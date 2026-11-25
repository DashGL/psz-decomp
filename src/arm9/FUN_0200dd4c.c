// FUN_0200dd4c @ 0x0200dd4c (0x48, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_020118d0(unsigned int);
extern void FUN_020118e8(unsigned int,unsigned int,unsigned int);
void FUN_0200dd4c(unsigned int self){*(unsigned char *)(self+46)=0;*(unsigned char *)(self+45)=0;*(unsigned char *)(self+47)=0;*(unsigned short *)(self+52)=0;*(unsigned short *)(self+62)=0;*(unsigned char *)(self+64)=127;*(unsigned char *)(self+65)=127;FUN_020118d0(self+28);FUN_020118e8(self+28,0x7f00,1);}
