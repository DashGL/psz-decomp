// FUN_02094124 @ 0x02094124 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02094124 @ 0x02094124 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Match signed tags and either identifier, then return record value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094124.txt.
 */
int FUN_02094124(char *self,int tag,unsigned int a,unsigned int b,int secondary) { if(*(signed char *)(self+12)==tag && (*(unsigned int *)(self+4)==a || *(unsigned int *)(self+8)==b)) { int value=*(signed char *)(self+13); if(value<0 || value==secondary) return *(int *)self; } return -1; }
