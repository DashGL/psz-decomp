// FUN_02097b04 @ 0x02097b04 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02097b04 @ 0x02097b04 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return completed for invalid state or expired decremented counter.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097b04.txt.
 */
extern int FUN_02097134(void *); int FUN_02097b04(char *self) { if(!FUN_02097134(self+36)) { int value=*(int *)(self+44)-1; *(int *)(self+44)=value; if(value<=0) return 1; return 0; } return 1; }
