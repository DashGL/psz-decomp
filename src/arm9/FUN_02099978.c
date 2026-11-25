// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_02099978 @ 0x02099978
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned char D_020f46fc[];
extern unsigned char D_020f46f4[];
/* USA ROM reconstruction, 2026-11-04.
 * Fill two output bytes from tables for valid signed index.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099978.txt.
 */
int FUN_02099978(void *unused,unsigned char *out,int index) { if(index>=0 && index<5) { out[0]=D_020f46fc[index]; out[5]=D_020f46f4[index]; return 1; } return 0; }
