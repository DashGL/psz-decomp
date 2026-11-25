// FUN_0207720c @ 0x0207720c (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_0207720c @ 0x0207720c (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send one-time state notification and play associated effect.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207720c.txt.
 */
extern int FUN_02078b6c(int),FUN_0207725c(void *),FUN_02033418(void *,int,int);extern void FUN_020c193c(int,int,int,int,int);void FUN_0207720c(char *self){if(!(*(unsigned int *)(self+84)&2) && FUN_02078b6c(0)){int mode=FUN_0207725c(self);if(FUN_02033418(*(void **)0x02108c68,2,mode)){FUN_020c193c(4,1,0,0,-1);*(unsigned int *)(self+84)|=2;}}}
