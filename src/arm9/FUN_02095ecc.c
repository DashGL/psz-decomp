// FUN_02095ecc @ 0x02095ecc (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_02095ecc @ 0x02095ecc (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release first-word object through optional global manager then clear receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02095ecc.txt.
 */
extern void FUN_02033db0(void *,void *); void FUN_02095ecc(void **self) { void *manager=*(void **)0x02108c84; if(manager) { FUN_02033db0(manager,*self); *self=0; } }
