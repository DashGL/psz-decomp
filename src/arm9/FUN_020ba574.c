// FUN_020ba574 @ 0x020ba574 (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020ba574 @ 0x020ba574 (inventory code 0x4a, thumb)
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy resource metadata with grouped pairs and fixed arrays.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba574.txt.
 */
typedef struct {int a,b;} Pair;typedef struct {int v[4];} Four;typedef struct {int v[6];} Six;void *FUN_020ba574(char *s,char *p){*(Pair *)s=*(Pair *)p;*(int *)(s+8)=*(int *)(p+8);*(int *)(s+12)=*(int *)(p+12);*(int *)(s+16)=*(int *)(p+16);*(int *)(s+20)=*(int *)(p+20);*(Pair *)(s+24)=*(Pair *)(p+24);*(Four *)(s+32)=*(Four *)(p+32);*(Six *)(s+48)=*(Six *)(p+48);return s;}
