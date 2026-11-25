// FUN_02088e68 @ 0x02088e68 (0x80, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_02088e68 @ 0x02088e68 (inventory code 0x76, thumb)
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate paired display components and configure shared layout.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02088e68.txt.
 */
typedef struct {int v[8];} Desc;extern Desc UNK_020f3f50;extern void *FUN_020ba894(unsigned int),*FUN_020c3564(void *);extern void FUN_020c35ac(void *,int),FUN_020c35d4(void *,void *),FUN_020c38f0(void *,int);void FUN_02088e68(char *s){void *p;Desc d;p=FUN_020ba894(60);if(p)p=FUN_020c3564(p);*(void **)(s+48)=p;p=FUN_020ba894(60);if(p)p=FUN_020c3564(p);*(void **)(s+52)=p;if(*(void **)(s+48) && *(void **)(s+52)){FUN_020c35ac(*(void **)(s+48),1);d=UNK_020f3f50;FUN_020c35d4(*(void **)(s+48),&d);FUN_020c38f0(*(void **)(s+48),0);FUN_020c35ac(*(void **)(s+52),1);d.v[5]=2081;FUN_020c35d4(*(void **)(s+52),&d);FUN_020c38f0(*(void **)(s+52),0);}}
