// FUN_02074c4c @ 0x02074c4c (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02074c4c @ 0x02074c4c (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Consume pending action and start selected network mode.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074c4c.txt.
 */
extern int FUN_02074d50(void *); extern void FUN_02073650(void),FUN_02073664(void),FUN_020baf70(void *),FUN_020baf84(void *); void FUN_02074c4c(int *self) { switch(FUN_02074d50(self)) { case 1: FUN_02073650(); FUN_020baf70((void *)self[9]); self[8]=1; break; case 2:FUN_02073664(); FUN_020baf84((void *)self[9]); self[8]=2; break; } }
