// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020be1c4 @ 0x020be1c4 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020be1c4 @ 0x020be1c4 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Activate up to two bounded peer records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be1c4.txt.
 */
extern void FUN_020be2f4(void *,int);void FUN_020be1c4(char *self,int a,int b,unsigned int unused){char *p=*(char **)(self+3920);if(p){if(a>=0 && a<64)FUN_020be2f4(p+24*a,1);if(b>=0 && b<64)FUN_020be2f4(*(char **)(self+3920)+24*b,1);}}
