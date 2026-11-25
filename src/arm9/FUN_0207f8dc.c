// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_0207f8dc @ 0x0207f8dc
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_020f2c68[];
extern char D_020f2cb8[];
/* USA ROM reconstruction, 2026-11-04.
 * Select positive or negative level scale, defaulting to unity.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f8dc.txt.
 */
int FUN_0207f8dc(char *self,int kind) { int level=*(int *)(self+24+8*kind); if(level>0) return ((int *)(D_020f2c68+20*kind))[level-1]; if(level<0) { if(level<0) level=-level; return ((int *)(D_020f2cb8+20*kind))[level-1]; } return 4096; }
