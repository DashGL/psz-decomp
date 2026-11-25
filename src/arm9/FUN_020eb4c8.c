// FUN_020eb4c8 @ 0x020eb4c8 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls retained; void result correctly ignored.
extern unsigned int FUN_020328d8(unsigned int);
extern unsigned int FUN_02078d44(unsigned int);
extern unsigned int FUN_020787f0(unsigned int);
extern void FUN_0200c394(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_020eb4c8(void){FUN_020328d8(0x0211a3fc);FUN_02078d44(0x0211a3e4);FUN_020787f0(0x0211a3c4);FUN_0200c394(0x0211a3d4,4,4,0x02078d55,0);}
