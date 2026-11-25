// FUN_020418c8 @ 0x020418c8 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_020418c8 @ 0x020418c8 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 35.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b35/020418c8.txt.
 */
extern void *DAT_02108c84;
extern int FUN_02037d20(void *,unsigned int); extern void FUN_02033fcc(void *,unsigned int); extern int FUN_02037b88(void *,unsigned int);
void FUN_020418c8(void *unused,unsigned short *s) { void *m=DAT_02108c84; if(m) { if(FUN_02037d20(m,s[4])) s[4]=65535; if(FUN_02037d20(m,s[2])) s[2]=65535; FUN_02033fcc(m,s[0]); if(FUN_02037b88(m,s[0])) s[0]=65535; } }
