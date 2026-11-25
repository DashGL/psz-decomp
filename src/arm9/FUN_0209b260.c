// FUN_0209b260 @ 0x0209b260 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_0209b260 @ 0x0209b260 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy embedded resource members and free owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209b260.txt.
 */
extern void FUN_020306fc(void *),FUN_02099f10(void *),FUN_0209a458(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_0209b260(char *s){FUN_020306fc(s+312);FUN_020306fc(s+304);FUN_020306fc(s+296);FUN_02099f10(s+80);FUN_0209a458(s+48);FUN_020303bc(s);FUN_020ba8ac(s);return s;}
