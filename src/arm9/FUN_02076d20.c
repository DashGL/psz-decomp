// FUN_02076d20 @ 0x02076d20 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076d20 @ 0x02076d20 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Request global resource for signed child slot and latch success.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076d20.txt.
 */
extern int FUN_02033418(void *,int,int); void FUN_02076d20(unsigned int *self) { if(self[18]==0) { signed char *child=(signed char *)self[17]; if(FUN_02033418(*(void **)0x02108c68,3,child[4])) self[18]=1; } }
