// FUN_020467e8 @ 0x020467e8 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_020467e8 @ 0x020467e8 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/020467e8.txt.
 */
extern int FUN_02046724(void *,void *,void *,int);
int FUN_020467e8(int *s,void *a,void *b) { int r=FUN_02046724(s,a,b,0); if(r) { if(*s==11) s[1]=0; else if(*s==10) s[1]=2; else if(*s==45) s[1]=45; else if(*s==46) s[1]=46; else s[1]=0; } return r; }
