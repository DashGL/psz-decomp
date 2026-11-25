// FUN_02090ba8 @ 0x02090ba8 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02090ba8 @ 0x02090ba8 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily construct singleton and refresh global value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02090ba8.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_02090b6c(void *); extern unsigned int FUN_020c1814(void); void FUN_02090ba8(void) { if(!*(void **)0x0211a59c) { void *p=FUN_020ba894(60); if(p) p=FUN_02090b6c(p); *(void **)0x0211a59c=p; } { unsigned int value=FUN_020c1814(); ((unsigned int *)*(void **)0x0211a59c)[4]=value; } }
