// FUN_020856f4 @ 0x020856f4 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_020856f4 @ 0x020856f4 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve active peer record, including redirected slot.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020856f4.txt.
 */
extern char *UNK_0211a52c;void *FUN_020856f4(int index){char *base=UNK_0211a52c;if(base && index>=0 && index<4){int offset=148*index;if(*(int *)(base+136+offset)==index && *(unsigned char *)(base+149+offset)!=1){if(*(unsigned char *)(base+148+offset)==3){int other=*(int *)(base+596);if(other>=0 && other<4)return base+144+148*other;}else return base+144+offset;}}return 0;}
