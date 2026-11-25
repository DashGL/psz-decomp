// FUN_02086760 @ 0x02086760 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_02086760 @ 0x02086760 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve valid entity and copy its position.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02086760.txt.
 */
typedef struct {int x,y,z;} V;extern void *FUN_020352a4(void *,int);extern char *FUN_02039200(void *);extern int FUN_0203bf3c(void *);extern void FUN_020345f0(V *,void *);int FUN_02086760(int id,V *out){char *p=FUN_02039200(FUN_020352a4(*(void **)0x02108cf4,id));if(p && FUN_0203bf3c(p)){V v;FUN_020345f0(&v,p+180);*out=v;return 1;}return 0;}
