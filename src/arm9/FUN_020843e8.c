// FUN_020843e8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// FUN_020843e8 @ 0x020843e8 (inventory code 0x2e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Format four resource paths and load corresponding records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020843e8.txt.
 */
extern unsigned int D_020fa934[];
extern const char DAT_020fa944[];
extern int FUN_020662b4(char *,unsigned int,const char *,...); extern void FUN_02084868(void *,char *); void FUN_020843e8(char *self) { char name[32]; int i; for(i=0;i<4;i++) { FUN_020662b4(name,32,DAT_020fa944,D_020fa934[i]); FUN_02084868(self+8*i,name); } }
