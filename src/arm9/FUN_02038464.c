// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_02038464 @ 0x02038464
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 27.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b27/02038464.txt.
 */
extern unsigned int data_020f7028[];
extern unsigned int data_020f703c[];
extern int FUN_0203eb00(void *);
unsigned int FUN_02038464(char *s) { if(FUN_0203eb00(s)==1) { int index=(int)*(unsigned char *)(s+0x24)-14; if(index>=0 && index<5) return data_020f7028[index]; } else { unsigned int index=*(unsigned char *)(s+0x24); if(index<14) return data_020f703c[index]; } return 4096; }
