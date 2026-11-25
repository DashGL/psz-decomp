// FUN_020bad50 @ 0x020bad50 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020bad50 @ 0x020bad50 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward three incoming arguments to optional global receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bad50.txt.
 */
extern void FUN_020bad70(void *,unsigned int,void *,unsigned int); void FUN_020bad50(unsigned int a,void *b,unsigned int c) { void *p=*(void **)0x0211b2bc; if(p) FUN_020bad70(p,a,b,c); }
