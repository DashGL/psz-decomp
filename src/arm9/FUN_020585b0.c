// FUN_020585b0 @ 0x020585b0 (0x5c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_020585b0 @ 0x020585b0 (inventory code 0x5c, arm)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 230.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b230/020585b0.txt.
 */
extern unsigned int FUN_020683d4(void),FUN_020683e8(unsigned int);extern void FUN_02066a2c(void *);void FUN_020585b0(char *s,int result){unsigned int irq=FUN_020683d4();char *previous=*(char **)s,*next=*(char **)(s+4);if(previous)*(char **)(previous+4)=next;if(next)*(char **)next=previous;*(unsigned int *)s=0;*(unsigned int *)(s+4)=0;*(unsigned int *)(s+12)&=~79u;*(int *)(s+20)=result;FUN_02066a2c(s+24);FUN_020683e8(irq);}
