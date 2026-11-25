// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x46, exact bytes and relocation targets.
// FUN_020b6a48 @ 0x020b6a48 (inventory code 0x46, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reconstructed descriptor-copy twin, independently verified against USA bytes.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b6a48.txt.
 */
typedef struct {unsigned char b[4];} Bytes;typedef struct {short v[5];} Relation;extern Relation *FUN_02084ad0(void *,void *);int FUN_020b6a48(void *unused,Bytes *a,Bytes *b){Bytes first,second;second=*b;first=*a;Relation r=*FUN_02084ad0(&first,&second);return r.v[3];}
