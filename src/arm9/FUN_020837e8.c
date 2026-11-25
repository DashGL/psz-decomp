// FUN_020837e8 @ 0x020837e8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020837e8 @ 0x020837e8 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve manager entry four and filter nested signed byte tag 61.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020837e8.txt.
 */
extern void *FUN_020352a4(void *,int); extern char *FUN_020352c0(void *); void *FUN_020837e8(void) { char *p=FUN_020352c0(FUN_020352a4(*(void **)0x02108cf4,4)); if(p && *** (signed char ***)(p+20)==61) return p; return 0; }
