// FUN_02090848 @ 0x02090848 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
void FUN_02090848(unsigned int a0){volatile unsigned int *p=(volatile unsigned int *)0x04001000;unsigned int v=(*p&0x1f00)>>8;*p=(*p&~0x1f00u)|((a0|v)<<8);}
