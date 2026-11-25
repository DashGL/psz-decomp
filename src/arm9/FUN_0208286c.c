// FUN_0208286c @ 0x0208286c (0x62, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_0208286c @ 0x0208286c (inventory code 0x62, thumb)
// check: 2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize descriptor defaults and invalid slot identifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208286c.txt.
 */
extern void FUN_0206d198(void *);void FUN_0208286c(char *s){int i;FUN_0206d198(s);*(int *)(s+20)=0;for(i=0;i<4;i++){s[24+i]=-1;s[28+i]=0;}*(int *)(s+36)=-1;*(int *)(s+40)=-1;for(i=0;i<2;i++)s[32+i]=-1;s[44]=0;s[45]=0;s[46]=-1;s[47]=-1;s[48]=-1;s[51]=0;s[49]=0;s[50]=-1;}
