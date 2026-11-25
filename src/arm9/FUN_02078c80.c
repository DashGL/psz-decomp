// flags: -O4,s
// FUN_02078c80 @ 0x02078c80 (inventory code 0x2a, thumb)
/* USA ROM reconstruction, 2026-11-04.
 * Clear global flag and descriptor; optionally clear bit one in four global entries.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078c80.txt.
 */
extern unsigned short DAT_0211a3b8[];
extern unsigned char DAT_0211a3c4[];
extern unsigned int DAT_0211a3d4[];
extern void FUN_020783b0(void *); void FUN_02078c80(int clear) { int i; *DAT_0211a3b8=0; FUN_020783b0((void *)DAT_0211a3c4); if(clear) for(i=0;i<4;i++) (DAT_0211a3d4)[i]&=~2u; }
