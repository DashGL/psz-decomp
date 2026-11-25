// FUN_020b7efc @ 0x020b7efc (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020b7efc @ 0x020b7efc (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compare entity current value against requested percentage.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7efc.txt.
 */
extern int FUN_0203ae60(void *);int FUN_020b7efc(char *self,int percent){if(self && !FUN_0203ae60(self)){int threshold=percent*(*(unsigned short *)(self+92))/100;return *(unsigned short *)(self+334)<=threshold;}return 0;}
