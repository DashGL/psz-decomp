// FUN_0204ef4c @ 0x0204ef4c (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204ef4c @ 0x0204ef4c (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/0204ef4c.txt.
 */
extern int FUN_0200a3a0(int,int);
int FUN_0204ef4c(char *s,int value) { unsigned int flags=*(unsigned short *)(s+2),amount=flags&0xfff; if(flags&0x2000) return FUN_0200a3a0((int)((unsigned int)value*amount),100); if(!(flags&0x4000)) value=amount; return value; }
