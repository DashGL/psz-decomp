// FUN_020e9984 @ 0x020e9984 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA state and record wrappers; pointer reloads and scalar returns retained.
extern unsigned int FUN_02003d54(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020e9984(unsigned int record,unsigned int value,unsigned int pointer){unsigned int result=FUN_02003d54(record+6,0x02101870,2);*(unsigned short *)(record+4)=value;*(unsigned int *)record=pointer;return result;}
