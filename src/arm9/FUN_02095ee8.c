// FUN_02095ee8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02095ee8 @ 0x02095ee8 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store truncated angle and build matrix from signed sine/cosine table.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02095ee8.txt.
 */
extern char G_020ED83C[];
extern void FUN_0205abac(void *,int,int); void FUN_02095ee8(char **self,unsigned int angle) { char *p=*self; if(p) { int index; *(unsigned short *)(p+180)=angle; index=*(unsigned short *)(p+180)>>4; FUN_0205abac(p+144,((short *)G_020ED83C)[index*2],((short *)G_020ED83C)[index*2+1]); } }
