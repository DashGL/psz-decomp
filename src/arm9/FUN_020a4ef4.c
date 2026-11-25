// FUN_020a4ef4 @ 0x020a4ef4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020a4ef4 @ 0x020a4ef4 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear selected entry flag and reset selection sentinels.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a4ef4.txt.
 */
void FUN_020a4ef4(char *self){((unsigned short *)(self+84))[*(int *)(self+228)]&=~4;*(int *)(self+228)=-1;*(int *)(self+232)=-1;*(int *)(self+212)=-1;*(int *)(self+236)=0;}
