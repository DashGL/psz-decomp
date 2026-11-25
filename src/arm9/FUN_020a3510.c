// FUN_020a3510 @ 0x020a3510 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020a3510 @ 0x020a3510 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy four members, resource bases and owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a3510.txt.
 */
extern void FUN_020306fc(void *),FUN_02099f10(void *),FUN_0209a458(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_020a3510(char *s){FUN_020306fc(s+316);FUN_020306fc(s+308);FUN_020306fc(s+300);FUN_020306fc(s+292);FUN_02099f10(s+76);FUN_0209a458(s+48);FUN_020303bc(s);FUN_020ba8ac(s);return s;}
