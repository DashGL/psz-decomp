// FUN_020ae960 @ 0x020ae960 (0x5e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_020ae960 @ 0x020ae960 (inventory code 0x5e, thumb)
// check: 2.0/sp2p3 target=0x5e candidate=0x5e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Interpolate wrapped angle using rounded fixed-point fraction.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ae960.txt.
 */
unsigned short FUN_020ae960(void *unused,unsigned short start,unsigned short end,int factor){unsigned short difference=(unsigned short)(end-start);if(difference>32768){difference=(unsigned short)(65536-difference);return (unsigned short)(start-(int)(((long long)difference*factor+2048)>>12));}return (unsigned short)(start+(int)(((long long)difference*factor+2048)>>12));}
