// FUN_020eb38c @ 0x020eb38c (0x84, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls and scalar returns retained.
extern unsigned int FUN_0203fd88(unsigned int);
extern unsigned int FUN_0204682c(unsigned int);
extern unsigned int FUN_0200c394(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
unsigned int FUN_020eb38c(void){FUN_0203fd88(0x020f8e5c);FUN_0204682c(0x020f8e6c);FUN_0200c394(0x0210b340,149,14,0x0203fd89,0);FUN_0200c394(0x0210d1e8,149,28,0x0204682d,0);FUN_0203fd88(0x02108db2);FUN_0204682c(0x02108e20);FUN_0203fd88(0x02108dc0);FUN_0204682c(0x02108e3c);FUN_0203fd88(0x02108da4);return FUN_0204682c(0x02108e58);}
