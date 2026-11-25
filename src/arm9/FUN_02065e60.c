// FUN_02065e60 @ 0x02065e60 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 supporting resource/runtime leaf reconstructed from actual instructions.
unsigned int FUN_02065e60(unsigned int value){volatile unsigned short *ime=(volatile unsigned short *)0x04000208;volatile unsigned int *reg=(volatile unsigned int *)0x04000214;unsigned int saved=*ime,old;*ime=0;old=*reg;*reg=value;(void)*ime;*ime=saved;return old;}
