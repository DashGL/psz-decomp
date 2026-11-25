// FUN_02093c5c @ 0x02093c5c (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_02093c5c @ 0x02093c5c (inventory code 0x56, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select descriptor variant and notify interface when required.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093c5c.txt.
 */
extern void *UNK_02108c5c;extern void FUN_02032bfc(void *,void *,int),FUN_02032838(void *,void *),FUN_02031428(void *);extern int FUN_0206d1fc(void *),FUN_02093f3c(void *,int);int FUN_02093c5c(char *s,int index){int descriptor[5];FUN_02032bfc(descriptor,s,index);if(!FUN_0206d1fc(descriptor))return 0;FUN_02032838(s+16,s+20);s[18]=index;if(FUN_02093f3c(s+16,1))return 1;if(UNK_02108c5c){FUN_02031428(UNK_02108c5c);return 1;}return 0;}
