// FUN_020bbbc4 @ 0x020bbbc4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020bbbc4 @ 0x020bbbc4 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Register callback and report status two.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bbbc4.txt.
 */
extern int FUN_02054210(void *); extern void FUN_020bb7b8(void); int FUN_020bbbc4(void) { if(FUN_02054210((void *)FUN_020bb7b8)==2) return 1; return 0; }
