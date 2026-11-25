// FUN_02081e40 @ 0x02081e40 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_02081e40 @ 0x02081e40 (inventory code 0x5e, thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize nested collections and sentinel state fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02081e40.txt.
 */
extern void FUN_02081e34(void *),FUN_020834f0(void *),FUN_02083320(void *);void *FUN_02081e40(char *s){FUN_02081e34(s);FUN_020834f0(s+12);FUN_020834f0(s+96);FUN_02083320(s+180);*(int *)(s+2168)=0;*(int *)(s+2172)=0;*(int *)(s+2176)=-1;*(int *)(s+2180)=-1;*(int *)(s+2184)=-1;*(int *)(s+2188)=-1;*(int *)(s+2192)=0;*(int *)(s+2196)=0;*(int *)(s+2200)=0;*(int *)(s+2204)=0;return s;}
