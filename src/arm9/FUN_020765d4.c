// FUN_020765d4 @ 0x020765d4 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_020765d4 @ 0x020765d4 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install cleanup table, release word +8 through manager, then free self; machine returns original address.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020765d4.txt.
 */
extern void FUN_0203528c(void *,void *), FUN_020ba8ac(void *);
void *FUN_020765d4(void **self) { self[0]=(void *)0x020fa0b0; FUN_0203528c(*(void **)0x02108cf4,self[2]); FUN_020ba8ac(self); return self; }
