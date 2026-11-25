// FUN_020867a4 @ 0x020867a4 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_020867a4 @ 0x020867a4 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve value from two forwarded inputs and calculate square root on success.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020867a4.txt.
 */
extern int FUN_020867c8(int *,unsigned int,unsigned int),FUN_0205c540(int); int FUN_020867a4(int *out,unsigned int a,unsigned int b) { int value; if(FUN_020867c8(&value,a,b)) { *out=FUN_0205c540(value); return 1; } return 0; }
