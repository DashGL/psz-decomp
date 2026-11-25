// FUN_020a8e54 @ 0x020a8e54 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020a8e54 @ 0x020a8e54 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve global player slot and apply descriptor update.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a8e54.txt.
 */
extern char *FUN_02086e3c(void);extern void *FUN_020870c4(void *);extern int FUN_020ac930(void *);extern void FUN_020a8e8c(void *,int);void FUN_020a8e54(int value){void *p=*(void **)0x02108d04;if(p){int index;char *q;FUN_020870c4(FUN_02086e3c());index=FUN_020ac930(p);q=*(char **)(FUN_02086e3c()+20);if(q)FUN_020a8e8c(q+16*index,value);}}
