// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// Typed array-layout evidence: notes/sessions/continue-low-20261112.md
typedef struct{unsigned short header[2],values[22];}Table_020386b4;
// FUN_020386b4 @ 0x020386b4 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 35.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b35/020386b4.txt.
 */
extern void FUN_02033e74(void *,void *,unsigned int);
int FUN_020386b4(char *s,int index) { void *m=*(void **)0x02108c84; void *p=*(void **)(s+0x8c); if(p && m) { Table_020386b4 *table=*(Table_020386b4 **)(s+0x90); if(table && index>=0 && index<22 && *(unsigned int *)(s+0xe8)-4<=1) { FUN_02033e74(m,p,table->values[index]); return 1; } } return 0; }
