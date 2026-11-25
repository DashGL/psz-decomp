// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_0208555c @ 0x0208555c (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve child pointer when slot valid and state differs from one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208555c.txt.
 */
// A typed slot view forces base-plus-index before the byte member access,
// retaining the ROM add/add/ldrb sequence instead of an indexed byte load.
typedef struct { unsigned char pad[140]; void *child; unsigned char gap[5]; unsigned char state; } SlotView;
void *FUN_0208555c(int index) {
    char *p=*(char **)0x0211a52c;
    if(p && index>=0 && index<4) {
        SlotView *slot=(SlotView *)(p+148*index);
        if(slot->state!=1) return slot->child;
    }
    return 0;
}
