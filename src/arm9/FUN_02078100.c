// FUN_02078100 @ 0x02078100 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_02078100 @ 0x02078100 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install global receiver and create owned helper with two zero arguments.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078100.txt.
 */
extern void *FUN_020c149c(unsigned int,unsigned int);
void *FUN_02078100(void **self) { *self=0; *(void **)0x0211a3b4=self; *self=FUN_020c149c(0,0); return self; }
