// FUN_0209b224 @ 0x0209b224 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_0209b224 @ 0x0209b224 (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy embedded components and base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209b224.txt.
 */
extern void FUN_020306fc(void *),FUN_02099f10(void *),FUN_0209a458(void *),FUN_020303bc(void *);void *FUN_0209b224(char *self){FUN_020306fc(self+312);FUN_020306fc(self+304);FUN_020306fc(self+296);FUN_02099f10(self+80);FUN_0209a458(self+48);FUN_020303bc(self);return self;}
