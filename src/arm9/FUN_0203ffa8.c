// FUN_0203ffa8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// FUN_0203ffa8 @ 0x0203ffa8 (inventory code 0x36, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 27.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b27/0203ffa8.txt.
 */
extern unsigned int D_020ed444[];
extern char *FUN_0203ff0c(void *,int);
unsigned int FUN_0203ffa8(void *s,int key,int kind,int index) { char *p=FUN_0203ff0c(s,key); if(p) { unsigned int group=D_020ed444[kind]; char *counts=*(char **)(*(char **)(p+8)+4); int count=*(int *)(counts+8*group+4); if(index>=0 && index<count) return *(unsigned short *)(*(char **)(p+4*group+0x14)+4*index); } return 0xffff; }
