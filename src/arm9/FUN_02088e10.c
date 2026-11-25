// FUN_02088e10 @ 0x02088e10 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_02088e10 @ 0x02088e10 (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Preserve old descriptor, copy replacement and reset presentation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02088e10.txt.
 */
typedef struct {unsigned char b[4];} Bytes;typedef struct {int x,y,z;} V;extern void FUN_02039534(void *,void *),FUN_020c38f0(void *,int);void FUN_02088e10(char *s,char *desc,int a,int b){FUN_02039534(s+16,s);*(Bytes *)s=*(Bytes *)desc;*(V *)(s+4)=*(V *)(desc+4);*(int *)(s+40)=a;*(int *)(s+44)=b;*(int *)(s+56)=0;FUN_020c38f0(*(void **)(s+48),0);FUN_020c38f0(*(void **)(s+52),0);}
