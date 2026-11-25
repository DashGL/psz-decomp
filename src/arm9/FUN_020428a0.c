// FUN_020428a0 @ 0x020428a0 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_020428a0 @ 0x020428a0 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/020428a0.txt.
 */
extern int FUN_02051bd4(void *,int);
void *FUN_020428a0(char *s,int index) { int start=FUN_02051bd4(*(void **)0x0210e24c,0); if(start!=-1) { int delta=(int)((unsigned int)index-(unsigned int)start); if(delta>=0 && delta<8) return ((void **)(s+4))[delta]; } return 0; }
