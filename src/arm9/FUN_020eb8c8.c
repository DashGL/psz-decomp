// FUN_020eb8c8 @ 0x020eb8c8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA game static initialization; constructor calls retained with their void return contracts.
extern void FUN_02042960(unsigned int,unsigned int);
void FUN_020eb8c8(void){FUN_02042960(0x020fc988,0);FUN_02042960(0x020fc98c,4);}
