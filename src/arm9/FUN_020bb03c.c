// FUN_020bb03c @ 0x020bb03c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020bb03c @ 0x020bb03c (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set global receiver pending flag when status argument zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bb03c.txt.
 */
void FUN_020bb03c(int status) { unsigned int *p=*(unsigned int **)0x0211b2bc; if(p && status==0) p[22]=1; }
