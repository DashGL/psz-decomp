// FUN_020b70e8 @ 0x020b70e8 (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020b70e8 @ 0x020b70e8 (inventory code 0x4a, thumb)
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compare summed slot values against selected category capacity.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b70e8.txt.
 */
extern int FUN_0206e98c(void *);int FUN_020b70e8(unsigned char *s,unsigned char *desc){int category=desc[2],sum=0,i; signed char limit[8];for(i=0;i<8;i++)sum+=s[82+i];if(category==8){if(sum>0)return 1;}else if(category>=0 && category<8){if(FUN_0206e98c(limit)==1 && sum<limit[5])return 1;}return 0;}
