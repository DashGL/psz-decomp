// flags: -O4,s
// FUN_02083da8 @ 0x02083da8 (inventory code 0x44, thumb)
/* USA ROM reconstruction, 2026-11-04.
 * Initialize scalar and four vectors from shared defaults.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083da8.txt.
 */
extern unsigned char DAT_020fc958[];
extern unsigned char DAT_020fc988[];
typedef struct {int x,y,z;} V;void *FUN_02083da8(char *s){*(int *)s=*(int *)DAT_020fc988;*(V *)(s+4)=*(V *)DAT_020fc958;*(V *)(s+16)=*(V *)DAT_020fc958;*(V *)(s+28)=*(V *)DAT_020fc958;*(V *)(s+40)=*(V *)DAT_020fc958;return s;}
