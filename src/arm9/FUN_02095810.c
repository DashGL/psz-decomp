// FUN_02095810 @ 0x02095810 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02095810 @ 0x02095810 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy one of four records only when type byte is two.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02095810.txt.
 */
extern void FUN_02039534(void *,void *); int FUN_02095810(char *self,void *dest,unsigned int index) { if(index<4) { char *p=self+720+16*index; if((unsigned char)*p==2) { FUN_02039534(dest,p); return 1; } } return 0; }
