// FUN_0209757c @ 0x0209757c (0x52, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_0209757c @ 0x0209757c (inventory code 0x52, thumb)
// check: 2.0/sp2p3 target=0x52 candidate=0x52 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Choose random delay according to descriptor and distance.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209757c.txt.
 */
extern void FUN_020867c8(int *,int,int);extern int FUN_02035b60(int);int FUN_0209757c(char *s,signed char *desc){if(desc[4]==4 && desc[1]==2){if(desc[5]==3){int distance=0;FUN_020867c8(&distance,**(int **)(s+8),*(int *)(s+12));if(distance<=262144)return FUN_02035b60(30)+30;return 0;}return FUN_02035b60(90)+60;}return 0;}
