// FUN_020aebe0 @ 0x020aebe0 (0x62, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_020aebe0 @ 0x020aebe0 (inventory code 0x62, thumb)
// check: 2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize paired display components and assign source buffers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aebe0.txt.
 */
extern void FUN_020c3564(void *),FUN_020aec44(void *,void *,void *,void *,int,int);void *FUN_020aebe0(char *s,char *a,char *b,int value){FUN_020c3564(s);FUN_020c3564(s+60);*(void **)(s+120)=a;*(void **)(s+124)=b;*(int *)(s+128)=value;*(int *)(s+132)=0;FUN_020aec44(s,s,*(char **)(s+120)+44,*(char **)(s+124)+4,80,10);FUN_020aec44(s,s+60,*(char **)(s+120)+146,*(char **)(s+124)+16,60,10);return s;}
