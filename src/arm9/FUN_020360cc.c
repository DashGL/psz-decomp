// FUN_020360cc @ 0x020360cc (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_020360cc @ 0x020360cc (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 25.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b25/020360cc.txt.
 */
void FUN_020360cc(char *s) { int i; *(unsigned short *)s=0; *(unsigned short *)(s+2)=0; *(unsigned short *)(s+4)=0; *(unsigned short *)(s+6)=0; s[10]=-1; s[11]=0; s[19]=0; *(unsigned short *)(s+8)=0; s[12]=-1; s[13]=0; s[14]=0; s[21]=2; for(i=0;i<2;i++) { s[15+i]=0; s[17+i]=0; } s[20]=0; s[22]=0; s[23]=0; }
