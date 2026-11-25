// FUN_0206b768 @ 0x0206b768 (0x7c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// USA command and bounded-copy operations; original return and reload behavior retained.
extern unsigned int FUN_0206b570(unsigned int,unsigned int,unsigned int);
unsigned int FUN_0206b768(unsigned int selector,unsigned int enabled,unsigned int callback,unsigned int argument){unsigned int command=0;if(selector==0){if(enabled==1)command=6;if(enabled==0)command=7;}else if(selector==1){if(enabled==1)command=4;if(enabled==0)command=5;}else if(selector==2){if(enabled==1)command=8;if(enabled==0)command=9;}if(!command)return 65535;return FUN_0206b570(command,callback,argument);}
