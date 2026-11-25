// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// FUN_02080988 @ 0x02080988 (inventory code 0x20, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * If global record array exists, update all four 28-byte records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080988.txt.
 */
extern char * D_0211a4e8;
extern void FUN_020809ac(void *);
void FUN_02080988(void) { char *records=D_0211a4e8; if(records) { int i; for(i=0;i<4;i++) FUN_020809ac(records+28*i); } }
