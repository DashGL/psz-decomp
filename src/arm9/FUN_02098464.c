// flags: -O4,s
// FUN_02098464 @ 0x02098464 (inventory code 0x2c, thumb)
/* USA ROM reconstruction, 2026-11-04.
 * Clear two fields and copy constant three-word record into four slots.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098464.txt.
 */
extern unsigned char DAT_020fc958[];
typedef struct { unsigned int a,b,c; } Record; void FUN_02098464(char *self) { int i; *(unsigned int *)(self+240)=0; *(unsigned int *)(self+244)=0; for(i=0;i<4;i++) *(Record *)(self+248+12*i)=*(Record *)DAT_020fc958; }
