// FUN_02045f84 @ 0x02045f84 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02045f84 @ 0x02045f84 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 37.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b37/02045f84.txt.
 */
extern void *DAT_02108c84;
extern void FUN_02037d20(void *,unsigned int);extern void FUN_02037c5c(void *,unsigned int);extern void FUN_02037b88(void *,unsigned int);
void FUN_02045f84(unsigned short *s) {void *m=DAT_02108c84;if(m){int i;for(i=0;i<5;i++){if(s[i+2]!=65535)FUN_02037d20(m,s[i+2]);s[i+2]=65535;}if(s[1]!=65535)FUN_02037c5c(m,s[1]);s[1]=65535;if(s[0]!=65535)FUN_02037b88(m,s[0]);s[0]=65535;}}
