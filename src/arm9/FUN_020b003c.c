// FUN_020b003c @ 0x020b003c (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020b003c @ 0x020b003c (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch scene update using stored or default position then base update.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b003c.txt.
 */
typedef struct {int x,y,z;} V;extern void FUN_02033690(int,int,void *),FUN_0203041c(void *);void FUN_020b003c(char *s){int mode=(*(signed char **)(s+48))[1];if(mode==0){V pos=*(V *)(s+28);FUN_02033690(*(int *)(s+52),*(int *)(s+56),&pos);}else if(mode==1)FUN_02033690(*(int *)(s+52),*(int *)(s+56),(void *)0x020fc958);FUN_0203041c(s);}
