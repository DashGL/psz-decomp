// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// Access-specific ROM pools: copy source0211a3fc has its own pool; flags
// and pending word use0211a3b8+2 and +0x5c, even though0211a3fc is nearer.
extern struct { unsigned short unused, flags; unsigned char pad[88]; unsigned int value; } DAT_0211a3b8;
extern unsigned char DAT_0211a3fc[];
// FUN_020782b4 @ 0x020782b4 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Consume pending global bit zero, copy pending data and word +5c into self, clear bit and report success.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020782b4.txt.
 */
extern void FUN_02078268(void *,void *);
int FUN_020782b4(char *self) {
    if(DAT_0211a3b8.flags&1) {
        FUN_02078268(self,DAT_0211a3fc);
        *(unsigned int *)(self+24)=DAT_0211a3b8.value;
        DAT_0211a3b8.flags&=~1u;
        return 1;
    }
    return 0;
}
