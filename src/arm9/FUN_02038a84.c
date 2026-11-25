// FUN_02038a84 @ 0x02038a84 (0xa4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02038a84 @ 0x02038a84 (inventory code 0xa4, thumb)
// check: 2.0/sp2p3 target=0xa4 candidate=0xa4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 65.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b65/02038a84.txt.
 */
extern void FUN_020c4560(void *);
void FUN_02038a84(char *s){int i;FUN_020c4560(s);FUN_020c4560(s+16);s[32]=0;s[33]=0;s[34]=0;s[35]=0;s[36]=0;s[37]=0;s[38]=0;s[39]=0;s[40]=0;s[41]=0;*(int *)(s+52)=0;*(short *)(s+56)=256;*(short *)(s+58)=128;*(short *)(s+60)=0;*(short *)(s+62)=0;*(short *)(s+64)=0;*(short *)(s+66)=0;s[72]=0;s[86]=1;for(i=0;i<5;i++)s[73+i]=0;for(i=0;i<8;i++)s[78+i]=0;for(i=0;i<11;i++)s[87+i]=0;}
