// FUN_020a6804 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020a6804 @ 0x020a6804 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy optional global object through virtual slot four with nested guard.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a6804.txt.
 */
extern char G_0211A994[];
void FUN_020a6804(void) { void *p=((void **)G_0211A994)[1]; if(p) { if(p) { void (**table)(void *)=*(void (***)(void *))p; table[1](p); } } }
