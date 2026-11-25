// FUN_0208de5c @ 0x0208de5c (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_0208de5c @ 0x0208de5c (inventory code 0x4a, thumb)
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build validated player position packet with trailing halfword.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208de5c.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int),FUN_020bce3c(void *);typedef struct {int header,x,z;signed char player;unsigned char flag;short value;} Packet;void FUN_0208de5c(void *unused,int player,int *pos,int value){Packet p;FUN_02036094(&p);FUN_020360a4(&p,2,29,16);p.x=0;p.z=0;p.player=-1;p.flag=0;p.value=0;if(player>=0 && player<=3){p.x=pos[0];p.z=pos[2];p.player=player;p.value=value;FUN_020bce3c(&p);}}
