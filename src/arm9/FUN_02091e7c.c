// FUN_02091e7c @ 0x02091e7c (0xa4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_02091e7c @ 0x02091e7c (inventory code 0x9e, thumb)
// check: 2.0/sp2p3 target=0xa4 candidate=0xa4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release owned buffers and invoke base destructor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02091e7c.txt.
 */
extern char UNK_020faf48[];extern void FUN_020ba8b4(void *),FUN_02091a28(void *);void *FUN_02091e7c(void **s){s[0]=UNK_020faf48;if(s[17]){FUN_020ba8b4(s[17]);s[17]=0;}if(s[16]){FUN_020ba8b4(s[16]);s[16]=0;}if(s[15]){FUN_020ba8b4(s[15]);s[15]=0;}if(s[23]){FUN_020ba8b4(s[23]);s[23]=0;}if(s[22]){FUN_020ba8b4(s[22]);s[22]=0;}if(s[21]){FUN_020ba8b4(s[21]);s[21]=0;}if(s[20]){FUN_020ba8b4(s[20]);s[20]=0;}if(s[19]){FUN_020ba8b4(s[19]);s[19]=0;}if(s[18]){FUN_020ba8b4(s[18]);s[18]=0;}if(s[14]){FUN_020ba8b4(s[14]);s[14]=0;}FUN_02091a28(s);return s;}
