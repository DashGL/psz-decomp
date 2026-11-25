// FUN_020b80f0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// FUN_020b80f0 @ 0x020b80f0 (inventory code 0x24, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Call first virtual method for a populated global slot.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b80f0.txt.
 */
extern void * D_020fc854[];
typedef int (*Method)(void *); int FUN_020b80f0(int index) { if(index>=0 && index<4) { void *p=D_020fc854[index]; if(p) return (*(Method **)p)[0](p); return 1; } return 1; }
