// FUN_02049ef0 @ 0x02049ef0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_02049ef0 @ 0x02049ef0 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Write packed x/y halfwords then z halfword to geometry FIFO register.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02049ef0.txt.
 */
void FUN_02049ef0(unsigned int x,unsigned int y,unsigned int z) { *(volatile unsigned int *)0x0400048c=(unsigned short)x|((unsigned int)(unsigned short)y<<16); *(volatile unsigned int *)0x0400048c=(unsigned short)z; }
