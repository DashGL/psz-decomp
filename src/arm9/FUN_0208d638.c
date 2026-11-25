// FUN_0208d638 @ 0x0208d638 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_0208d638 @ 0x0208d638 (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build player position packet with halfword and byte parameters.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208d638.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int),FUN_020bce3c(void *);typedef struct {int header,x,z;short value;unsigned char flag; signed char player;} Packet;void FUN_0208d638(void *unused,int player,int *pos,int value,unsigned char flag){Packet p;FUN_02036094(&p);FUN_020360a4(&p,2,4,16);p.x=0;p.z=0;p.value=0;p.flag=0;p.player=-1;if(player>=0 && player<=3){p.x=pos[0];p.z=pos[2];p.value=value;p.player=player;p.flag=flag;FUN_020bce3c(&p);}}
