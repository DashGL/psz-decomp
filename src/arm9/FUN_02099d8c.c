// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_02099d8c @ 0x02099d8c
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return indexed three-word global descriptor or fallback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099d8c.txt.
 */
extern char data_020fb39c[];
void *FUN_02099d8c(void *unused,int index) { if(index>=0 && index<3) return data_020fb39c+12*index; return (void *)0x020fc958; }
