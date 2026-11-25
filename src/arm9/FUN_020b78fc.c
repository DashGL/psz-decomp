// FUN_020b78fc @ 0x020b78fc (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020b78fc @ 0x020b78fc (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct base and initialize derived fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b78fc.txt.
 */
extern void FUN_020407cc(void *); void *FUN_020b78fc(char *self) { FUN_020407cc(self); *(unsigned int *)self=0x020fc7d8; *(int *)(self+136)=0; *(unsigned short *)(self+140)=65535; *(int *)(self+144)=0; *(int *)(self+148)=9; return self; }
