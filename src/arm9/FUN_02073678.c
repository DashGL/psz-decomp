// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_02073678 @ 0x02073678
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear global mode byte then reset four 80-byte records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073678.txt.
 */
extern unsigned char data_0211a230[];
extern char data_0211a250[];
extern void FUN_020b3bc0(void *);
void FUN_02073678(void) {
    int i; data_0211a230[12]=0;
    for(i=0;i<4;i++) FUN_020b3bc0(data_0211a250+80*i);
}
