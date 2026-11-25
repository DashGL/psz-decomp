// FUN_0207e06c @ 0x0207e06c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207e06c @ 0x0207e06c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * If receiver and child +30 exist, apply halfword +11c to child helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207e06c.txt.
 */
extern void FUN_020487c8(void *,unsigned int);
void FUN_0207e06c(char *self) { if(self && *(void **)(self+48)) FUN_020487c8(*(void **)(self+48),*(unsigned short *)(self+0x11c)); }
