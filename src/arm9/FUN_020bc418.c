// FUN_020bc418 @ 0x020bc418 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_020bc418 @ 0x020bc418 (inventory code 0x56, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Prepare destination buffer and launch asynchronous file operation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc418.txt.
 */
extern int FUN_020ba288(void *);extern void FUN_020bc578(void *,int,int),FUN_020bc474(void *),FUN_020ba0c8(void *,void *,void (*)(void *),void *);int FUN_020bc418(char *s,void *path,void *buffer){int size;if(*(int *)(s+4)==2)return 0;size=FUN_020ba288(path);if(size<=0)return 0;if(buffer){*(int *)(s+128)=0;*(void **)(s+112)=buffer;}else{FUN_020bc578(s,size,32);if(!*(void **)(s+112))return 0;}FUN_020ba0c8(path,*(void **)(s+112),FUN_020bc474,s);*(int *)(s+4)=1;return 1;}
