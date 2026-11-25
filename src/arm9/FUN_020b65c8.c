// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x46, exact bytes and relocation targets.
// FUN_020b65c8 @ 0x020b65c8 (inventory code 0x46, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy descriptor pair and select signed relation parameter.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b65c8.txt.
 */
typedef struct {unsigned char b[4];} Bytes;typedef struct {short v[5];} Relation;extern Relation *FUN_02084ad0(void *,void *);int FUN_020b65c8(void *unused,Bytes *a,Bytes *b){Bytes first,second;second=*b;first=*a;Relation r=*FUN_02084ad0(&first,&second);return r.v[4];}
