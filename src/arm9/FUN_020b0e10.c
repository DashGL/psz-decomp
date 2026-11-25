// FUN_020b0e10 @ 0x020b0e10 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020b0e10 @ 0x020b0e10 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release nonsentinel resource handle and reset field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0e10.txt.
 */
extern void *FUN_020be450(void); extern void FUN_020bed1c(void *,unsigned int); void FUN_020b0e10(char *self) { unsigned int id=*(unsigned int *)(self+240); if(id!=0xffffffff) { FUN_020bed1c(FUN_020be450(),id); *(int *)(self+240)=-1; } }
