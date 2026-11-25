// FUN_02095a8c @ 0x02095a8c (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_02095a8c @ 0x02095a8c (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check active range against descriptor fixed-point bounds.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02095a8c.txt.
 */
extern unsigned char *FUN_020384a4(void *,int);extern int FUN_020424b4(void *,int);int FUN_02095a8c(char *s){if((unsigned int)(*(int *)(s+576)-9)<=2){unsigned char *p=FUN_020384a4(s,*(int *)(s+208));if(p && *(void **)(s+140)){int value=FUN_020424b4(*(void **)(s+140),0);if(((int)p[4]<<12)<=value && value<=((int)p[5]<<12))return 1;}}return 0;}
