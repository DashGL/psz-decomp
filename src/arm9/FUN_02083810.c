// flags: -O4,p
// FUN_02083810 @ 0x02083810 (inventory code 0x4c, thumb)
/* USA ROM reconstruction, 2026-11-04.
 * Construct effect and initialize three vectors from defaults.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083810.txt.
 */
extern unsigned char DAT_020fc958[];
extern unsigned char DAT_020fc988[];
typedef struct {int x,y,z;} V;extern void FUN_02091d98(void *,int,int,int,int,int);void *FUN_02083810(char *s){FUN_02091d98(s,1,5,16,0,0);*(int *)(s+96)=*(int *)DAT_020fc988;*(V *)(s+100)=*(V *)DAT_020fc958;*(V *)(s+112)=*(V *)DAT_020fc958;*(V *)(s+124)=*(V *)DAT_020fc958;return s;}
