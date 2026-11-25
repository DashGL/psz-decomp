// FUN_02084c80 @ 0x02084c80 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_02084c80 @ 0x02084c80 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Find player matching current compact descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084c80.txt.
 */
extern void FUN_020316e8(void *,void *);extern char *FUN_0208558c(int);extern int FUN_020857fc(void *,int);int FUN_02084c80(void){char desc[4];int i;FUN_020316e8(desc,*(char **)0x02108c64+20);for(i=0;i<4;i++){char *p=FUN_0208558c(i);if(p && FUN_020857fc(desc,*(int *)(p+252))==1)return i;}return 0;}
