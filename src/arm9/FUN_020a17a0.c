// FUN_020a17a0 @ 0x020a17a0 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020a17a0 @ 0x020a17a0 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install destructor table and release owned array with callback, then base destruction.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a17a0.txt.
 */
extern void FUN_0200c530(void *,unsigned int,unsigned int,void *(*)(void *)),FUN_020303bc(void *),FUN_020ba8ac(void *); extern void *FUN_020aead0(void *); void *FUN_020a17a0(char *self) { *(unsigned int *)self=0x020fbd48; if(*(void **)(self+52)) { FUN_0200c530(*(void **)(self+52),116,8,FUN_020aead0); *(void **)(self+52)=0; } FUN_020303bc(self); FUN_020ba8ac(self); return self; }
