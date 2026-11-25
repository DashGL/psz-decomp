// FUN_0206e670 @ 0x0206e670 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206e670 @ 0x0206e670
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Unlink primary doubly linked membership; if previous absent update manager sentinel.
 * Evidence: scratch/coverage-root/batch12/0206e670.txt.
 */
extern unsigned char *FUN_02033c10(void *,unsigned int);
void FUN_0206e670(unsigned char *self){unsigned char *prev=*(unsigned char **)(self+8);if(prev)*(void **)(prev+4)=*(void **)(self+4);else {void *manager=*(void **)0x02108c84;if(manager)*(void **)(FUN_02033c10(manager,*(unsigned short *)(self+20))+4)=*(void **)(self+4);}if(*(void **)(self+4))*(void **)(*(unsigned char **)(self+4)+8)=*(void **)(self+8);}
