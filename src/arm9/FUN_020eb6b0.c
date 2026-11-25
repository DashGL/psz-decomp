// FUN_020eb6b0 @ 0x020eb6b0 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls retained; void result correctly ignored.
extern void FUN_02035408(unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_020eb6b0(void){FUN_02035408(0x020fb39c,4096,0,0xfffff000);FUN_02035408(0x020fb3a8,0xfffff000,0,0xfffff000);FUN_02035408(0x020fb3b4,8192,0,0xffffe000);}
