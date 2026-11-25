// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211a500[];
// FUN_020844e4 @ 0x020844e4 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve descriptor index and extract packed nibble.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020844e4.txt.
 */
extern int FUN_02084534(void *,void *);int FUN_020844e4(void *desc){char *root=*(char **)((unsigned int)DAT_0211a500 + 12u);if(root){char *p=*(char **)(root+28);if(p){int n=FUN_02084534(p,desc);if(n>=0)return (*(unsigned char **)(p+144))[n/2]>>(4*(n%2))&15;return -1;}}return -1;}
