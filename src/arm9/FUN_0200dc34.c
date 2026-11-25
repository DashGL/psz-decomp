// FUN_0200dc34 @ 0x0200dc34 (0x50, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02069510(unsigned int,unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_02069628(unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_0200dd4c(unsigned int);
extern unsigned int FUN_02069e58(void);
unsigned int FUN_0200dc34(unsigned int self,unsigned int a,unsigned int b,unsigned int c){unsigned int owner=*(unsigned int *)(self+4),value;FUN_02069510(*(unsigned char *)(self+60),a,b,c);value=*(unsigned int *)(owner+28);if(value)FUN_02069628(*(unsigned char *)(self+60),65535,value);FUN_0200dd4c(self);*(unsigned int *)(self+48)=FUN_02069e58();*(unsigned char *)(self+47)=1;*(unsigned char *)(self+44)=1;return 1;}
