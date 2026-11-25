// FUN_0208d688 @ 0x0208d688 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_0208d688 @ 0x0208d688 (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build parameter packet containing two words and compact identifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208d688.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int),FUN_020bce3c(void *);typedef struct {int header;short value;unsigned char flag;signed char player;int a,b;} Packet;void FUN_0208d688(void *unused,int a,int value,int flag,signed char player,int b){Packet p;FUN_02036094(&p);FUN_020360a4(&p,2,5,16);p.value=0;p.flag=0;p.player=-1;p.a=-1;p.b=-1;p.value=value;p.flag=flag;p.player=player;p.a=a;p.b=b;FUN_020bce3c(&p);}
