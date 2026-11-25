// FUN_02070804 @ 0x02070804 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_02070804 @ 0x02070804 (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward receiver and key to helper with third argument one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02070804.txt.
 */
extern int FUN_0203a850(void *,void *,int);
int FUN_02070804(void *self,void *key) { return FUN_0203a850(self,key,1); }
