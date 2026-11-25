// FUN_0209a8dc @ 0x0209a8dc (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0209a8dc @ 0x0209a8dc (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch singleton state one or two.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a8dc.txt.
 */
extern void FUN_0209a908(void *),FUN_0209a920(void *); void FUN_0209a8dc(void) { unsigned int *p=*(unsigned int **)0x0211a61c; if(p) { switch(p[0]) { case 0:break; case 1:FUN_0209a908(p);break; case 2:FUN_0209a920(p);break; default:break; } } }
