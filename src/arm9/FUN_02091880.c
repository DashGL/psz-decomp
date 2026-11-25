// FUN_02091880 @ 0x02091880 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_02091880 @ 0x02091880 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize eighty records and side array, then set capacity and global record.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02091880.txt.
 */
extern void FUN_0203955c(void *); void FUN_02091880(char *self) { int i; for(i=0;i<80;i++) { FUN_0203955c(self+16*i); *(unsigned int *)(self+1280+4*i)=0; } *(unsigned short *)(self+1600)=40; FUN_0203955c((void *)0x0211a5a0); }
