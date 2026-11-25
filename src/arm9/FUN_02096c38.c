// FUN_02096c38 @ 0x02096c38 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02096c38 @ 0x02096c38 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Collect active slots, process each and clear active mask.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096c38.txt.
 */
extern int FUN_02096958(void *,int *); extern void FUN_020965cc(void *,int); void FUN_02096c38(char *self) { int ids[5],count=FUN_02096958(self,ids),i; for(i=0;i<count;i++) FUN_020965cc(self,ids[i]); *(unsigned short *)(self+36)=0; }
