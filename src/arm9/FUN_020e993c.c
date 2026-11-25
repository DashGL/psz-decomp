// FUN_020e993c @ 0x020e993c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA state and record wrappers; pointer reloads and scalar returns retained.
extern unsigned int FUN_020e9bd4(unsigned int);
extern unsigned int FUN_020e9bf8(unsigned int);
unsigned int FUN_020e993c(unsigned int index,unsigned int callback,unsigned int argument){unsigned int record=FUN_020e9bd4(index);if(FUN_020e9bf8(index)==2)return 0;*(unsigned int *)(record+4)=callback;*(unsigned int *)(record+8)=argument;*(unsigned char *)(record+29)=1;*(unsigned int *)(record+16)=0;*(unsigned int *)(record+24)=0;return 1;}
