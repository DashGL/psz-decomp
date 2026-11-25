// FUN_0207981c @ 0x0207981c (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207981c @ 0x0207981c (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch helper only for halfword state one; other states have no effect.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207981c.txt.
 */
extern void FUN_02079874(void *);
void FUN_0207981c(char *self) { switch(*(unsigned short *)(self+16)) { case 0: break; case 1: FUN_02079874(self); break; case 2: break; } }
