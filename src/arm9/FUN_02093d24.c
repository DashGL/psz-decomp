// FUN_02093d24 @ 0x02093d24 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_02093d24 @ 0x02093d24 (inventory code 0x54, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply valid descriptor and notify interface when state differs.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093d24.txt.
 */
extern void *UNK_02108c5c;extern int FUN_0207f4b4(void *),FUN_0207f430(void *,void *),FUN_02093f3c(void *,int);extern void FUN_02032838(void *,void *),FUN_020313e0(void *),FUN_02031408(void *);int FUN_02093d24(char *s,void *desc,int enabled){if(FUN_0207f4b4(desc)){FUN_02032838(s+16,desc);if(!FUN_02093f3c(s+16,FUN_0207f430(s+20,s+16))){void *p=UNK_02108c5c;if(p){if(enabled)FUN_020313e0(p);else FUN_02031408(p);}}return 1;}return 0;}
