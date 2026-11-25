// FUN_02084370 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02084370 @ 0x02084370 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate/initialize 72-byte object in global word +c.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084370.txt.
 */
extern char G_0211A500[];
extern void *FUN_020ba894(unsigned int), *FUN_02084394(void *);
void FUN_02084370(void) { if(!((void **)G_0211A500)[3]) { void *object=FUN_020ba894(72); if(object) object=FUN_02084394(object); ((void **)G_0211A500)[3]=object; } }
