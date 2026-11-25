// FUN_02096a8c @ 0x02096a8c (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_02096a8c @ 0x02096a8c (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Submit every pair to current owner with zero mode.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096a8c.txt.
 */
extern void FUN_02097d5c(void *,void *,int); void FUN_02096a8c(char *self) { if(*(void **)(self+32)) { int i; for(i=0;i<*(int *)(self+4);i++) FUN_02097d5c(*(void **)(self+32),self+8+8*i,0); } }
