// FUN_020842dc @ 0x020842dc (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_020842dc @ 0x020842dc (inventory code 0x68, thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize actor bounds and copied position defaults.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020842dc.txt.
 */
extern char UNK_020fa898[];extern void FUN_020407cc(void *),FUN_0203454c(void *);void *FUN_020842dc(char *s){FUN_020407cc(s);*(void **)s=UNK_020fa898;*(short *)(s+148)=0;*(int *)(s+152)=0;*(int *)(s+136)=0;*(int *)(s+140)=16384;*(int *)(s+144)=40960;*(int *)(s+108)=0;*(int *)(s+112)=0;*(int *)(s+116)=0;*(int *)(s+24)=*(int *)(s+136);*(int *)(s+28)=*(int *)(s+140);*(int *)(s+32)=*(int *)(s+144);*(int *)(s+36)=*(int *)(s+108);*(int *)(s+40)=*(int *)(s+112);*(int *)(s+44)=*(int *)(s+116);FUN_0203454c(s);return s;}
