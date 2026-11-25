// FUN_020852c8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020852c8 @ 0x020852c8 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke child virtual method across four global records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020852c8.txt.
 */
void FUN_020852c8(void) { int i; if(*(void **)0x0211a52c) { for(i=0;i<4;i++) { char *global=*(char **)0x0211a52c; void *p=*(void **)(global+148*i+140); if(p) (*(void (***)(void *))p)[35](p); } } }
