// FUN_020b3224 @ 0x020b3224 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020b3224 @ 0x020b3224 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release owned array through callback and destroy base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b3224.txt.
 */
extern void FUN_0200c530(void *,unsigned int,unsigned int,void *(*)(void *)),FUN_020303bc(void *),FUN_020ba8ac(void *); extern void *FUN_020b354c(void *); void *FUN_020b3224(char *self) { *(unsigned int *)self=0x020fc720; if(*(void **)(self+52)) { FUN_0200c530(*(void **)(self+52),88,8,FUN_020b354c); *(void **)(self+52)=0; } FUN_020303bc(self); FUN_020ba8ac(self); return self; }
