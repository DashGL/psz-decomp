// FUN_02037974 @ 0x02037974 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02037974 @ 0x02037974 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/02037974.txt.
 */
extern void *FUN_0201d7b4(void *,unsigned int);
int FUN_02037974(char *s,void *p,unsigned int a,unsigned int b,unsigned int c) { if(p) { if(!*(unsigned char *)(s+16)) { *(void **)(s+12)=FUN_0201d7b4(p,c); *(void **)(s+8)=p; *(unsigned short *)(s+4)=a; s[17]=c; s[18]=b; ++*(unsigned char *)(s+16); return 1; } ++*(unsigned char *)(s+16); return 1; } return 0; }
