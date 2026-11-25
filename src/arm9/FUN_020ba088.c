// FUN_020ba088 @ 0x020ba088 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020ba088 @ 0x020ba088 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize subsystem three then allocate32-byte root with null parent.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba088.txt.
 */
extern void FUN_02059cac(int); extern void *FUN_020ba918(unsigned int),*FUN_020ba038(void *,void *); void *FUN_020ba088(void) { void *p; FUN_02059cac(3); p=FUN_020ba918(32); if(p) p=FUN_020ba038(p,0); return p; }
