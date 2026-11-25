// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_02098248 @ 0x02098248 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return indexed word +50 for signed slot zero through four.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098248.txt.
 */
// Typed view retains base-plus-index before member addressing; avoids folded
// offsets and preserves ROM bank/slot address scheduling.
typedef struct {unsigned int pad[20]; unsigned int value;} View;
unsigned int FUN_02098248(unsigned int *self,int index) { if(index>=0 && index<5) return ((View *)(self+index))->value; return 0; }
