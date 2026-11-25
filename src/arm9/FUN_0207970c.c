// FUN_0207970c @ 0x0207970c (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207970c @ 0x0207970c (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select mode scale and optionally copy its transform fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207970c.txt.
 */
extern void FUN_020794c4(void *,void *);void FUN_0207970c(char *self,int mode,int apply){if(mode<3){*(int *)(self+136)=mode;*(int *)(self+16)=((unsigned int)(*(int *)(self+136)-1)<=1)?1024:4096;if(apply==1){FUN_020794c4(self+128,self+144+16*(*(int *)(self+136)));*(int *)(self+124)=*(int *)(self+152+16*(*(int *)(self+136)));}}}
