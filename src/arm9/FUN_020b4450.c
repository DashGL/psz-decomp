// FUN_020b4450 @ 0x020b4450 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020b4450 @ 0x020b4450 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize table and three fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b4450.txt.
 */
void *FUN_020b4450(char *self) { *(unsigned int *)self=0x020fc750; *(unsigned int *)(self+20)=0; self[24]=0; *(unsigned int *)(self+28)=0; return self; }
