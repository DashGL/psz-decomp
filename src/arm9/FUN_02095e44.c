// FUN_02095e44 @ 0x02095e44 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02095e44 @ 0x02095e44 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy singleton, clear global before freeing and clear again.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02095e44.txt.
 */
extern void FUN_02095ecc(void *),FUN_020ba8ac(void *); void FUN_02095e44(void) { void *p=*(void **)0x0211a5d4; if(p) { if(p) { FUN_02095ecc(p); *(void **)0x0211a5d4=0; FUN_020ba8ac(p); } *(void **)0x0211a5d4=0; } }
