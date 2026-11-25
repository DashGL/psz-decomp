// FUN_020bde84 @ 0x020bde84 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020bde84 @ 0x020bde84 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Mark newly detected peer records across fixed network table.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bde84.txt.
 */
extern char *FUN_020c072c(void);extern int FUN_020dd6c4(void *);extern void FUN_020be2f4(void *,int);void FUN_020bde84(char *s){if(*(char **)(s+3920)){char *peer=FUN_020c072c();if(peer){char *record=*(char **)(s+3920);int i;for(i=0;i<64;i++,peer+=12,record+=24)if(FUN_020dd6c4(peer)==1 && *(signed char *)record==0)FUN_020be2f4(record,5);}}}
