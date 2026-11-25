// FUN_020b46c0 @ 0x020b46c0 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020b46c0 @ 0x020b46c0 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release two global resources, preserving nested guards and repeated clear.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b46c0.txt.
 */
extern void FUN_0204adbc(void *),FUN_02046d88(void *); void FUN_020b46c0(void) { char *global=(char *)0x0211aa74; void *p=*(void **)(global+20); if(p) { if(p) { FUN_0204adbc(p); *(void **)(global+20)=0; } *(void **)(global+20)=0; } p=*(void **)(global+8); if(p) { FUN_02046d88(p); *(void **)(global+8)=0; } }
