// FUN_020b72f8 @ 0x020b72f8 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020b72f8 @ 0x020b72f8 (inventory code 0x60, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Refresh base stats and add equipment-derived modifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b72f8.txt.
 */
extern void FUN_0206e930(void *,int,void *),FUN_020b6200(void *,void *);extern int FUN_020b737c(void *,void *,int);void FUN_020b72f8(char *s){int first[20],second[20],a,b;char *stats=s+48;FUN_0206e930(s+4,*(unsigned char *)(stats+42),stats);a=*(unsigned char *)(stats+34);b=*(unsigned char *)(stats+35);FUN_020b6200(s,first);*(unsigned short *)(stats+12)+=2*a+FUN_020b737c(s,first,15);FUN_020b6200(s,second);*(unsigned short *)(stats+14)+=2*b+FUN_020b737c(s,second,16);}
