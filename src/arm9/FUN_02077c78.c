// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_02077c78 @ 0x02077c78 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set selected current-bank entry word; signed slot must be [0,3).
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077c78.txt.
 */
// Typed view retains base-plus-index before member addressing; avoids folded
// offsets and preserves ROM bank/slot address scheduling.
typedef struct {unsigned int first,second;} Pair;
typedef struct {unsigned char pad[216];Pair slots[3];} View;
void FUN_02077c78(char *self,unsigned int value,int slot) { if(slot>=0 && slot<3) { View *bank=(View *)(self+24*(*(unsigned int *)(self+0xd4))); bank->slots[slot].first=value; } }
