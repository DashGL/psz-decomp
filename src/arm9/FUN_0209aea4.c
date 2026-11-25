// FUN_0209aea4 @ 0x0209aea4 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_0209aea4 @ 0x0209aea4 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve active category record and materialize its descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209aea4.txt.
 */
extern int FUN_0209aeec(void),FUN_0209af04(void *,int,int);extern void FUN_0209afe0(void *,void *,int);int FUN_0209aea4(int category,int index,void *out){if(FUN_0209aeec()){int n=FUN_0209af04(*(void **)0x0211a61c,category,index);if(n!=-1){char *p=*(char **)(*(char **)0x0211a61c+12)+6*n;FUN_0209afe0(p+2,out,*(signed char *)p);return 1;}}return 0;}
