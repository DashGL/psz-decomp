// FUN_020af194 @ 0x020af194 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020af194 @ 0x020af194 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Move selection cursor and wrap at list boundaries.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020af194.txt.
 */
extern int FUN_0208e6c4(void *,int,int,int);int FUN_020af194(int *s,int unused,int direction){int result=FUN_0208e6c4(s,direction,1,0),count=s[24],limit=count<4?count:4;if(direction==0){if(s[21]>0)s[21]--;else if(count-1==s[1])s[21]=limit-1;}else if(direction==1){if(s[21]<limit-1)s[21]++;else if(s[1]==0)s[21]=0;}return result;}
