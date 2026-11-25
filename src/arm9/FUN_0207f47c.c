// FUN_0207f47c @ 0x0207f47c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207f47c @ 0x0207f47c (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct compact descriptor and compare all three signed tags.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f47c.txt.
 */
extern void FUN_0207f40c(void *,int,int,int); extern int FUN_0207f430(void *,void *); int FUN_0207f47c(signed char *self,signed char *desc) { signed char temp[4]; FUN_0207f40c(temp,desc[0],desc[1],desc[2]); if(FUN_0207f430(self,temp) && temp[2]==self[2]) return 1; return 0; }
