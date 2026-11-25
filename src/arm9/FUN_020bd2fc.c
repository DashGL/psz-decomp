// FUN_020bd2fc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020bd2fc @ 0x020bd2fc (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Free second incoming argument through optional global nested allocator.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd2fc.txt.
 */
extern char G_0211B3BC[];
extern void FUN_020c1430(void *,void *); void FUN_020bd2fc(void *unused,void *allocation) { char *p=((char **)G_0211B3BC)[2]; if(p) { void *heap=*(void **)(p+3896); if(heap) FUN_020c1430(heap,allocation); } }
