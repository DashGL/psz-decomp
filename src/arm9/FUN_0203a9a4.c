// FUN_0203a9a4 @ 0x0203a9a4 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203a9a4 @ 0x0203a9a4 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/0203a9a4.txt.
 */
extern void *FUN_0204f3b8(void); extern void FUN_0204f458(void *,unsigned int);
void FUN_0203a9a4(char *s,int clear) { FUN_0204f458(FUN_0204f3b8(),*(unsigned int *)(s+0x1b4)); *(unsigned int *)(s+0x1b4)=0; if(clear) *(unsigned short *)(s+0x154)=0; s[0x143]=0; }
