// FUN_020a06c4 @ 0x020a06c4 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_020a06c4 @ 0x020a06c4 (inventory code 0x5a, thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize derived display object and vector fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a06c4.txt.
 */
extern char UNK_020fbae8[];extern void FUN_020407cc(void *),FUN_02035408(void *,int,int,int);void *FUN_020a06c4(char *s){FUN_020407cc(s);*(void **)s=UNK_020fbae8;*(int *)(s+136)=0;*(int *)(s+140)=0;*(int *)(s+144)=0;*(int *)(s+148)=0;*(unsigned short *)(s+152)=65535;*(unsigned short *)(s+154)=65535;*(int *)(s+156)=0;FUN_02035408(s+160,0,0,0);*(unsigned short *)(s+172)=0;*(int *)(s+176)=9;return s;}
