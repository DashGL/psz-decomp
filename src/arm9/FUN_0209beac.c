// FUN_0209beac @ 0x0209beac (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0209beac @ 0x0209beac (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Use global random state if present, else fallback state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209beac.txt.
 */
extern unsigned int FUN_0209bed0(void *,unsigned int); unsigned int FUN_0209beac(unsigned int limit) { void *p=*(void **)0x0211a508; if(p) return FUN_0209bed0(p,limit); return FUN_0209bed0((void *)0x0211c844,limit); }
