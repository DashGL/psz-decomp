// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x16, exact bytes and relocation targets.
// FUN_02077c98 @ 0x02077c98 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read current-bank entry first word; no slot bounds guard.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077c98.txt.
 */
// Typed view retains base-plus-index before member addressing; avoids folded
// offsets and preserves ROM bank/slot address scheduling.
typedef struct {unsigned int first,second;} Pair;
typedef struct {unsigned char pad[216];Pair slots[3];} View;
unsigned int FUN_02077c98(char *self,unsigned int slot) { View *bank=(View *)(self+24*(*(unsigned int *)(self+0xd4))); return bank->slots[slot].first; }
