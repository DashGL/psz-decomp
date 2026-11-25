// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_02036384 @ 0x02036384 (inventory code 0x34, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/02036384.txt.
 */
typedef struct { unsigned int x,y,z; } Vector; extern int FUN_020363b8(void *); extern int FUN_02034b8c(void *,int);
void FUN_02036384(char *s,Vector *value) { int distance=!FUN_020363b8(s)?256:384; if(FUN_02034b8c(value,distance)) *(Vector *)(s+0x38)=*value; else *(unsigned int *)(s+0x3c)=value->y; }
