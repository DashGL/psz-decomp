// FUN_02094a64 @ 0x02094a64 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_02094a64 @ 0x02094a64 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear embedded container and release nonsentinel resource identifier.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094a64.txt.
 */
extern void FUN_020c0488(void *),FUN_020bed1c(void *,unsigned int); extern void *FUN_020be450(void); void FUN_02094a64(char *self) { unsigned int id; FUN_020c0488(self+36); id=*(unsigned int *)(self+88); if(id!=0xffffffff) { FUN_020bed1c(FUN_020be450(),id); *(int *)(self+88)=-1; } }
