// FUN_02074dbc @ 0x02074dbc (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02074dbc @ 0x02074dbc (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate record array and initialize fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074dbc.txt.
 */
typedef struct { unsigned int p; unsigned short a,b; } Record; extern void *FUN_020ba8a0(unsigned int); void FUN_02074dbc(char *self) { int i; *(void **)(self+176)=FUN_020ba8a0(*(unsigned int *)(self+180)*8); for(i=0;i<*(int *)(self+180);i++) { Record *p=*(Record **)(self+176)+i; p->p=0;p->a=0;p->b=0; } }
