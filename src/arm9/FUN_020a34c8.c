// FUN_020a34c8 @ 0x020a34c8 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020a34c8 @ 0x020a34c8 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy four embedded members and resource bases.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a34c8.txt.
 */
extern void FUN_020306fc(void *),FUN_02099f10(void *),FUN_0209a458(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_020a34c8(char *s){FUN_020306fc(s+316);FUN_020306fc(s+308);FUN_020306fc(s+300);FUN_020306fc(s+292);FUN_02099f10(s+76);FUN_0209a458(s+48);FUN_020303bc(s);return s;}
