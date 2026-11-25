// FUN_0209cf54 @ 0x0209cf54 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_0209cf54 @ 0x0209cf54 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy owned bit arrays in reverse order.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209cf54.txt.
 */
extern void FUN_0207f060(void *),FUN_020ba8ac(void *);void *FUN_0209cf54(void **self){void *p=self[1];if(p){if(p){FUN_0207f060(p);FUN_020ba8ac(p);}self[1]=0;}p=self[0];if(p){if(p){FUN_0207f060(p);FUN_020ba8ac(p);}self[0]=0;}return self;}
