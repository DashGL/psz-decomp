// FUN_02098dcc @ 0x02098dcc (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_02098dcc @ 0x02098dcc (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve player and test one of three flag bits.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098dcc.txt.
 */
extern char *FUN_02098558(void *); int FUN_02098dcc(void *self,int bit) { if(bit>=0 && bit<3) { char *p=FUN_02098558(self); if(p) return (*(unsigned int *)(p+692)&(1u<<bit))!=0; } return 0; }
