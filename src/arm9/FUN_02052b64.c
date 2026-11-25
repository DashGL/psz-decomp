// FUN_02052b64 @ 0x02052b64 (inventory code 0x28, arm)
// flags: -O4,p -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 19.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b19/02052b64.txt.
 */
extern int FUN_02052b90(void *,void *,unsigned int);
int FUN_02052b64(void *a,void *b) { int result=FUN_02052b90(a,b,0xf00); if(!result) { char **base=(char **)0x02110b00; *(unsigned short *)(base[1]+0x16)=0; } return result; }
