// FUN_0207a5b4 @ 0x0207a5b4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207a5b4 @ 0x0207a5b4 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release non-sentinel resource identifier and reset field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207a5b4.txt.
 */
extern void *FUN_020be450(void); extern void FUN_020bed1c(void *,unsigned int); void FUN_0207a5b4(char *self) { unsigned int id=*(unsigned int *)(self+376); if(id!=0xffffffff) { FUN_020bed1c(FUN_020be450(),id); *(int *)(self+376)=-1; } }
