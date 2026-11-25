// FUN_020eb90c @ 0x020eb90c (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls retained; void result correctly ignored.
extern void FUN_02042960(unsigned int,unsigned int);
void FUN_020eb90c(void){FUN_02042960(0x020fca60,12288);FUN_02042960(0x020fca5c,16384);FUN_02042960(0x020fca58,122880);FUN_02042960(0x020fca54,131072);}
