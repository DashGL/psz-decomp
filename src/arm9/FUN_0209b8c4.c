// FUN_0209b8c4 @ 0x0209b8c4 (0x70, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_0209b8c4 @ 0x0209b8c4 (inventory code 0x6a, thumb)
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Choose object timer from copied descriptor and global mode.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209b8c4.txt.
 */
typedef struct {int v[6];} Descriptor;extern signed char UNK_0211a3c4[];void FUN_0209b8c4(char *s){Descriptor d=**(Descriptor **)(s+4);if(*(signed char *)(*(char **)(s+72)+24)==1){if(((signed char *)&d)[18]==0)*(int *)(s+352)=150;else *(int *)(s+352)=75;}else if(UNK_0211a3c4[13]==1)*(int *)(s+352)=30;else if(UNK_0211a3c4[13]==2)*(int *)(s+352)=15;else *(int *)(s+352)=45;}
