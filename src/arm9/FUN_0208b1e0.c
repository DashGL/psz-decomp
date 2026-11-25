// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3a, exact bytes and relocation targets.
// Evidence: notes/sessions/matching-upper-resume-2026-11-12.md
typedef struct {unsigned char fields[4];} Copy_0208b1e0;
// FUN_0208b1e0 @ 0x0208b1e0 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Accept base categories or tagged category three.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208b1e0.txt.
 */
extern int FUN_0203a1a8(void *,int);int FUN_0208b1e0(void *unused,unsigned char *desc){unsigned char copy[4];int i;switch(desc[0]){case 0:case 1:return 1;case 3:*(Copy_0208b1e0 *)copy=*(const Copy_0208b1e0 *)desc;if(FUN_0203a1a8(copy,1))return 1;break;}return 0;}
