// FUN_02046474 @ 0x02046474 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02046474 @ 0x02046474 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 14.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b14/02046474.txt.
 */
extern void FUN_02050018(int,void *,void *,int);
void FUN_02046474(void) { int *base=(int *)0x02108d6c; if(--base[9]<=0) { FUN_02050018(1,(void *)0x020464a1,((void **)base)[5],0); base[5]=0; } }
