// FUN_0203e2b0 @ 0x0203e2b0 (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e2b0 @ 0x0203e2b0 (inventory code 0x66, thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 43.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b43/0203e2b0.txt.
 */
extern void *FUN_02086e3c(void);extern char *FUN_020870c4(void *);extern void FUN_0203e31c(void *,void *);extern void FUN_020b72f8(void *);extern void FUN_0203e43c(void *);
void FUN_0203e2b0(char *s){unsigned int before=*(unsigned short *)(s+92);char *m=FUN_020870c4(FUN_02086e3c());FUN_0203e31c(s+80,m+44);FUN_020b72f8(s+32);FUN_0203e31c(m+44,s+80);if(*(unsigned short *)(s+334)>*(unsigned short *)(s+92))*(unsigned short *)(s+334)=*(unsigned short *)(s+92);if(*(unsigned short *)(s+336)>*(unsigned short *)(s+94))*(unsigned short *)(s+336)=*(unsigned short *)(s+94);if(before!=*(unsigned short *)(s+92))FUN_0203e43c(s);}
