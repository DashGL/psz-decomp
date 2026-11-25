// FUN_0206b8e0 @ 0x0206b8e0 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA interrupt registration and hardware operations; raw callback storage retained.
extern unsigned int FUN_0206bcec(void);
extern unsigned int FUN_0206b6c4(unsigned int,unsigned int);
unsigned int FUN_0206b8e0(unsigned int value){if(!FUN_0206bcec())return 0;return FUN_0206b6c4(2,value&65535);}
