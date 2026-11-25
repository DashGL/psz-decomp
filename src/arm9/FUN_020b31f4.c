// FUN_020b31f4 @ 0x020b31f4 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020b31f4 @ 0x020b31f4 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release owned array through callback and destroy base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b31f4.txt.
 */
extern void FUN_0200c530(void *,unsigned int,unsigned int,void *(*)(void *)),FUN_020303bc(void *),FUN_020ba8ac(void *); extern void *FUN_020b354c(void *); void *FUN_020b31f4(char *self) { *(unsigned int *)self=0x020fc720; if(*(void **)(self+52)) { FUN_0200c530(*(void **)(self+52),88,8,FUN_020b354c); *(void **)(self+52)=0; } FUN_020303bc(self); return self; }
