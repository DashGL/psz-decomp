// FUN_02075080 @ 0x02075080 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02075080 @ 0x02075080 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear pointer/count and increment wrapping 16-bit generation; receiver retained.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02075080.txt.
 */
void *FUN_02075080(char *self) {
    *(void **)self=0; *(unsigned short *)(self+4)=0; (*(unsigned short *)(self+6))++; return self;
}
