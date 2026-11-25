// FUN_020a65c8 @ 0x020a65c8 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020a65c8 @ 0x020a65c8 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear three global bytes in target order.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a65c8.txt.
 */
void FUN_020a65c8(void) { unsigned char *p=(unsigned char *)0x0211a994; p[2]=0; p[0]=0; p[1]=0; }
