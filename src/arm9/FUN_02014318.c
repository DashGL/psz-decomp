// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// Match recovery 2026-11-12: preserve each ROM callback literal as an
// address symbol; odd suffixes intentionally retain the Thumb state bit.
// These expressions store/pass raw callback addresses, not data loads.
extern unsigned char DAT_020139f4[];
extern unsigned char DAT_02013b08[];
extern unsigned char DAT_02013b8c[];
extern unsigned char DAT_02013d78[];
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_020654b4(unsigned int,unsigned int,unsigned int);
unsigned int FUN_02014318(unsigned int self){FUN_020654b4(0,self,72);*(unsigned int *)(self+16)=1;*(unsigned int *)(self+20)=3;*(unsigned int *)(self+24)=((unsigned int)DAT_020139f4 + 0u);*(unsigned int *)(self+28)=((unsigned int)DAT_02013b08 + 0u);*(unsigned int *)(self+32)=((unsigned int)DAT_02013b8c + 0u);*(unsigned int *)(self+36)=((unsigned int)DAT_02013d78 + 0u);return ((unsigned int)DAT_02013d78 + 0u);}
