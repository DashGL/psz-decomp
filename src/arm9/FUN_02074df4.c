// FUN_02074df4 @ 0x02074df4 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02074df4 @ 0x02074df4 (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release each record resource then its array.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074df4.txt.
 */
extern void FUN_020472bc(void *),FUN_020ba8b4(void *); void FUN_02074df4(char *self) { int i; if(*(void **)(self+176)) { for(i=0;i<*(int *)(self+180);i++) FUN_020472bc(*(void **)(*(char **)(self+176)+8*i)); FUN_020ba8b4(*(void **)(self+176)); *(void **)(self+176)=0; } }
