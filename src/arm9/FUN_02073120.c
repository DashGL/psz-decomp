// FUN_02073120 @ 0x02073120 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02073120 @ 0x02073120 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch active mode query with nullable managers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073120.txt.
 */
extern int FUN_02074cf8(void *),FUN_02073f7c(void *); int FUN_02073120(void) { char *g=(char *)0x0211a210; switch(((signed char *)g)[4]) { case 1:return 1; case 2:if(*(void **)(g+36)) return FUN_02074cf8(*(void **)(g+36)); break; case 3:if(*(void **)(g+40)) return FUN_02073f7c(*(void **)(g+40)); break; } return 0; }
