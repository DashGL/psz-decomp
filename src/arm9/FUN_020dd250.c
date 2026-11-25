// FUN_020dd250 @ 0x020dd250 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020dd270(unsigned int);
extern unsigned int FUN_020dd298(unsigned int);
unsigned int FUN_020dd250(unsigned int self){if(FUN_020dd270(self)&&FUN_020dd298(self))return 1;return 0;}
