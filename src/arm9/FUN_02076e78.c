// FUN_02076e78 @ 0x02076e78 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076e78 @ 0x02076e78 (inventory code 0x68, thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize scene entity and register matching spawn positions.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076e78.txt.
 */
extern char UNK_020fa168[];extern void *UNK_02108c58,*UNK_02108c64;extern void FUN_0203020c(void *,void *,int),FUN_020302e8(void *,void *),FUN_02031220(void *,void *,unsigned short),FUN_02031230(void *,void *,unsigned short);extern int FUN_02032c3c(void *,int);void *FUN_02076e78(char *s,void *source){void *manager;int first[3],second[3];FUN_0203020c(s,source,1);*(void **)s=UNK_020fa168;*(void **)(s+48)=**(void ***)(s+4);manager=UNK_02108c58;if(manager){if(FUN_02032c3c(UNK_02108c64,**(short **)(s+48))){FUN_020302e8(first,s);FUN_02031220(manager,first,*(unsigned short *)(*(char **)(s+4)+16));}if(**(short **)(s+48)==0){FUN_020302e8(second,s);FUN_02031230(manager,second,*(unsigned short *)(*(char **)(s+4)+16));}}return s;}
