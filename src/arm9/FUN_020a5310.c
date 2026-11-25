// FUN_020a5310 @ 0x020a5310 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020a5310 @ 0x020a5310 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Require first global condition and absence of second.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a5310.txt.
 */
extern int FUN_020c4848(void),FUN_020c2e38(void); int FUN_020a5310(void) { if(!FUN_020c4848()) return 0; if(!FUN_020c2e38()) return 1; return 0; }
