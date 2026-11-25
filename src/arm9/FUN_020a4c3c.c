// FUN_020a4c3c @ 0x020a4c3c (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020a4c3c @ 0x020a4c3c (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install record list and copy compact values into halfword array.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a4c3c.txt.
 */
extern void FUN_020656b8(void *,int,unsigned int);void FUN_020a4c3c(char *s,char *records,int count){int i;*(char **)(s+76)=records;*(int *)(s+80)=count;FUN_020656b8(s+84,0,24);for(i=0;i<*(int *)(s+80);i++)((short *)(s+84))[i]=(unsigned char)(*(char **)(s+76))[20*i+13];*(int *)(s+212)=-1;*(int *)(s+216)=0;}
