// FUN_020bf6e0 @ 0x020bf6e0 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_020bf6e0 @ 0x020bf6e0 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize oriented shape with half extents and trigonometric basis.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bf6e0.txt.
 */
extern short UNK_020ed83c[];extern void FUN_02034e8c(void *,void *);void FUN_020bf6e0(int *s,int *center,int width,int height,unsigned short angle){int index;s[0]=2;FUN_02034e8c(s+1,center);s[7]=width/2;s[8]=height/2;index=angle>>4;s[5]=UNK_020ed83c[2*index];s[6]=UNK_020ed83c[2*index+1];angle=(unsigned short)(angle+16384);index=angle>>4;s[3]=UNK_020ed83c[2*index];s[4]=UNK_020ed83c[2*index+1];}
