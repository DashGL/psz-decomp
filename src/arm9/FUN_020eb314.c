// FUN_020eb314 @ 0x020eb314 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls retained; void setter return correctly ignored.
extern void FUN_02042960(unsigned int,unsigned int);
void FUN_020eb314(void){FUN_02042960(0x020f8e18,8192);FUN_02042960(0x020f8e24,9011);FUN_02042960(0x020f8e20,4096);FUN_02042960(0x020f8e1c,4915);FUN_02042960(0x020f8e28,6144);FUN_02042960(0x020f8e2c,8192);FUN_02042960(0x020f8e30,10240);FUN_02042960(0x020f8e34,12288);}
