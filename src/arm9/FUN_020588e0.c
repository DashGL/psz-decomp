// FUN_020588e0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020588e0 @ 0x020588e0 (inventory code 0x2c, arm)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 231.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b231/020588e0.txt.
 */
typedef int (*Transfer)(void *,void *,unsigned int,unsigned int);int FUN_020588e0(char *s){unsigned int position=*(unsigned int *)(s+44),size=*(unsigned int *)(s+56);char *archive=*(char **)(s+8);void *data=*(void **)(s+48);*(unsigned int *)(s+44)=position+size;return (*(Transfer *)(archive+72))(archive,data,position,size);}
