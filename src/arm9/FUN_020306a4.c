// FUN_020306a4 @ 0x020306a4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_020306a4 @ 0x020306a4 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 17.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b17/020306a4.txt.
 */
extern unsigned int FUN_02034a70(void *); extern unsigned int FUN_02030574(unsigned int,unsigned int); extern int FUN_0203496c(void *,unsigned int);
int FUN_020306a4(char *s) { if(*(void **)(s+0xc)) { unsigned int value=FUN_02034a70(*(void **)(s+0x28)); value=FUN_02030574(value,*(unsigned char *)(s+0x2e)); return FUN_0203496c(*(void **)(s+0xc),value); } return 0; }
