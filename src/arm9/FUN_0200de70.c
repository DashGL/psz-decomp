// FUN_0200de70 @ 0x0200de70 (0x68, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02011b20(unsigned int,unsigned int);
extern unsigned int FUN_02011a5c(unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_02011ac0(unsigned int,unsigned int);
extern unsigned int FUN_020119b8(unsigned int,unsigned int);
extern unsigned int FUN_0200de38(unsigned int);
extern unsigned int FUN_0200dde4(unsigned int);
unsigned int FUN_0200de70(int priority){unsigned int node=FUN_02011b20(0x02101e30,0);if(!node){node=FUN_02011b20(0x02101e3c,0);if(priority<(int)*(unsigned char *)(node+61))return 0;FUN_0200de38(node);}FUN_02011ac0(0x02101e30,node);*(unsigned char *)(node+61)=(unsigned char)priority;FUN_0200dde4(node);return node;}
