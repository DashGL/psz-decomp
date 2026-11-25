// FUN_02073650 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02073650 @ 0x02073650 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset global state then set mode byte.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073650.txt.
 */
extern char G_0211A230[];
extern void FUN_02073678(void);
void FUN_02073650(void) { FUN_02073678(); ((unsigned char *)G_0211A230)[12]=1; }
