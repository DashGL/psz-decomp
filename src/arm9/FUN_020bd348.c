// FUN_020bd348 @ 0x020bd348 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020bd348 @ 0x020bd348 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send record to enabled peer queues and report failures.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd348.txt.
 */
extern int FUN_020ba9cc(void *,void *);extern void FUN_020bdd60(void *,int);void FUN_020bd348(char *self,void *record){int i;for(i=0;i<4;i++){void *queue=*(void **)(self+32+4*i);if(queue && ((signed char *)self)[12+i]==1 && !FUN_020ba9cc(queue,record))FUN_020bdd60(self,i);}}
