// FUN_020771c4 @ 0x020771c4 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_020771c4 @ 0x020771c4 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Conditionally enable component and clear notification flag.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020771c4.txt.
 */
extern void FUN_02032dfc(void *,void *),FUN_02030808(void *,int,int);extern int FUN_0206d428(void *),FUN_02030700(void *);void FUN_020771c4(char *self,int mode){if(mode==0){unsigned int desc[5];FUN_02032dfc(desc,*(void **)0x02108c64);if(FUN_0206d428(desc) && !FUN_02030700(self+88))FUN_02030808(self+88,1,0);*(unsigned int *)(self+84)&=~2;}}
