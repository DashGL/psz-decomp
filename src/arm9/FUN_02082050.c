// FUN_02082050 @ 0x02082050 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_02082050 @ 0x02082050 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Try shuffled slots until capacity or requested successes reached.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02082050.txt.
 */
extern void FUN_02083430(void *);extern int FUN_0208346c(void *),FUN_0208209c(void *,void *,int);unsigned int FUN_02082050(char *s,void *entry,unsigned int limit){int slots[5];unsigned int count=0;FUN_02083430(slots);while(slots[4]>0){if(*(int *)(s+2168)>=*(int *)(s+2172))break;if(FUN_0208209c(s,entry,FUN_0208346c(slots))){count++;if(count>=limit)break;}}return count;}
