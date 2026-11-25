// FUN_0207ec5c @ 0x0207ec5c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207ec5c @ 0x0207ec5c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize base, install derived table, clear halfword +104; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207ec5c.txt.
 */
extern void FUN_0204734c(void *);
void *FUN_0207ec5c(char *self) { FUN_0204734c(self); *(unsigned int *)self=0x020fa460; *(unsigned short *)(self+0x104)=0; return self; }
