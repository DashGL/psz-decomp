// FUN_020bde30 @ 0x020bde30 (0x52, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020bde30 @ 0x020bde30 (inventory code 0x52, thumb)
// check: 2.0/sp2p3 target=0x52 candidate=0x52 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Refresh remote peer availability states.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bde30.txt.
 */
extern char *FUN_020c072c(void);extern int FUN_020dd6c4(void *),FUN_020dd250(void *);extern void FUN_020be2f4(void *,int);void FUN_020bde30(char *s){if(*(void **)(s+3920)){char *peer=FUN_020c072c();if(peer){char *record=*(char **)(s+3920);int i;for(i=0;i<64;i++,peer+=12,record+=24){if(FUN_020dd6c4(peer)==1){if(FUN_020dd250(peer)!=1)FUN_020be2f4(record,1);}else FUN_020be2f4(record,0);}}}}
