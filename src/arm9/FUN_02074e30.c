// FUN_02074e30 @ 0x02074e30 (0x6a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02074e30 @ 0x02074e30 (inventory code 0x6a, thumb)
// check: 2.0/sp2p3 target=0x6a candidate=0x6a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set actor flags for eligible active list entries.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074e30.txt.
 */
extern int FUN_0207f770(void *);void FUN_02074e30(char *s){int clear=FUN_0207f770(s+100)!=1,i;for(i=0;i<*(int *)(s+180);i++){char *record=*(char **)(s+176)+8*i;short flags=*(short *)(record+4);if((flags&1) && (flags&2)){char *p=*(char **)record;if(p){if(clear)*(int *)(p+228)&=~1;else *(int *)(p+228)|=1;}}}}
