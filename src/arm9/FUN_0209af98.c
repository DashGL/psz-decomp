// FUN_0209af98 @ 0x0209af98 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_0209af98 @ 0x0209af98 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Find signed identifier and materialize associated descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209af98.txt.
 */
extern int FUN_0209aeec(void);extern void FUN_0209afe0(void *,void *,int);int FUN_0209af98(int id,void *out){if(FUN_0209aeec()){char *s=*(char **)0x0211a61c,*p=s+28,*end=p+8*(*(int *)(s+156));for(;p<end;p+=8)if(*(short *)p==(short)id){FUN_0209afe0(p+4,out,0);return 1;}}return 0;}
