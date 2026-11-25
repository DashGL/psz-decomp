// FUN_020928f4 @ 0x020928f4 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020928f4 @ 0x020928f4 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test selector-specific flag bits.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020928f4.txt.
 */
int FUN_020928f4(char *self,int selector) { if(selector==0) { if(*(unsigned int *)(self+304)&1) return 1; } else if(selector==1) { if(*(unsigned int *)(self+304)&2) return 1; } return 0; }
