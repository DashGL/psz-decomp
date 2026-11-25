// FUN_020eb448 @ 0x020eb448 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls retained; void setter return correctly ignored.
extern void FUN_02042960(unsigned int,unsigned int);
void FUN_020eb448(void){FUN_02042960(0x020f97f4,28672);FUN_02042960(0x020f97f0,122880);FUN_02042960(0x020f97ec,28672);FUN_02042960(0x020f97e8,69632);FUN_02042960(0x020f97e4,2048);FUN_02042960(0x020f97e0,102400);}
