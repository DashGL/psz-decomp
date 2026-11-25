// FUN_020ba648 @ 0x020ba648 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020ba648 @ 0x020ba648 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Stop owned operation and destroy base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba648.txt.
 */
extern void FUN_020ba748(void *),FUN_02059ffc(void *),FUN_020b9e28(void *),FUN_020ba940(void *); void *FUN_020ba648(char *self) { *(unsigned int *)self=0x020fc8c4; FUN_020ba748(self); if(*(int *)(self+32)!=4) FUN_02059ffc(self+36); FUN_020b9e28(self); FUN_020ba940(self); return self; }
