// FUN_0207f078 @ 0x0207f078 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207f078 @ 0x0207f078 (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve and read a bit into output boolean.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f078.txt.
 */
extern int FUN_0207f12c(void *,unsigned int *,unsigned int *,unsigned int); int FUN_0207f078(unsigned int *self,int *out,unsigned int bit) { unsigned int index=0,mask=0; if(FUN_0207f12c(self,&index,&mask,bit)) { *out=(((unsigned int *)self[0])[index]&mask)?1:0; return 1; } return 0; }
