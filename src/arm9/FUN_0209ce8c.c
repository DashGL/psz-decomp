// FUN_0209ce8c @ 0x0209ce8c (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_0209ce8c @ 0x0209ce8c (inventory code 0x8c, thumb)
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy scene descriptor and normalize network-dependent fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209ce8c.txt.
 */
extern char UNK_0211a51c[];extern int UNK_020f495c[];extern int FUN_02084bf8(void *);void FUN_0209ce8c(signed char *d,signed char *s,int mode){int index;*(short *)d=*(unsigned short *)s;d[2]=s[2];d[3]=s[3];d[4]=s[4];d[5]=s[5];d[6]=s[6];d[7]=s[7];*(int *)(d+8)=*(int *)(s+8);d[12]=s[12];d[13]=s[13];d[14]=s[14];d[15]=s[15];if(FUN_02084bf8(UNK_0211a51c)){index=0;if(mode>=0 && mode<21)index=mode;*(int *)(d+8)=UNK_020f495c[index];if(s[12]<0 || s[12]>=3)d[12]=0;if(s[13]<0 || s[13]>=3)d[13]=0;}}
