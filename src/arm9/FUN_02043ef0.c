// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3e, exact bytes and relocation targets.
// FUN_02043ef0 @ 0x02043ef0 (inventory code 0x3e, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/02043ef0.txt.
 */
typedef struct { int x,y,z; } Vector;
void FUN_02043ef0(char *s,int index,Vector *v,unsigned int a,unsigned short b,unsigned short c) { char *p=*(char **)(s+0x98)+112*index; *(Vector *)(p+16)=*v; *(unsigned short *)(p+0x40)=a; *(unsigned short *)(p+0x42)=b; *(unsigned short *)(p+0x44)=c; *(short *)(p+0x46)&=~4; }
